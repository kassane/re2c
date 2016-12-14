/* Generated by re2c */
#line 1 "cnokw.re"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define	ADDEQ	257
#define	ANDAND	258
#define	ANDEQ	259
#define	ARRAY	260
#define	ASM	261
#define	AUTO	262
#define	BREAK	263
#define	CASE	264
#define	CHAR	265
#define	CONST	266
#define	CONTINUE	267
#define	DECR	268
#define	DEFAULT	269
#define	DEREF	270
#define	DIVEQ	271
#define	DO	272
#define	DOUBLE	273
#define	ELLIPSIS	274
#define	ELSE	275
#define	ENUM	276
#define	EQL	277
#define	EXTERN	278
#define	FCON	279
#define	FLOAT	280
#define	FOR	281
#define	FUNCTION	282
#define	GEQ	283
#define	GOTO	284
#define	ICON	285
#define	ID	286
#define	IF	287
#define	INCR	288
#define	INT	289
#define	LEQ	290
#define	LONG	291
#define	LSHIFT	292
#define	LSHIFTEQ	293
#define	MODEQ	294
#define	MULEQ	295
#define	NEQ	296
#define	OREQ	297
#define	OROR	298
#define	POINTER	299
#define	REGISTER	300
#define	RETURN	301
#define	RSHIFT	302
#define	RSHIFTEQ	303
#define	SCON	304
#define	SHORT	305
#define	SIGNED	306
#define	SIZEOF	307
#define	STATIC	308
#define	STRUCT	309
#define	SUBEQ	310
#define	SWITCH	311
#define	TYPEDEF	312
#define	UNION	313
#define	UNSIGNED	314
#define	VOID	315
#define	VOLATILE	316
#define	WHILE	317
#define	XOREQ	318
#define	EOI	319

typedef unsigned int uint;
typedef unsigned char uchar;

#define	BSIZE	8192

#define	YYCTYPE		uchar
#define	YYCURSOR	cursor
#define	YYLIMIT		s->lim
#define	YYMARKER	s->ptr
#define	YYFILL(n)	{cursor = fill(s, cursor);}

#define	RET(i)	{s->cur = cursor; return i;}

typedef struct Scanner {
    int			fd;
    uchar		*bot, *tok, *ptr, *cur, *pos, *lim, *top, *eof;
    uint		line;
} Scanner;

uchar *fill(Scanner *s, uchar *cursor){
    if(!s->eof){
	uint cnt = s->tok - s->bot;
	if(cnt){
	    memcpy(s->bot, s->tok, s->lim - s->tok);
	    s->tok = s->bot;
	    s->ptr -= cnt;
	    cursor -= cnt;
	    s->pos -= cnt;
	    s->lim -= cnt;
	}
	if((s->top - s->lim) < BSIZE){
	    uchar *buf = (uchar*) malloc(((s->lim - s->bot) + BSIZE)*sizeof(uchar));
	    memcpy(buf, s->tok, s->lim - s->tok);
	    s->tok = buf;
	    s->ptr = &buf[s->ptr - s->bot];
	    cursor = &buf[cursor - s->bot];
	    s->pos = &buf[s->pos - s->bot];
	    s->lim = &buf[s->lim - s->bot];
	    s->top = &s->lim[BSIZE];
	    free(s->bot);
	    s->bot = buf;
	}
	if((cnt = read(s->fd, (char*) s->lim, BSIZE)) != BSIZE){
	    s->eof = &s->lim[cnt]; *(s->eof)++ = '\n';
	}
	s->lim += cnt;
    }
    return cursor;
}

