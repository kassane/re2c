/* Generated by re2c */

{
	YYCTYPE yych;
	if ((YYLIMIT - YYCURSOR) < 3) YYFILL(3);
	yych = *YYCURSOR;
	switch (yych) {
	case 'a':
		yyt1 = NULL;
		yyt2 = YYCURSOR;
		goto yy3;
	case 'b':
		yyt3 = NULL;
		yyt1 = YYCURSOR;
		goto yy5;
	default:
		yyt1 = NULL;
		yyt2 = YYCURSOR;
		goto yy2;
	}
yy2:
	p = yyt1;
	q = yyt2;
	{}
yy3:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
	case 'a':	goto yy3;
	default:	goto yy2;
	}
yy5:
	yych = *(YYMARKER = ++YYCURSOR);
	yyt2 = NULL;
	switch (yych) {
	case 'a':	goto yy6;
	case 'b':	goto yy7;
	default:	goto yy2;
	}
yy6:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'a':	goto yy3;
	default:
		yyt2 = yyt1;
		yyt1 = yyt3;
		goto yy2;
	}
yy7:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'a':	goto yy9;
	default:	goto yy8;
	}
yy8:
	YYCURSOR = YYMARKER;
	yyt2 = NULL;
	goto yy2;
yy9:
	++YYCURSOR;
	goto yy2;
}

re2c: warning: line 3: rule matches empty string [-Wmatch-empty-string]
re2c: warning: line 3: tag 'p' is non-deterministic and induces 2 parallel instances [-Wnondeterministic-tags]
re2c: warning: line 3: tag 'q' is non-deterministic and induces 2 parallel instances [-Wnondeterministic-tags]
