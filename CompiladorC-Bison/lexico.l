%{
#include <stdio.h>
#include <string.h>
#include "parser.tab.h"
void showError();
int  columna=0;

%}



DIGITO			[0-9]
LETRA			[a-zA-Z]
ESPACIO 		" "
GUION			[_]
CHAR_COMA		[","]
CHAR_PUNTOCOMA		[";"]
CHAR_DOSPUNTOS		[":"]
IDENTIFICADOR  		{LETRA}({LETRA}|{DIGITO}|{GUION})*
ENTERO			[1-9]([0-9])*
CARACTER		\'([^\\r])\'
OP_SUMA			"+"
INCREMENTO		"++"
OP_RESTA		["-"]
OP_DECREMENTO		"--"
OP_MUL			["*"]
OP_DIV			["/"]
OP_MOD			["%"]
OP_ASIGNACION		["="]
OP_DIFERENTE		"!="
OP_IGUAL		"=="
OP_MAYOR		">"
OP_MENOR		"<"
OP_MAYORIGUAL		">="
OP_MENORIGUAL		"<="
OP_AND			"&&"
OP_OR 			"||"
OP_NEGACION		"!"
OP_SUMAVAR 		"+="
OP_RESTAVAR		"-="
OP_MULVAR		"*="
OP_DIVVAR		"/="
OP_MODVAR		"%="
OP_INTERROGACION	"? :"
CORCHETE_A		"{"
CORCHETE_C		"}"
CORCHETE_CUADRADA_A	"["
CORCHETE_CUADRADA_C	"]"
PARENTESIS_A		"("
PARENTESIS_C	 	")"
BREAK			"break"
CASE			"case"
CHAR    		"char"
CONTINUE		"continue"
DEFAULT			"default"
DO 			"do"
ELSE 			"else"
FOR			"for"
GOTO 			"goto"
IF 			"if"
INT 			"int"
RETURN			"return"
SWITCH			"switch"
VOID			"void"
WHILE			"while"
INCLUDE			^({ESPACIO}|"\t")*"#include"({ESPACIO}|"\t")*\"([^\"])*\"
INCLUDES		"\n"({ESPACIO}|"\t"|"\n")*"#include"({ESPACIO}|"\t")*\"([^\"])*\"
COMENTARIO		"\/\/".*|"\/\*".*?"\*\/"
DEFINE			^({ESPACIO}|"\t")*"#define"({ESPACIO}|"\t")+{IDENTIFICADOR}({ESPACIO}|"\t")+({IDENTIFICADOR}|{ENTERO}|{CARACTER})({ESPACIO}|"\t")*"\n" 
DEFINES			"\n"({ESPACIO}|"\t"|"\n")*"#define"({ESPACIO}|"\t")+{IDENTIFICADOR}({ESPACIO}|"\t")+({IDENTIFICADOR}|{ENTERO}|{CARACTER})({ESPACIO}|"\t")*"\n"
			



%%
"+"		{columna=columna+yyleng;yylval.reservada = yytext;return SUMA;}
"++"		{columna=columna+yyleng;yylval.reservada = yytext;return INC;}
{COMENTARIO} {}
{BREAK}		{columna=columna+yyleng;yylval.reservada = yytext;return BREAK;}
{CASE}		{columna=columna+yyleng;yylval.reservada = yytext;return CASE;}
{CHAR}		{columna=columna+yyleng;yylval.reservada = yytext;return CHAR;}
{CONTINUE}	{columna=columna+yyleng;yylval.reservada = yytext;return CONTINUE;}
{DEFAULT}	{columna=columna+yyleng;yylval.reservada = yytext;return DEFAULT;}
{DO}		{columna=columna+yyleng;yylval.reservada = yytext;return DO;}
{ELSE}		{columna=columna+yyleng;yylval.reservada = yytext;return ELSE;}
{FOR}		{columna=columna+yyleng;yylval.reservada = yytext;return FOR;}
{GOTO}		{columna=columna+yyleng;yylval.reservada = yytext;return GOTO;}
{IF}		{columna=columna+yyleng;yylval.reservada = yytext;return IF;}
{INT}		{columna=columna+yyleng;yylval.reservada = yytext;return INT;}
{RETURN}	{columna=columna+yyleng;yylval.reservada = yytext;return RETURN;}
{SWITCH}	{columna=columna+yyleng;yylval.reservada = yytext;return SWITCH;}
{VOID}		{columna=columna+yyleng;yylval.reservada = yytext;return VOID;}
{WHILE}		{columna=columna+yyleng;yylval.reservada = yytext;return WHILE;}
{IDENTIFICADOR}	{columna=columna+yyleng;strcpy(yylval.reservada,yytext);return ID;}
";"		{columna=columna+yyleng;yylval.reservada = yytext;return PUNTOCOMA;}
","		{columna=columna+yyleng;yylval.reservada = yytext;return COMA;}
":"		{columna=columna+yyleng;yylval.reservada = yytext;return DOSPUNTOS;}
{DIGITO}	{columna=columna+yyleng;yylval.reservada = yytext;return DIGITO;}
{ENTERO}	{
				if(errorNumerico(atoi(yytext))==1){
					showError();return ERROR;
				}else{
				
					columna=columna+yyleng;
					yylval.reservada = yytext;return ENTERO;
				}
			}
{DEFINE}	{columna=columna+yyleng;yylval.reservada = yytext;return DEFINE;}
{DEFINES}	{columna=columna+yyleng;yylval.reservada = yytext;return DEFINE;}
{INCLUDE}	{columna=columna+yyleng;yylval.reservada = yytext;return INCLUDE;}
{INCLUDES}	{columna=columna+yyleng;yylval.reservada = yytext;return INCLUDE;}

