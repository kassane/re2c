#include "src/encoding/utf8/utf8.h"

namespace re2c {

uint32_t utf8::rune_to_bytes(uint32_t* str, rune c) {
    // one byte sequence: 0-0x7F => 0xxxxxxx
    if (c <= MAX_1BYTE_RUNE) {
        str[0] = PREFIX_1BYTE | c;
        return 1;
    }

    // two byte sequence: 0x80-0x7FF => 110xxxxx 10xxxxxx
    if (c <= MAX_2BYTE_RUNE) {
        str[0] = PREFIX_2BYTE | (c >> 1*SHIFT);
        str[1] = INFIX        | (c & MASK);
        return 2;
    }

    // If the Rune is out of range, convert it to the error rune. Do this test here because the
    // error rune encodes to three bytes. Doing it earlier would duplicate work, since an out of
    // range Rune wouldn't have fit in one or two bytes.
    if (c > MAX_RUNE) {
        c = ERROR;
    }

    // three byte sequence: 0x800 - 0xFFFF => 1110xxxx 10xxxxxx 10xxxxxx
    if (c <= MAX_3BYTE_RUNE) {
        str[0] = PREFIX_3BYTE | (c >> 2*SHIFT);
        str[1] = INFIX        | ((c >> 1*SHIFT) & MASK);
        str[2] = INFIX        | (c & MASK);
        return 3;
    }

    // four byte sequence (21-bit value): 0x10000 - 0x1FFFFF => 11110xxx 10xxxxxx 10xxxxxx 10xxxxxx
    str[0] = PREFIX_4BYTE | (c >> 3*SHIFT);
    str[1] = INFIX        | ((c >> 2*SHIFT) & MASK);
    str[2] = INFIX        | ((c >> 1*SHIFT) & MASK);
    str[3] = INFIX        | (c & MASK);
    return 4;
}

// this function assumes that the input has been validated
uint32_t utf8::decode_unsafe(const char* str) {
    // 1-unit sequence: 0-0x7F => 0xxxxxxx
    const uint32_t c = (uint8_t)str[0];
    if (c < INFIX) {
        return c;
    }

    // 2-unit sequence: 0x80-0x7FF => 110xxxxx 10xxxxxx
    const uint32_t c1 = (uint8_t)str[1] ^ INFIX;
    if (c < PREFIX_3BYTE) {
        return ((c << SHIFT) | c1) & MAX_2BYTE_RUNE;
    }

    // 3-unit sequence: 0x800 - 0xFFFF => 1110xxxx 10xxxxxx 10xxxxxx
    const uint32_t c2 = (uint8_t)str[2] ^ INFIX;
    if (c < PREFIX_4BYTE) {
        return ((((c << SHIFT) | c1) << SHIFT) | c2) & MAX_3BYTE_RUNE;
    }

    // 4-unit sequence (21-bit value): 0x10000 - 0x1FFFFF => 11110xxx 10xxxxxx 10xxxxxx 10xxxxxx
    const uint32_t c3 = (uint8_t)str[3] ^ INFIX;
    if (c < PREFIX_5BYTE) {
        return ((((((c << SHIFT) | c1) << SHIFT) | c2) << SHIFT) | c3) & MAX_4BYTE_RUNE;
    }

    return ERROR;
}

uint32_t utf8::rune_length(rune r) {
    if (r <= MAX_2BYTE_RUNE) {
        return r <= MAX_1BYTE_RUNE ? 1 : 2;
    } else {
        return r <= MAX_3BYTE_RUNE ? 3 : 4;
    }
}

utf8::rune utf8::max_rune(uint32_t i) {
    switch (i) {
    case 1:
        return MAX_1BYTE_RUNE;
    case 2:
        return MAX_2BYTE_RUNE;
    case 3:
        return MAX_3BYTE_RUNE;
    case 4:
        return MAX_4BYTE_RUNE;
    default:
        return ERROR;
    }
}

} // namespace re2c
