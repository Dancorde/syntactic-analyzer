%{
	#include <stdio.h>
	#include <stdlib.h>
  #include <string.h>

  #include "y.tab.h"

	#define YYSTYPE char*
	extern char *yytext;

%}

%option yylineno

delim	[ \t\n]+
digito [0-9]*
letra [a-zA-Z]

numero_int {digito}+
numero_real ({digito}+\.{digito}+)

identifier {letra}({letra}|{digit}){0,15}
comment \{[^\}]*\}

%%

{delim} 	{ /* Nao faz nada */ }
{comment} { /* Nao faz nada */ }

"program"			{ return pr_program; }
"var"					{ return pr_var; }
"const"				{ return pr_const; }
"integer"			{ return pr_integer; }
"real"				{ return pr_real; }
"begin"				{ return pr_begin; }
"end"					{ return pr_end; }
"read"				{ return pr_read; }
"write"				{ return pr_write; }
"procedure"		{ return pr_procedure; }
"if"					{ return pr_if; }
"then"				{ return pr_then; }
"else"				{ return pr_else; }
"do"					{ return pr_do; }
"while"				{ return pr_while; }
"for"					{ return pr_for; }
"to"					{ return pr_to; }

"."  					{ return ponto; }
","  					{ return virgula; }
";"  					{ return ponto_virgula; }
":"  					{ return dois_pontos; }
"("  					{ return abre_par; }
")"  					{ return fecha_par; }

"="  					{ return op_ari_igual; }
"=="  				{ return op_rel_igual; }
"<"  					{ return op_rel_menor; }
">"  					{ return op_rel_maior; }
"<="  				{ return op_rel_menorIgual; }
">="  				{ return op_rel_maiorIgual; }
"<>"  				{ return op_rel_diferente; }
":="  				{ return op_atribuicao; }

. 						{ printf("ERROR\nLine %d: lexical error, unregonized token \"%s\"\n\n", yylineno, yytext);}

%%

