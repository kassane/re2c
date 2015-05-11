#ifndef _re2c_utf16_h
#define _re2c_utf16_h

#include "src/c99_stdint.h"

namespace re2c {

class utf16
{
public:
	typedef uint32_t rune;

	static const uint32_t MAX_1WORD_RUNE;
	static const uint32_t MIN_LEAD_SURR;
	static const uint32_t MIN_TRAIL_SURR;
	static const uint32_t MAX_TRAIL_SURR;

	/* leading surrogate of UTF-16 symbol */
	static inline uint16_t lead_surr(rune r);

	/* trailing surrogate of UTF-16 symbol */
	static inline uint16_t trail_surr(rune r);
};

inline uint16_t utf16::lead_surr(rune r)
{
	return ((r - 0x10000) / 0x400) + MIN_LEAD_SURR;
}

inline uint16_t utf16::trail_surr(rune r)
{
	return ((r - 0x10000) % 0x400) + MIN_TRAIL_SURR;
}

}  // namespace re2c

#endif // _re2c_utf16_h