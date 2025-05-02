#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lexico.h"
#include "parser.h"

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Uso: %s archivo_de_entrada\n", argv[0]);
        return 1;
    }

  
	
  
    char comando[300];
    strcpy(comando, "./preproceso ");
    strcat(comando, argv[1]);
    system(comando);

  
    FILE *archivo_preprocesado = fopen("temporal.txt", "r");
    if (!archivo_preprocesado) {
        printf("No se pudo abrir el archivo preprocesado\n");
        return 1;
    }

    
    yyrestart(archivo_preprocesado);

    
    yyparse();

    
    fclose(archivo_preprocesado);
    remove("temporal.txt");
}
