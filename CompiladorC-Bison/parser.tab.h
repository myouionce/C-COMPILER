/* A Bison parser, made by GNU Bison 3.8.2.  */

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
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

#ifndef YY_YY_PARSER_TAB_H_INCLUDED
# define YY_YY_PARSER_TAB_H_INCLUDED
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
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    INCLUDE = 258,                 /* INCLUDE  */
    DEFINE = 259,                  /* DEFINE  */
    ENTERO = 260,                  /* ENTERO  */
    DIGITO = 261,                  /* DIGITO  */
    ID = 262,                      /* ID  */
    ERROR = 263,                   /* ERROR  */
    SUMA = 264,                    /* SUMA  */
    RESTA = 265,                   /* RESTA  */
    MUL = 266,                     /* MUL  */
    DIV = 267,                     /* DIV  */
    ASIGNACION = 268,              /* ASIGNACION  */
    COMA = 269,                    /* COMA  */
    PUNTOCOMA = 270,               /* PUNTOCOMA  */
    DOSPUNTOS = 271,               /* DOSPUNTOS  */
    CARACTER = 272,                /* CARACTER  */
    INC = 273,                     /* INC  */
    DEC = 274,                     /* DEC  */
    MOD = 275,                     /* MOD  */
    DIF = 276,                     /* DIF  */
    IGUAL = 277,                   /* IGUAL  */
    MAYOR = 278,                   /* MAYOR  */
    MENOR = 279,                   /* MENOR  */
    MAYORIGUAL = 280,              /* MAYORIGUAL  */
    MENORIGUAL = 281,              /* MENORIGUAL  */
    AND = 282,                     /* AND  */
    OR = 283,                      /* OR  */
    NOT = 284,                     /* NOT  */
    SUMAVAR = 285,                 /* SUMAVAR  */
    RESTAVAR = 286,                /* RESTAVAR  */
    MULVAR = 287,                  /* MULVAR  */
    DIVVAR = 288,                  /* DIVVAR  */
    MODVAR = 289,                  /* MODVAR  */
    INTERROGACION = 290,           /* INTERROGACION  */
    CORCH_A = 291,                 /* CORCH_A  */
    CORCH_C = 292,                 /* CORCH_C  */
    SPAREN_A = 293,                /* SPAREN_A  */
    SPAREN_C = 294,                /* SPAREN_C  */
    PAREN_A = 295,                 /* PAREN_A  */
    PAREN_C = 296,                 /* PAREN_C  */
    BREAK = 297,                   /* BREAK  */
    CASE = 298,                    /* CASE  */
    CHAR = 299,                    /* CHAR  */
    CONTINUE = 300,                /* CONTINUE  */
    DEFAULT = 301,                 /* DEFAULT  */
    DO = 302,                      /* DO  */
    ELSE = 303,                    /* ELSE  */
    FOR = 304,                     /* FOR  */
    GOTO = 305,                    /* GOTO  */
    IF = 306,                      /* IF  */
    INT = 307,                     /* INT  */
    RETURN = 308,                  /* RETURN  */
    SWITCH = 309,                  /* SWITCH  */
    VOID = 310,                    /* VOID  */
    WHILE = 311,                   /* WHILE  */
    LOWER_THAN_ELSE = 312          /* LOWER_THAN_ELSE  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 22 "parser.y"

	char simb[32];
	int number;
	char *reservada;

#line 127 "parser.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */
