/* Generated by re2c */

{
	YYCTYPE yych;
	switch (YYGETCONDITION()) {
	case yycx:
		goto yyc_x;
	case yycy:
		goto yyc_y;
	}
/* *********************************** */
yyc_x:
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
	case 'a':	goto yy5;
	default:	goto yy3;
	}
yy3:
	++YYCURSOR;
	{}
yy5:
	++YYCURSOR;
	x = YYCURSOR - 1;
	y = YYCURSOR;
	YYSETCONDITION(yycz);
	{}
/* *********************************** */
yyc_y:
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR++;
	YYSETCONDITION(yycx);
	{}
}