int scan(Scanner *s){
	uchar *cursor = s->cur;
std:
	s->tok = cursor;
#line 133 "cnokw.re"



#line 130 "cnokw.c"
{
	YYCTYPE yych;
	unsigned int yyaccept = 0;
	if ((YYLIMIT - YYCURSOR) < 4) YYFILL(4);
	yych = *YYCURSOR;
	switch (yych) {
	case '\t':
	case '\v':
	case '\f':
	case ' ':	goto yy4;
	case '\n':	goto yy7;
	case '!':	goto yy9;
	case '"':	goto yy11;
	case '%':	goto yy12;
	case '&':	goto yy14;
	case '\'':	goto yy16;
	case '(':	goto yy17;
	case ')':	goto yy19;
	case '*':	goto yy21;
	case '+':	goto yy23;
	case ',':	goto yy25;
	case '-':	goto yy27;
	case '.':	goto yy29;
	case '/':	goto yy31;
	case '0':	goto yy33;
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':	goto yy35;
	case ':':	goto yy37;
	case ';':	goto yy39;
	case '<':	goto yy41;
	case '=':	goto yy43;
	case '>':	goto yy45;
	case '?':	goto yy47;
	case 'A':
	case 'B':
	case 'C':
	case 'D':
	case 'E':
	case 'F':
	case 'G':
	case 'H':
	case 'I':
	case 'J':
	case 'K':
	case 'L':
	case 'M':
	case 'N':
	case 'O':
	case 'P':
	case 'Q':
	case 'R':
	case 'S':
	case 'T':
	case 'U':
	case 'V':
	case 'W':
	case 'X':
	case 'Y':
	case 'Z':
	case '_':
	case 'a':
	case 'b':
	case 'c':
	case 'd':
	case 'e':
	case 'f':
	case 'g':
	case 'h':
	case 'i':
	case 'j':
	case 'k':
	case 'l':
	case 'm':
	case 'n':
	case 'o':
	case 'p':
	case 'q':
	case 'r':
	case 's':
	case 't':
	case 'u':
	case 'v':
	case 'w':
	case 'x':
	case 'y':
	case 'z':	goto yy49;
	case '[':	goto yy52;
	case ']':	goto yy54;
	case '^':	goto yy56;
	case '{':	goto yy58;
	case '|':	goto yy60;
	case '}':	goto yy62;
	case '~':	goto yy64;
	default:	goto yy2;
	}
yy2:
	++YYCURSOR;
yy3:
#line 208 "cnokw.re"
	{
		printf("unexpected character: %c\n", *s->tok);
		goto std;
	    }
#line 241 "cnokw.c"
yy4:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
	case '\t':
	case '\v':
	case '\f':
	case ' ':	goto yy4;
	default:	goto yy6;
	}
yy6:
#line 198 "cnokw.re"
	{ goto std; }
#line 256 "cnokw.c"
yy7:
	++YYCURSOR;
#line 201 "cnokw.re"
	{
		if(cursor == s->eof) RET(EOI);
		s->pos = cursor; s->line++;
		goto std;
	    }
#line 265 "cnokw.c"
yy9:
	++YYCURSOR;
	switch ((yych = *YYCURSOR)) {
	case '=':	goto yy66;
	default:	goto yy10;
	}
yy10:
#line 184 "cnokw.re"
	{ RET('!'); }
#line 275 "cnokw.c"
yy11:
	yyaccept = 0;
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
	case '\n':	goto yy3;
	default:	goto yy69;
	}
yy12:
	++YYCURSOR;
	switch ((yych = *YYCURSOR)) {
	case '=':	goto yy74;
	default:	goto yy13;
	}
yy13:
#line 190 "cnokw.re"
	{ RET('%'); }
#line 292 "cnokw.c"
yy14:
	++YYCURSOR;
	switch ((yych = *YYCURSOR)) {
	case '&':	goto yy76;
	case '=':	goto yy78;
	default:	goto yy15;
	}
yy15:
#line 183 "cnokw.re"
	{ RET('&'); }
#line 303 "cnokw.c"
yy16:
	yyaccept = 0;
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
	case '\n':	goto yy3;
	default:	goto yy81;
	}
yy17:
	++YYCURSOR;
#line 178 "cnokw.re"
	{ RET('('); }
#line 315 "cnokw.c"
yy19:
	++YYCURSOR;
#line 179 "cnokw.re"
	{ RET(')'); }
#line 320 "cnokw.c"
yy21:
	++YYCURSOR;
	switch ((yych = *YYCURSOR)) {
	case '=':	goto yy84;
	default:	goto yy22;
	}
yy22:
#line 188 "cnokw.re"
	{ RET('*'); }
#line 330 "cnokw.c"
yy23:
	++YYCURSOR;
	switch ((yych = *YYCURSOR)) {
	case '+':	goto yy86;
	case '=':	goto yy88;
	default:	goto yy24;
	}
yy24:
#line 187 "cnokw.re"
	{ RET('+'); }
#line 341 "cnokw.c"
yy25:
	++YYCURSOR;
#line 175 "cnokw.re"
	{ RET(','); }
#line 346 "cnokw.c"
yy27:
	++YYCURSOR;
	switch ((yych = *YYCURSOR)) {
	case '-':	goto yy90;
	case '=':	goto yy92;
	case '>':	goto yy94;
	default:	goto yy28;
	}
yy28:
#line 186 "cnokw.re"
	{ RET('-'); }
#line 358 "cnokw.c"
yy29:
	yyaccept = 1;
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
	case '.':	goto yy96;
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':	goto yy97;
	default:	goto yy30;
	}
