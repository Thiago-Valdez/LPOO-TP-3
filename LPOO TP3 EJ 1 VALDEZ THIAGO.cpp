#include <stdio.h>

int cambiarVariables(int *a,int *b)
{
	int temp;
	
	temp = *a;
	*a = *b;
	*b = temp;
}
int main()
{
	int uno,dos;
	printf ("ingrese variable 1: ");
	scanf ("%d",&uno);
	printf ("ingrese variable 2: ");
	scanf ("%d",&dos);
	
	printf ("las variables originales son: [%d] [%d]\n",uno,dos);
	
	cambiarVariables(&uno,&dos);
	
	printf ("las variables cambiadas son: [%d] [%d]",uno,dos);
}
