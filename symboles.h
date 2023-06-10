/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
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

#ifndef YY_YY_SYMBOLES_H_INCLUDED
# define YY_YY_SYMBOLES_H_INCLUDED
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
    FIN = 0,
    IDENTIFIANT = 258,
    PARENTHESE_OUVRANTE = 259,
    PARENTHESE_FERMANTE = 260,
    POINT_VIRGULE = 261,
    ENTIER = 262,
    ECRIRE = 263,
    AFFECTATION = 264,
    EGAL = 265,
    DIFFERENT = 266,
    INFERIEUR = 267,
    SUPERIEUR = 268,
    INFERIEUR_EGAL = 269,
    SUPERIEUR_EGAL = 270,
    ACCOLADE_FERMANTE = 271,
    ACCOLADE_OUVRANTE = 272,
    VIRGULE = 273,
    SI = 274,
    SINON = 275,
    SINON_SI = 276,
    LIRE = 277,
    TANT_QUE = 278,
    NON = 279,
    ET = 280,
    OU = 281,
    RETOURNER = 282,
    MOINS = 283,
    DIVISE = 284,
    MODULO = 285,
    FOIS = 286,
    PLUS = 287,
    TYPE_ENTIER = 288,
    TYPE_BOOLEEN = 289,
    BOOLEEN = 290,
    UMOINS = 291
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 18 "analyse_syntaxique.y"

    int entier;
    n_programme* prog;
    n_l_instructions* l_inst;
    n_instruction* inst;
    n_exp* exp;
    n_l_exp* l_exp;
    char* ident;
    type type;
    n_l_fonctions* l_fonctions;
    n_fonction* fonction;
    n_l_parametres* l_parametres;
    n_parametre* parametre;

#line 110 "symboles.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_SYMBOLES_H_INCLUDED  */
