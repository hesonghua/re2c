/* Generated by re2c */
#line 1 "conditions/condtype_forwdecl_cg.re"
// re2c $INPUT -o $OUTPUT -cg
enum cond_t : int;

int main ()
{
	cond_t cond;
	char * YYCURSOR;
#define YYGETCONDITION() cond

#line 13 "conditions/condtype_forwdecl_cg.c"
{
	unsigned char yych;
	static void *yyctable[2] = {
		&&yyc_a,
		&&yyc_b,
	};
	goto *yyctable[YYGETCONDITION()];
/* *********************************** */
yyc_a:
	yych = *YYCURSOR;
	if (yych == 'a') goto yy3;
yy3:
	++YYCURSOR;
#line 13 "conditions/condtype_forwdecl_cg.re"
	{}
#line 29 "conditions/condtype_forwdecl_cg.c"
/* *********************************** */
yyc_b:
	yych = *YYCURSOR;
	if (yych == 'b') goto yy8;
yy8:
	++YYCURSOR;
#line 14 "conditions/condtype_forwdecl_cg.re"
	{}
#line 38 "conditions/condtype_forwdecl_cg.c"
}
#line 15 "conditions/condtype_forwdecl_cg.re"

	return 0;
}

#line 45 "conditions/condtype_forwdecl_cg.c"
enum cond_t : int {
	yyca,
	yycb,
};
#line 19 "conditions/condtype_forwdecl_cg.re"

conditions/condtype_forwdecl_cg.re:15:2: warning: control flow in condition 'a' is undefined for strings that match '[\x0-\x60\x62-\xFF]', use default rule '*' [-Wundefined-control-flow]
conditions/condtype_forwdecl_cg.re:15:2: warning: control flow in condition 'b' is undefined for strings that match '[\x0-\x61\x63-\xFF]', use default rule '*' [-Wundefined-control-flow]