{CARACTER}	{columna=columna+yyleng;yylval.reservada = yytext;return CARACTER;}	
"-"		{columna=columna+yyleng;yylval.reservada = yytext;return RESTA;}
"--"		{columna=columna+yyleng;yylval.reservada = yytext;return DEC;}
"*"		{columna=columna+yyleng;yylval.reservada = yytext;return MUL;}
"/"		{columna=columna+yyleng;yylval.reservada = yytext;return DIV;}
"%"		{columna=columna+yyleng;yylval.reservada = yytext;return MOD;}
"="		{columna=columna+yyleng;yylval.reservada = yytext;return ASIGNACION;}
"!="		{columna=columna+yyleng;yylval.reservada = yytext;return DIF;}
"=="		{columna=columna+yyleng;yylval.reservada = yytext;return IGUAL;}
">"		{columna=columna+yyleng;yylval.reservada = yytext;return MAYOR;}
"<"		{columna=columna+yyleng;yylval.reservada = yytext;return MENOR;}
">="		{columna=columna+yyleng;yylval.reservada = yytext;return MAYORIGUAL;}
"<="		{columna=columna+yyleng;yylval.reservada = yytext;return MENORIGUAL;}
"&&"		{columna=columna+yyleng;yylval.reservada = yytext;return AND;}
"||"		{columna=columna+yyleng;yylval.reservada = yytext;return OR;}
"!"		{columna=columna+yyleng;yylval.reservada = yytext;return NOT;}
"+="		{columna=columna+yyleng;yylval.reservada = yytext;return SUMAVAR;}
"-="		{columna=columna+yyleng;yylval.reservada = yytext;return RESTAVAR;}
"*="		{columna=columna+yyleng;yylval.reservada = yytext;return MULVAR;}
"/="		{columna=columna+yyleng;yylval.reservada = yytext;return DIVVAR;}
"%="		{columna=columna+yyleng;yylval.reservada = yytext;return MODVAR;}
"?"		{columna=columna+yyleng;yylval.reservada = yytext;return INTERROGACION;}
"{"		{columna=columna+yyleng;yylval.reservada = yytext;return CORCH_A;}
"}"		{columna=columna+yyleng;yylval.reservada = yytext;return CORCH_C;}
"["		{columna=columna+yyleng;yylval.reservada = yytext;return SPAREN_A;}
"]"		{columna=columna+yyleng;yylval.reservada = yytext;return SPAREN_C;}
"("		{columna=columna+yyleng;yylval.reservada = yytext;return PAREN_A;}
")"		{columna=columna+yyleng;yylval.reservada = yytext;return PAREN_C;} 
[ \t\r]+                {columna=columna+yyleng;} // Ignorar espacios en blanco y saltos de línea
\n			{columna=0;}
.                       {columna=columna+yyleng;yylval.reservada = yytext;return ERROR;}
%%

int getToken(){
	return yylex();
	
}
void showError(char* s){
	printf("<<ErrorLexico: \"%s\">> \n",s);
}

int errorNumerico(int num){
	if(num>2147483647 || num< -2147483647){
		return 1;
	}else{
		return 0;
	}

}








