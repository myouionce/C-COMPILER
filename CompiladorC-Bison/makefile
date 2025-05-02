#*************************************************
# Executable name : hexDump_x64
# Created date : February 4, 2015
# Authors : 
#	Dylan Mora Corrales
#	Gabriel Jimenez Ocampo
# Description : simple makefile
#*************************************************
#names of the files.c
name1=lex
name1_2 = lexico
name2=parser
#compilator
com = gcc
com1 = bison
com2 = flex
#name of the executable
runFile = executable

$(runFile): $(name1).yy.c $(name2).tab.c
	$(com) -o $(runFile) $(name1).yy.c $(name2).tab.c main.c -lfl

	
$(name1).yy.c: $(name1_2).l
	$(com2) -l $(name1_2).l

$(name2).tab.c: $(name2).y
	$(com1) -dv $(name2).y 


	


		
