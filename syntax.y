%{

#define YYSTYPE *char
extern YYSTYPE yylval;

%}

%start PROGRAMA
%token program
%token var
%token const
%token :
%token ,
%token integer
%token real
%token begin
%token end
%token .
%token ;
%token read
%token write
%token procedure
%token if
%token then
%token else
%token do
%token while
%token for
%token to
%token :=
%token =
%token (
%token )
%token <
%token <=
%token >
%token >=
%token <>
%token +
%token -
%left *
%left /
%token id
%token numero_int
%token numero_real

%%

PROGRAMA: program id ; CORPO . { //comando em C }
;

CORPO: DC begin COMANDOS end
;

DC: DC_C DC_V DC_P
;

DC_C: const id = NUMERO ; DC_C 
| 
;

DC_V: var VARIAVEIS: TIPO_VAR ; DC_V 
| 
;

TIPO_VAR: real 
| integer
;

VARIAVEIS: id MAIS_VAR
;

MAIS_VAR: , VARIAVEIS 
| 
;

DC_P: procedure id PARAMETROS ; CORPO_P DC_P 
| 
;

PARAMETROS: ( LISTA_PAR ) 
| 
;

LISTA_PAR: VARIAVEIS: TIPO_VAR MAIS_PAR
;

MAIS_PAR: ; LISTA_PAR 
| 
;

CORPO_P: DC_LOC begin COMANDOS end ;
;

DC_LOC: DC_V
;

LISTA_ARG: ( ARGUMENTOS ) 
| 
;

ARGUMENTOS: id MAIS_ID
;

MAIS_ID: ; ARGUMENTOS 
| 
;

PFALSA: else CMD 
| 
;

COMANDOS: CMD ; COMANDOS 
| 
;

CMD: read ( VARIAVEIS ) 
| write ( VARIAVEIS ) 
| while ( CONDICAO ) do CMD 
| if CONDICAO then CMD PFALSA 
| id := EXPRESSAO 
| id LISTA_ARG 
| begin COMANDOS end
| for id := numero_int to numero_int do CMD 
;

CONDICAO: EXPRESSAO RELACAO EXPRESSAO
;

RELACAO: = 
| <> 
| >= 
| <= 
| > 
| <
;

EXPRESSAO: TERMO OUTROS_TERMOS
;

OP_UN: + 
| - 
| 
;

OUTROS_TERMOS: OP_AD TERMO OUTROS_TERMOS 
| 
;

OP_AD: + 
| -
;

TERMO: OP_UN FATOR MAIS_FATORES
;

MAIS_FATORES: OP_MUL FATOR MAIS_FATORES 
| 
;

OP_MUL: * 
| /
;

FATOR: id 
| NUMERO 
| ( EXPRESSAO )
;

NUMERO: numero_int 
| numero_real
;

/* fazer identificacao de comentarios de 1 linha entre {} ?*/

%%

void yyerror(char *s) {
 fprintf(stderr, "%s\n", s);
 return 0;
}
int main(void) {
 yyparse();
 return 0;
} 