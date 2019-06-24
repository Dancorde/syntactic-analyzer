%{
  #include <stdio.h>
  #include <stdlib.h>
  #include <string.h>

  extern int yylex();
  extern void yyerror (const char *);
  extern int yylineno;

  FILE* file = NULL;
%}

%define parse.error verbose

%union {
	int integer;
	char *string;
	double real;
}

%start PROGRAMA

%token <string> pr_program
%token <string> pr_id
%token <string> pr_begin
%token <string> pr_end
%token <string> pr_var
%token <string> pr_integer
%token <string> pr_real
%token <string> pr_const
%token <string> pr_read
%token <string> pr_write
%token <string> pr_procedure
%token <string> pr_if
%token <string> pr_then
%token <string> pr_else
%token <string> pr_do
%token <string> pr_while
%token <string> pr_for
%token <string> pr_to

%token <string> op_atribuicao op_ari_igual op_ari_mult op_ari_div op_ari_adi op_ari_sub

%token <string> op_rel_igual op_rel_diferente op_rel_maior op_rel_menor op_rel_maiorIgual op_rel_menorIgual 

%token <string> ponto ponto_virgula virgula dois_pontos abre_par fecha_par

%token <string> numero_int
%token <string> numero_real

%%

PROGRAMA: pr_program pr_id ponto_virgula CORPO ponto {}
;

CORPO: DC pr_begin COMANDOS pr_end {}
;

DC: DC_C DC_V DC_P {}
;

DC_C: pr_const pr_id op_ari_igual NUMERO ponto_virgula DC_C {}
| 
;

DC_V: pr_var VARIAVEIS dois_pontos TIPO_VAR ponto_virgula DC_V {}
| 
;

TIPO_VAR: pr_real {}
| pr_integer {}
;

VARIAVEIS: pr_id MAIS_VAR {}
;

MAIS_VAR: virgula VARIAVEIS {}
| {}
;

DC_P: pr_procedure pr_id PARAMETROS ponto_virgula CORPO_P DC_P {}
| {}
;

PARAMETROS: abre_par LISTA_PAR fecha_par {}
| {}
;

LISTA_PAR: VARIAVEIS dois_pontos TIPO_VAR MAIS_PAR {}
;

MAIS_PAR: ponto_virgula LISTA_PAR {}
| {}
;

CORPO_P: DC_LOC pr_begin COMANDOS pr_end ponto_virgula {}
;

DC_LOC: DC_V {}
;

LISTA_ARG: abre_par ARGUMENTOS fecha_par {}
| {}
;

ARGUMENTOS: pr_id MAIS_ID {}
;

MAIS_ID: ponto_virgula ARGUMENTOS {}
| {}
;

PFALSA: pr_else CMD {}
| {}
;

COMANDOS: CMD ponto_virgula COMANDOS {}
| {}
;

CMD: pr_read abre_par VARIAVEIS fecha_par {}
| pr_write abre_par VARIAVEIS fecha_par {}
| pr_while abre_par CONDICAO fecha_par pr_do CMD {}
| pr_while abre_par error fecha_par pr_do CMD {  }
| pr_if CONDICAO pr_then CMD PFALSA {}
| pr_id op_atribuicao EXPRESSAO {}
| pr_id LISTA_ARG {}
| pr_begin COMANDOS pr_end {}
| pr_for pr_id op_atribuicao numero_int pr_to numero_int pr_do CMD {}
;

CONDICAO: EXPRESSAO RELACAO EXPRESSAO {}
| EXPRESSAO error EXPRESSAO {  }
;

RELACAO: op_ari_igual {}
| op_rel_diferente {}
| op_rel_maiorIgual {}
| op_rel_menorIgual {}
| op_rel_maior {}
| op_rel_menor{}
;

EXPRESSAO: TERMO OUTROS_TERMOS {}
;

OP_UN: op_ari_adi {}
| op_ari_sub {}
| {}
;

OUTROS_TERMOS: OP_AD TERMO OUTROS_TERMOS {}
| {}
;

OP_AD: op_ari_adi {}
| op_ari_sub {}
;

TERMO: OP_UN FATOR MAIS_FATORES {}
;

MAIS_FATORES: OP_MUL FATOR MAIS_FATORES {}
| {}
;

OP_MUL: op_ari_mult {}
| op_ari_div {}
;

FATOR: pr_id {}
| NUMERO {}
| abre_par EXPRESSAO fecha_par {}
;

NUMERO: numero_int {}
| numero_real {}
;

%%

int main(int argc, char *argv[]){
  /* Abertura do arquivo de entrada. */
  if ( argc > 1 ) {
    file = fopen(argv[1], "r");
  }

  yyparse();





  fclose(file);

  return 0;
}