yy30:
#line 182 "cnokw.re"
	{ RET('.'); }
#line 379 "cnokw.c"
yy31:
	++YYCURSOR;
	switch ((yych = *YYCURSOR)) {
	case '*':	goto yy100;
	case '=':	goto yy102;
	default:	goto yy32;
	}
yy32:
#line 189 "cnokw.re"
	{ RET('/'); }
#line 390 "cnokw.c"
yy33:
	yyaccept = 2;
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
	case 'X':
	case 'x':	goto yy107;
	default:	goto yy36;
	}
yy34:
#line 142 "cnokw.re"
	{ RET(ICON); }
#line 402 "cnokw.c"
yy35:
	yyaccept = 2;
	YYMARKER = ++YYCURSOR;
	if ((YYLIMIT - YYCURSOR) < 3) YYFILL(3);
	yych = *YYCURSOR;
yy36:
	switch (yych) {
	case '.':	goto yy97;
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':	goto yy35;
	case 'E':
	case 'e':	goto yy104;
	case 'L':
	case 'U':
	case 'l':
	case 'u':	goto yy105;
	default:	goto yy34;
	}
yy37:
	++YYCURSOR;
#line 176 "cnokw.re"
	{ RET(':'); }
#line 433 "cnokw.c"
yy39:
	++YYCURSOR;
#line 172 "cnokw.re"
	{ RET(';'); }
#line 438 "cnokw.c"
yy41:
	++YYCURSOR;
	switch ((yych = *YYCURSOR)) {
	case '<':	goto yy108;
	case '=':	goto yy110;
	default:	goto yy42;
	}
yy42:
#line 191 "cnokw.re"
	{ RET('<'); }
#line 449 "cnokw.c"
yy43:
	++YYCURSOR;
	switch ((yych = *YYCURSOR)) {
	case '=':	goto yy112;
	default:	goto yy44;
	}
yy44:
#line 177 "cnokw.re"
	{ RET('='); }
#line 459 "cnokw.c"
yy45:
	++YYCURSOR;
	switch ((yych = *YYCURSOR)) {
	case '=':	goto yy114;
	case '>':	goto yy116;
	default:	goto yy46;
	}
yy46:
#line 192 "cnokw.re"
	{ RET('>'); }
#line 470 "cnokw.c"
yy47:
	++YYCURSOR;
#line 195 "cnokw.re"
	{ RET('?'); }
#line 475 "cnokw.c"
yy49:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':
	case 'A':
	case 'B':
	case 'C':
	case 'D':
	case 'E':
	case 'F':
	case 'G':
	case 'H':
	case 'I':
	case 'J':
	case 'K':
	case 'L':
	case 'M':
	case 'N':
	case 'O':
	case 'P':
	case 'Q':
	case 'R':
	case 'S':
	case 'T':
	case 'U':
	case 'V':
	case 'W':
	case 'X':
	case 'Y':
	case 'Z':
	case '_':
	case 'a':
	case 'b':
	case 'c':
	case 'd':
	case 'e':
	case 'f':
	case 'g':
	case 'h':
	case 'i':
	case 'j':
	case 'k':
	case 'l':
	case 'm':
	case 'n':
	case 'o':
	case 'p':
	case 'q':
	case 'r':
	case 's':
	case 't':
	case 'u':
	case 'v':
	case 'w':
	case 'x':
	case 'y':
	case 'z':	goto yy49;
	default:	goto yy51;
	}
yy51:
#line 138 "cnokw.re"
	{ RET(ID); }
#line 549 "cnokw.c"
yy52:
	++YYCURSOR;
#line 180 "cnokw.re"
	{ RET('['); }
#line 554 "cnokw.c"
yy54:
	++YYCURSOR;
#line 181 "cnokw.re"
	{ RET(']'); }
#line 559 "cnokw.c"
yy56:
	++YYCURSOR;
	switch ((yych = *YYCURSOR)) {
	case '=':	goto yy118;
	default:	goto yy57;
	}
yy57:
#line 193 "cnokw.re"
	{ RET('^'); }
#line 569 "cnokw.c"
yy58:
	++YYCURSOR;
#line 173 "cnokw.re"
	{ RET('{'); }
#line 574 "cnokw.c"
yy60:
	++YYCURSOR;
	switch ((yych = *YYCURSOR)) {
	case '=':	goto yy120;
	case '|':	goto yy122;
	default:	goto yy61;
	}
yy61:
#line 194 "cnokw.re"
	{ RET('|'); }
#line 585 "cnokw.c"
yy62:
	++YYCURSOR;
#line 174 "cnokw.re"
	{ RET('}'); }
