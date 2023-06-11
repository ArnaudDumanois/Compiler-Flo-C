/* A Bison parser, made by GNU Bison 3.7.5.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_SYMBOLES_H_INCLUDED
# define YY_YY_SYMBOLES_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    FIN = 0,                       /* FIN  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    IDENTIFIANT = 258,             /* IDENTIFIANT  */
    PARENTHESE_OUVRANTE = 259,     /* PARENTHESE_OUVRANTE  */
    PARENTHESE_FERMANTE = 260,     /* PARENTHESE_FERMANTE  */
    POINT_VIRGULE = 261,           /* POINT_VIRGULE  */
    ENTIER = 262,                  /* ENTIER  */
    ECRIRE = 263,                  /* ECRIRE  */
    AFFECTATION = 264,             /* AFFECTATION  */
    EGAL = 265,                    /* EGAL  */
    DIFFERENT = 266,               /* DIFFERENT  */
    INFERIEUR = 267,               /* INFERIEUR  */
    SUPERIEUR = 268,               /* SUPERIEUR  */
    INFERIEUR_EGAL = 269,          /* INFERIEUR_EGAL  */
    SUPERIEUR_EGAL = 270,          /* SUPERIEUR_EGAL  */
    ACCOLADE_FERMANTE = 271,       /* ACCOLADE_FERMANTE  */
    ACCOLADE_OUVRANTE = 272,       /* ACCOLADE_OUVRANTE  */
    VIRGULE = 273,                 /* VIRGULE  */
    SI = 274,                      /* SI  */
    SINON = 275,                   /* SINON  */
    SINON_SI = 276,                /* SINON_SI  */
    LIRE = 277,                    /* LIRE  */
    TANT_QUE = 278,                /* TANT_QUE  */
    NON = 279,                     /* NON  */
    ET = 280,                      /* ET  */
    OU = 281,                      /* OU  */
    RETOURNER = 282,               /* RETOURNER  */
    MOINS = 283,                   /* MOINS  */
    DIVISE = 284,                  /* DIVISE  */
    MODULO = 285,                  /* MODULO  */
    FOIS = 286,                    /* FOIS  */
    PLUS = 287,                    /* PLUS  */
    TYPE_ENTIER = 288,             /* TYPE_ENTIER  */
    TYPE_BOOLEEN = 289,            /* TYPE_BOOLEEN  */
    BOOLEEN = 290,                 /* BOOLEEN  */
    UMOINS = 291                   /* UMOINS  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 16 "analyse_syntaxique.y"

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

#line 115 "symboles.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_SYMBOLES_H_INCLUDED  */
