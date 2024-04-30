#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char concatenarCadenas(char* a, char* b);

main()
{
	char palabra1[50];
	printf ("ingrese palabra 1: ");
	scanf ("%s",&palabra1);
	
	char palabra2[50];
	printf ("ingrese palabra 2: ");
	scanf ("%s",&palabra2);	
	
	concatenarCadenas(palabra1,palabra2);
}

char concatenarCadenas(char* a, char* b)
{
	int longitud1 = strlen(a);
	int longitud2 = strlen(b);
	int total = longitud1 + longitud2 + 1;
	
	char resultado[total];	
	
	strcpy(resultado,a);
	strcat(resultado,b);
	
	printf ("la cadena concatenada es %s\n",resultado);
}
