/* Generated by re2c */



{
	YYCTYPE yych;
yyFillLabel0:
	yych = *YYCURSOR;
	switch (yych) {
	case 'a':	goto yy4;
	default:
		if (YYLIMIT <= YYCURSOR) {
			if (fill() == 0) goto yyFillLabel0;
			goto yyeofrule2;
		}
		goto yy2;
	}
yy2:
	++YYCURSOR;
yy3:
	{ return FAIL; }
yy4:
	++YYCURSOR;
	{ return OK; }
yyeofrule2:
	{ return EOF; }
}



{
	YYCTYPE yych;
yyFillLabel1:
	yych = *YYCURSOR;
	switch (yych) {
	case 'a':	goto yy10;
	default:
		if (YYLIMIT <= YYCURSOR) {
			if (fill() == 0) goto yyFillLabel1;
			goto yyeofrule3;
		}
		goto yy8;
	}
yy8:
	++YYCURSOR;
yy9:
	{ return FAIL; }
yy10:
	++YYCURSOR;
	{ return OK; }
yyeofrule3:
	{ return EOF; }
}



{
	YYCTYPE yych;
yyFillLabel2:
	yych = *YYCURSOR;
	switch (yych) {
	case 'a':	goto yy16;
	default:
		if (YYLIMIT <= YYCURSOR) {
			if (fill () == 0) goto yyFillLabel2;
			goto yyeofrule4;
		}
		goto yy14;
	}
yy14:
	++YYCURSOR;
yy15:
	{ return FAIL; }
yy16:
	++YYCURSOR;
	{ return OK; }
yyeofrule4:
	{ return EOF; }
}



{
	YYCTYPE yych;
yyFillLabel3:
	yych = *YYCURSOR;
	switch (yych) {
	case 'a':	goto yy22;
	default:
		if (YYLIMIT <= YYCURSOR) {
			if (fill() == 0) goto yyFillLabel3;
			goto yyeofrule5;
		}
		goto yy20;
	}
yy20:
	++YYCURSOR;
yy21:
	{ return FAIL; }
yy22:
	++YYCURSOR;
	{ return OK; }
yyeofrule5:
	{ return EOF; }
}

