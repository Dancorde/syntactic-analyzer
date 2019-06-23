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
digito [0-9]
letra [a-zA-Z]

numero_real (({digito}+)\.({digito}+))
numero_int {digito}+

identifier ({letra})({letra}|{digito}){0,15}
comment \{[^\}]*\}

%%

{delim} 			{ /* Nao faz nada */ }
{comment} 		{ /* Nao faz nada */ }

{numero_real} { return numero_real; }
{numero_int} 	{ return numero_int; }

"program" 		{ return pr_program; }
"var" 				{ return pr_var; }
"const" 			{ return pr_const; }
"integer" 		{ return pr_integer; }
"real" 				{ return pr_real; }
"begin" 			{ return pr_begin; }
"end" 				{ return pr_end; }
"read" 				{ return pr_read; }
"write" 			{ return pr_write; }
"procedure" 	{ return pr_procedure; }
"if" 					{ return pr_if; }
"then" 				{ return pr_then; }
"else" 				{ return pr_else; }
"do" 					{ return pr_do; }
"while" 			{ return pr_while; }
"for" 				{ return pr_for; }
"to" 					{ return pr_to; }

{identifier} 	{ return pr_id; }

"=="  		{ return op_rel_igual; }
"="  			{ return op_ari_igual; }
"+" 			{ return op_ari_adi; }
"-" 			{ return op_ari_sub; }
"*" 			{ return op_ari_mult; }
"/" 			{ return op_ari_div; }
"<>"  		{ return op_rel_diferente; }
"<="  		{ return op_rel_menorIgual; }
">="  		{ return op_rel_maiorIgual; }
"<"  			{ return op_rel_menor; }
">"  			{ return op_rel_maior; }
":="  		{ return op_atribuicao; }

"."  			{ return ponto; }
","  			{ return virgula; }
";"  			{ return ponto_virgula; }
":"  			{ return dois_pontos; }
"("  			{ return abre_par; }
")"  			{ return fecha_par; }

. 				{ printf("ERROR\nLine %d: lexical error, unrecognized token \"%s\"\n\n", yylineno, yytext);}



%%

int yywrap(){
  return 1;
}

void yyerror(const char *str) { 
    printf("ERROR %s\n", yytext);
		return;
}