#line 590 "cnokw.c"
yy64:
	++YYCURSOR;
#line 185 "cnokw.re"
	{ RET('~'); }
#line 595 "cnokw.c"
yy66:
	++YYCURSOR;
#line 171 "cnokw.re"
	{ RET(NEQ); }
#line 600 "cnokw.c"
yy68:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
yy69:
	switch (yych) {
	case '\n':	goto yy70;
	case '"':	goto yy71;
	case '\\':	goto yy73;
	default:	goto yy68;
	}
yy70:
	YYCURSOR = YYMARKER;
	switch (yyaccept) {
	case 0: 	goto yy3;
	case 1: 	goto yy30;
	case 2: 	goto yy34;
	default:	goto yy99;
	}
yy71:
	++YYCURSOR;
#line 148 "cnokw.re"
	{ RET(SCON); }
#line 624 "cnokw.c"
yy73:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
	case '"':
	case '\'':
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '?':
	case '\\':
	case 'a':
	case 'b':
	case 'f':
	case 'n':
	case 'r':
	case 't':
	case 'v':	goto yy68;
	case 'x':	goto yy124;
	default:	goto yy70;
	}
yy74:
	++YYCURSOR;
#line 157 "cnokw.re"
	{ RET(MODEQ); }
#line 656 "cnokw.c"
yy76:
	++YYCURSOR;
#line 166 "cnokw.re"
	{ RET(ANDAND); }
#line 661 "cnokw.c"
yy78:
	++YYCURSOR;
#line 158 "cnokw.re"
	{ RET(ANDEQ); }
#line 666 "cnokw.c"
yy80:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
yy81:
	switch (yych) {
	case '\n':	goto yy70;
	case '\'':	goto yy82;
	case '\\':	goto yy83;
	default:	goto yy80;
	}
yy82:
	++YYCURSOR;
	goto yy34;
yy83:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
	case '"':
	case '\'':
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '?':
	case '\\':
	case 'a':
	case 'b':
	case 'f':
	case 'n':
	case 'r':
	case 't':
	case 'v':	goto yy80;
	case 'x':	goto yy125;
	default:	goto yy70;
	}
yy84:
	++YYCURSOR;
#line 155 "cnokw.re"
	{ RET(MULEQ); }
#line 712 "cnokw.c"
yy86:
	++YYCURSOR;
#line 163 "cnokw.re"
	{ RET(INCR); }
#line 717 "cnokw.c"
yy88:
	++YYCURSOR;
#line 153 "cnokw.re"
	{ RET(ADDEQ); }
#line 722 "cnokw.c"
yy90:
	++YYCURSOR;
#line 164 "cnokw.re"
	{ RET(DECR); }
#line 727 "cnokw.c"
yy92:
	++YYCURSOR;
#line 154 "cnokw.re"
	{ RET(SUBEQ); }
#line 732 "cnokw.c"
yy94:
	++YYCURSOR;
#line 165 "cnokw.re"
	{ RET(DEREF); }
#line 737 "cnokw.c"
yy96:
	yych = *++YYCURSOR;
	switch (yych) {
	case '.':	goto yy126;
	default:	goto yy70;
	}
yy97:
	yyaccept = 3;
	YYMARKER = ++YYCURSOR;
	if ((YYLIMIT - YYCURSOR) < 3) YYFILL(3);
	yych = *YYCURSOR;
	switch (yych) {
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':	goto yy97;
	case 'E':
	case 'e':	goto yy104;
	case 'F':
	case 'L':
	case 'f':
	case 'l':	goto yy128;
	default:	goto yy99;
	}
yy99:
#line 145 "cnokw.re"
	{ RET(FCON); }
#line 771 "cnokw.c"
yy100:
	++YYCURSOR;
#line 136 "cnokw.re"
	{ goto comment; }
#line 776 "cnokw.c"
yy102:
	++YYCURSOR;
#line 156 "cnokw.re"
	{ RET(DIVEQ); }
#line 781 "cnokw.c"
yy104:
	yych = *++YYCURSOR;
	switch (yych) {
	case '+':
	case '-':	goto yy129;
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':	goto yy130;
	default:	goto yy70;
	}
yy105:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
	case 'L':
	case 'U':
	case 'l':
	case 'u':	goto yy105;
	default:	goto yy34;
	}
yy107:
	yych = *++YYCURSOR;
	switch (yych) {
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':
	case 'A':
	case 'B':
	case 'C':
	case 'D':
	case 'E':
	case 'F':
	case 'a':
	case 'b':
	case 'c':
	case 'd':
	case 'e':
	case 'f':	goto yy132;
	default:	goto yy70;
	}
