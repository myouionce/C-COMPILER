%{
#include <stdio.h>
#include <string.h>
#define YYERROR_VERBOSE 1
int yylex();
extern FILE *yyin;
extern int yylineno;
extern int columna;
int yyerror(char *s);
int linea_anterior=-1;
int contexto =0;
%}
%token INCLUDE DEFINE ENTERO DIGITO ID ERROR SUMA RESTA MUL DIV ASIGNACION
%token COMA PUNTOCOMA DOSPUNTOS CARACTER INC DEC MOD DIF IGUAL 
%token MAYOR MENOR MAYORIGUAL MENORIGUAL AND OR NOT SUMAVAR RESTAVAR MULVAR DIVVAR MODVAR 		
%token INTERROGACION CORCH_A CORCH_C SPAREN_A SPAREN_C PAREN_A PAREN_C 
%token BREAK CASE CHAR CONTINUE DEFAULT DO ELSE FOR GOTO IF INT RETURN SWITCH VOID WHILE
%type <number> DIGITO ENTERO 
%type <reservada> SUMA RESTA MUL DIV ASIGNACION COMA PUNTOCOMA DOSPUNTOS CARACTER INC DEC MOD DIF IGUAL MAYOR MENOR MAYORIGUAL MENORIGUAL AND OR NOT SUMAVAR RESTAVAR MULVAR DIVVAR MODVAR INTERROGACION CORCH_A CORCH_C SPAREN_A SPAREN_C PAREN_A PAREN_C BREAK CASE CHAR CONTINUE DEFAULT DO ELSE FOR GOTO IF INT RETURN SWITCH VOID WHILE
%type <simb> ID

%union{
	char simb[32];
	int number;
	char *reservada;
}

%nonassoc LOWER_THAN_ELSE
%nonassoc ELSE

%start statement_list
%define parse.error verbose


%%

statement_list:
	statement 
	| statement_list statement
	
;
statement:
	declaration_list PUNTOCOMA 
	|declaration_init_list PUNTOCOMA 
	|tipo_data defFunc
	|VOID defFunc
	|tipo_data defFunc PUNTOCOMA
	|VOID defFunc PUNTOCOMA
	|condicional_exp 
	|iterador_exp
	|res_tokens PUNTOCOMA
	|etiqueta_statement
	|block_stmt
;



res_tokens:
	RETURN 
	|RETURN expression 
	|CONTINUE 
	|BREAK 
	|GOTO ID
;

primary_expression
  : id_arr
  | error
  | preSufix_expr
  | callFunc
  | ENTERO
  | DIGITO
  | CARACTER
  | PAREN_A expression PAREN_C
  
  
;
expression
	:primary_expression
	|expression op primary_expression
	|expression op_bool primary_expression
	|PAREN_A expression INTERROGACION expression DOSPUNTOS expression PAREN_C
	;

op
	:SUMA
	|RESTA
	|MUL
	|DIV
	|MOD
	;



preSufix_expr:
	preSufix_cicle id_side
	|preSufix_cicle id_arr
	|id_side
	
;
id_side:
	id_arr op_inc_dec
	|op_inc_dec id_arr
	|op_inc_dec error
	|error op_inc_dec
;
preSufix_cicle:
	preSufix_op
	|preSufix_cicle	preSufix_op
;
id_arr:
	ID
	|id_arr SPAREN_A expr_option SPAREN_C
	|id_arr SPAREN_A SPAREN_C
	|error SPAREN_A SPAREN_C
	|error SPAREN_A expr_option SPAREN_C
;

op_inc_dec:
	INC
	|DEC
;

preSufix_op:
	SUMA
	|RESTA
	|NOT
;
declaration_init_list:
	tipo_data declaration_init_listP
	|tipo_data 
;
declaration_init_listP:
	asign_cicle 
	|id_arr 
	|declaration_init_listP COMA asign_cicle
	|declaration_init_listP COMA id_arr
;


declaration_list:
	expression_list 
	|asign_list
;

expression_list:
	expr_option
	|declaration_list COMA expr_option
;

expr_option:
	expression
	|expression INTERROGACION asign_ciclep DOSPUNTOS asign_ciclep
	
;

asign_list:
	asign_cicle
	|declaration_list COMA asign_cicle
;
asign_cicle:
	id_arr asign_op asign_ciclep
	|error asign_op asign_ciclep
	|id_arr error asign_ciclep
