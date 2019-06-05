%{
	#define YYSTYPE char*
	extern char *yytext;
%}

digit [0-9]*
letter [a-zA-Z_]
op [-+*/]
simb [=<>.;:,()]
int {digit}+
real ({digit}+\.{digit}+)

identifier {letter}({letter}|{digit})*
%%
":=" {return *yytext;}
"<=" {return *yytext;}
">=" {return *yytext;}
"<>" {return *yytext;}
"(" {printf("%s - (\n", yytext);}

{op} {return *yytext;}
{simb} {return *yytext;}

{identifier} {if(yyleng < 10) return *yytext; else printf("%s - erro - identificador muito grande\n", yytext);}
{real} {if(yyleng < 15) printf("%s - numero_real\n", yytext); else printf("%s - erro - numero real muito grande\n", yytext);}
{int} {if(yyleng < 15) printf("%s - numero_int\n", yytext); else printf("%s - erro - numero inteiro muito grande\n", yytext);}

"\{"[^\}]*"\}" {}
[ \t\n]+ {}

{digit}+"."[^0-9]*{digit}* {printf("%s - erro - numero real mal formatado\n", yytext);}
. {printf("%s - erro - simbolo não pertence a linguagem\n", yytext);}


%%

int yywrap(void){
	// Libera o buffer atual para reduzir memory leaks
	yy_delete_buffer(YY_CURRENT_BUFFER);
	return 1;
}
