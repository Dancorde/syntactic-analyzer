/* A Bison parser, made by GNU Bison 3.3.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2019 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    pr_program = 258,
    pr_id = 259,
    pr_begin = 260,
    pr_end = 261,
    pr_var = 262,
    pr_integer = 263,
    pr_real = 264,
    pr_const = 265,
    pr_read = 266,
    pr_write = 267,
    pr_procedure = 268,
    pr_if = 269,
    pr_then = 270,
    pr_else = 271,
    pr_do = 272,
    pr_while = 273,
    pr_for = 274,
    pr_to = 275,
    op_atribuicao = 276,
    op_ari_igual = 277,
    op_ari_mult = 278,
    op_ari_div = 279,
    op_ari_adi = 280,
    op_ari_sub = 281,
    op_rel_igual = 282,
    op_rel_diferente = 283,
    op_rel_maior = 284,
    op_rel_menor = 285,
    op_rel_maiorIgual = 286,
    op_rel_menorIgual = 287,
    ponto = 288,
    ponto_virgula = 289,
    virgula = 290,
    dois_pontos = 291,
    abre_par = 292,
    fecha_par = 293,
    numero_int = 294,
    numero_real = 295
  };
#endif
/* Tokens.  */
#define pr_program 258
#define pr_id 259
#define pr_begin 260
#define pr_end 261
#define pr_var 262
#define pr_integer 263
#define pr_real 264
#define pr_const 265
#define pr_read 266
#define pr_write 267
#define pr_procedure 268
#define pr_if 269
#define pr_then 270
#define pr_else 271
#define pr_do 272
#define pr_while 273
#define pr_for 274
#define pr_to 275
#define op_atribuicao 276
#define op_ari_igual 277
#define op_ari_mult 278
#define op_ari_div 279
#define op_ari_adi 280
#define op_ari_sub 281
#define op_rel_igual 282
#define op_rel_diferente 283
#define op_rel_maior 284
#define op_rel_menor 285
#define op_rel_maiorIgual 286
#define op_rel_menorIgual 287
#define ponto 288
#define ponto_virgula 289
#define virgula 290
#define dois_pontos 291
#define abre_par 292
#define fecha_par 293
#define numero_int 294
#define numero_real 295

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 10 "syntax.y" /* yacc.c:1921  */

	int integer;
	char *string;
	double real;

#line 144 "y.tab.h" /* yacc.c:1921  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