yy108:
	++YYCURSOR;
	switch ((yych = *YYCURSOR)) {
	case '=':	goto yy134;
	default:	goto yy109;
	}
yy109:
#line 162 "cnokw.re"
	{ RET(LSHIFT); }
#line 846 "cnokw.c"
yy110:
	++YYCURSOR;
#line 168 "cnokw.re"
	{ RET(LEQ); }
#line 851 "cnokw.c"
yy112:
	++YYCURSOR;
#line 170 "cnokw.re"
	{ RET(EQL); }
#line 856 "cnokw.c"
yy114:
	++YYCURSOR;
#line 169 "cnokw.re"
	{ RET(GEQ); }
#line 861 "cnokw.c"
yy116:
	++YYCURSOR;
	switch ((yych = *YYCURSOR)) {
	case '=':	goto yy136;
	default:	goto yy117;
	}
yy117:
#line 161 "cnokw.re"
	{ RET(RSHIFT); }
#line 871 "cnokw.c"
yy118:
	++YYCURSOR;
#line 159 "cnokw.re"
	{ RET(XOREQ); }
#line 876 "cnokw.c"
yy120:
	++YYCURSOR;
#line 160 "cnokw.re"
	{ RET(OREQ); }
#line 881 "cnokw.c"
yy122:
	++YYCURSOR;
#line 167 "cnokw.re"
	{ RET(OROR); }
#line 886 "cnokw.c"
yy124:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':
	case 'A':
	case 'B':
	case 'C':
	case 'D':
	case 'E':
	case 'F':
	case 'a':
	case 'b':
	case 'c':
	case 'd':
	case 'e':
	case 'f':	goto yy68;
	default:	goto yy70;
	}
yy125:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':
	case 'A':
	case 'B':
	case 'C':
	case 'D':
	case 'E':
	case 'F':
	case 'a':
	case 'b':
	case 'c':
	case 'd':
	case 'e':
	case 'f':	goto yy80;
	default:	goto yy70;
	}
yy126:
	++YYCURSOR;
#line 150 "cnokw.re"
	{ RET(ELLIPSIS); }
#line 949 "cnokw.c"
yy128:
	++YYCURSOR;
	goto yy99;
yy129:
	yych = *++YYCURSOR;
	switch (yych) {
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':	goto yy130;
	default:	goto yy70;
	}
yy130:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':	goto yy130;
	case 'F':
	case 'L':
	case 'f':
	case 'l':	goto yy128;
	default:	goto yy99;
	}
yy132:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':
	case 'A':
	case 'B':
	case 'C':
	case 'D':
	case 'E':
	case 'F':
	case 'a':
	case 'b':
	case 'c':
	case 'd':
	case 'e':
	case 'f':	goto yy132;
	case 'L':
	case 'U':
	case 'l':
	case 'u':	goto yy105;
	default:	goto yy34;
	}
yy134:
	++YYCURSOR;
#line 152 "cnokw.re"
	{ RET(LSHIFTEQ); }
#line 1026 "cnokw.c"
yy136:
	++YYCURSOR;
#line 151 "cnokw.re"
	{ RET(RSHIFTEQ); }
#line 1031 "cnokw.c"
}
#line 212 "cnokw.re"


comment:

#line 1038 "cnokw.c"
{
	YYCTYPE yych;
	if ((YYLIMIT - YYCURSOR) < 2) YYFILL(2);
	yych = *YYCURSOR;
	switch (yych) {
	case '\n':	goto yy142;
	case '*':	goto yy144;
	default:	goto yy140;
	}
yy140:
	++YYCURSOR;
yy141:
#line 223 "cnokw.re"
	{ goto comment; }
#line 1053 "cnokw.c"
yy142:
	++YYCURSOR;
#line 218 "cnokw.re"
	{
		if(cursor == s->eof) RET(EOI);
		s->tok = s->pos = cursor; s->line++;
		goto comment;
	    }
#line 1062 "cnokw.c"
yy144:
	yych = *++YYCURSOR;
	switch (yych) {
	case '/':	goto yy145;
	default:	goto yy141;
	}
yy145:
	++YYCURSOR;
#line 216 "cnokw.re"
	{ goto std; }
#line 1073 "cnokw.c"
}
#line 224 "cnokw.re"

}

main(){
    Scanner in;
    int t;
    memset((char*) &in, 0, sizeof(in));
    in.fd = 0;
    while((t = scan(&in)) != EOI){
/*
	printf("%d\t%.*s\n", t, in.cur - in.tok, in.tok);
	printf("%d\n", t);
*/
    }
    close(in.fd);
}
