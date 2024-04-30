#include <stdio.h>

void ocurrencia(int n, int a[],int *cont);

main()
{
	int cont=0,n;
	printf ("cantidad de numeros a ingresar: ");
	scanf ("%d",&n);
	
	int vector[n];
	for (int i=0;i<n;i++)
	{
		printf ("ingrese numero %d del vector: ",i+1);
		scanf ("%d",&vector[i]);
	}
	int buscar;
	printf ("ingrese numero a buscar: ");
	scanf ("%d",&buscar);
	
	ocurrencia(n,vector,&cont);
	
	printf ("la cantidad de veces que aparece el %d es de %d\n",buscar,cont);
}

void ocurrencia(int n, int a[], int *cont)
{
	int buscar;
	for (int i=0;i<n;i++)
	{
		if (a[i] == buscar)
		{
			(*cont)++;
		}
	}
}