;
asign_ciclep:
	expr_option
	|asign_cicle
	
;

asign_op:
	ASIGNACION
	|SUMAVAR
	|RESTAVAR
	|MODVAR
	|DIVVAR
;

tipo_data:
	INT
	|CHAR
;


condicional_exp:
	IF PAREN_A ite_cond_options PAREN_C statement %prec LOWER_THAN_ELSE
	|IF PAREN_A ite_cond_options PAREN_C statement ELSE statement
	|SWITCH PAREN_A expr_option PAREN_C statement
	;
	
iterador_exp:
	WHILE PAREN_A ite_cond_options PAREN_C statement
	|FOR PAREN_A for_option PUNTOCOMA ite_cond_options PUNTOCOMA ite_cond_options PAREN_C statement
	|DO statement_list WHILE PAREN_A ite_cond_options PAREN_C PUNTOCOMA
;
for_option:
	tipo_data asign_cicle
	|tipo_data error
	|expr_option
	|asign_cicle
;
ite_cond_options:
	expr_option
	| asign_cicle
;

op_bool:
	IGUAL
	|DIF
	|MAYOR
	|MENOR
	|MAYORIGUAL
	|MENORIGUAL
	|AND
	|OR
;

defFunc:
	ID PAREN_A param_list PAREN_C PUNTOCOMA
	|ID PAREN_A param_list PAREN_C block_stmt
	|ID PAREN_A PAREN_C PUNTOCOMA
	|ID PAREN_A PAREN_C block_stmt
	|error block_stmt
	|ID PAREN_A PAREN_C error
	|ID PAREN_A error PAREN_C block_stmt
	|error PAREN_A PAREN_C block_stmt
;

param_list:
	param_tipo
	|param_list COMA param_tipo
	|param_list COMA error
	|error COMA param_tipo
;

param_tipo:
	tipo_data id_arr
	|tipo_data
	|tipo_data error
;

callFunc:
	ID PAREN_A arg_list PAREN_C 
	|ID PAREN_A PAREN_C
	|error PAREN_A arg_list PAREN_C
	|error PAREN_A PAREN_C
;

arg_list:
	expr_option
	|arg_list COMA expr_option
;

etiqueta_statement:
	CASE expr_option DOSPUNTOS statement
	|DEFAULT DOSPUNTOS statement
	|ID DOSPUNTOS statement
	|DEFAULT error 
	|error DOSPUNTOS
;

block_stmt:
	CORCH_A statement_list CORCH_C
	|CORCH_A CORCH_C
	|CORCH_A error CORCH_C
;

%%


int yyerror(char* s) {
	 
    char buffer[300];
    int banderaC=0;
    int indiceBuff=0;
   
    memset(buffer, 0, sizeof(buffer));
    for(int i =0 ;i<strlen(s);i++){
		 	if(banderaC==1){
		 		buffer[indiceBuff]=s[i];
		 		indiceBuff++;
		 	}else if(s[i]==','){
		 		banderaC=1;	
		 	} 			
    }
    
    fprintf(stderr, "\x1b[93mError\x1b[0m line %d,column%d:%s\n", yylineno, columna,buffer);
    FILE *archivo_entrada = fopen("temporal.txt", "r");
    if (archivo_entrada) {
        char linea[5000];
        memset(linea, 0, sizeof(linea));
         int num_linea = 0;
         while (fgets(linea, sizeof(linea), archivo_entrada)) {
             num_linea++;
             
             if (num_linea == yylineno) {
                 printf("Original line: %s", linea);
                 break;
              }
         }
         char bufferC[5000];
        	memset(bufferC, 0, sizeof(bufferC));
         for(int i =0;i<15;i++){
         	bufferC[i]=' ';
         } 
         
         int contadorBufferC=15;
         for(int i =0; i < strlen(linea);i++){
         	if(columna==i){
         		bufferC[contadorBufferC]='^';
         		contadorBufferC++;
         		break;
         	}else if(linea[i]=='\t'){
         		bufferC[contadorBufferC]='\t';
         		contadorBufferC++;
         	}else{
         		bufferC[contadorBufferC]='_';
         		contadorBufferC++;
         	}
         }
        
        	
         printf("\x1b[35m%s\x1b[0m\x1b[36m---Error token-> \x1b[0m\x1b[32m%s\x1b[0m\n\n", bufferC,yylval.reservada);
           fclose(archivo_entrada);
     }
        
       
    
}

