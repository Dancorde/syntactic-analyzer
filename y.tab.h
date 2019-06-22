#define pr_program 257
#define pr_id 258
#define pr_begin 259
#define pr_end 260
#define pr_var 261
#define pr_integer 262
#define pr_real 263
#define pr_const 264
#define pr_read 265
#define pr_write 266
#define pr_procedure 267
#define pr_if 268
#define pr_then 269
#define pr_else 270
#define pr_do 271
#define pr_while 272
#define pr_for 273
#define pr_to 274
#define op_atribuicao 275
#define op_ari_igual 276
#define op_ari_mult 277
#define op_ari_div 278
#define op_ari_adi 279
#define op_ari_sub 280
#define op_rel_igual 281
#define op_rel_diferente 282
#define op_rel_maior 283
#define op_rel_menor 284
#define op_rel_maiorIgual 285
#define op_rel_menorIgual 286
#define ponto 287
#define ponto_virgula 288
#define virgula 289
#define dois_pontos 290
#define abre_par 291
#define fecha_par 292
#define numero_int 293
#define numero_real 294
#ifdef YYSTYPE
#undef  YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
#endif
#ifndef YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
typedef union {
	int integer;
	char *string;
	double real;
} YYSTYPE;
#endif /* !YYSTYPE_IS_DECLARED */
extern YYSTYPE yylval;
