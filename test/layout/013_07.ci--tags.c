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
	case 'a':
		YYMTAGP (yyt2);
		goto yy5;
	default:	goto yy3;
	}
yy3:
	++YYCURSOR;
	{}
yy5:
	++YYCURSOR;
	YYMTAGP (yyt1);
	x = yyt2;
	y = yyt1;
	{}
/* *********************************** */
yyc_y:
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR++;
	{}
}
