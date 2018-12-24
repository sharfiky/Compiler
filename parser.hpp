/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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

#ifndef YY_YY_HOME_TNA0Y_DESKTOP_COMPILER_PARSER_HPP_INCLUDED
# define YY_YY_HOME_TNA0Y_DESKTOP_COMPILER_PARSER_HPP_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif
/* "%code requires" blocks.  */
#line 22 "src/grammar.y" /* yacc.c:1909  */

	#include "RuleClasses/RuleClasses.h"
	#include <vector>
	#include <iostream>
	#include <deque>
	//#include "Visitors/PrettyPrinterVisitor.h"

#line 52 "/home/tna0y/Desktop/Compiler/parser.hpp" /* yacc.c:1909  */

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    T_CLASS = 258,
    T_PUBLIC = 259,
    T_EXTENDS = 260,
    T_STATIC = 261,
    T_MAIN = 262,
    T_VOID = 263,
    T_INT = 264,
    T_BOOL = 265,
    T_IF = 266,
    T_ELSE = 267,
    T_RETURN = 268,
    T_LESS = 269,
    T_PRINTLN = 270,
    T_ASSIGN = 271,
    T_STRING = 272,
    T_AND = 273,
    T_NEW = 274,
    T_THIS = 275,
    T_LENGTH = 276,
    T_WHILE = 277,
    T_TRUE = 278,
    T_FALSE = 279,
    T_NUMBER = 280,
    T_ID = 281
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 33 "src/grammar.y" /* yacc.c:1909  */

    std::string* val;
    int intVal;
    bool boolVal;
    IProgram* programVal;
    IMainClass* mainClassDeclarationVal;
    std::vector<IClassDecl*>* classDeclarationListVal;
    IClassDecl* classDeclarationVal;
    std::vector<IVarDecl*>* variableDeclarationListVal;
    IVarDecl* variableDeclarationVal;
    IMethodDecl* methodDeclarationVal;
    std::vector<IMethodDecl*>* methodDeclarationListVal;
    IArg* argVal;
    std::vector<IArg*>* formalListVal;
    IStatement* statementVal;
    IType* typeVal;
    IExp* expressionVal;
    std::vector<IExp*>* expressionListVal;
    std::deque<IStatement*>* statementListVal;

#line 112 "/home/tna0y/Desktop/Compiler/parser.hpp" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE YYLTYPE;
struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif


extern YYSTYPE yylval;
extern YYLTYPE yylloc;
int yyparse (IProgram*& root);

#endif /* !YY_YY_HOME_TNA0Y_DESKTOP_COMPILER_PARSER_HPP_INCLUDED  */
