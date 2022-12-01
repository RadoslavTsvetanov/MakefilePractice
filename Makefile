all:help.exe strlen.exe strConcat.exe strCompare.exe 

help.exe:1va.c
	gcc 1va.c -o 1va.exe
mystrings.o:
	gcc -c mystrings.c
strlen.exe:mystrings.o
	gcc strlen.c mystrings.o -o strlen.exe
strConcat.exe:mystrings.o
	gcc strConcat.c mystrings.o -o strConcat.exe
strCompare.exe:mystrings.o 
	gcc strCompare.c mystrings.o -o strCompare.exe
clean: 1va.c 
	del *.o *.exe