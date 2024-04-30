#include <stdio.h>
#include <string.h>

int suma,i;
float prom;
int calcularSumaPromedio(int *arr, int n, int *suma, float *prom)
{
	int i;
	for (i=0;i<n;i++)
	{
		*suma = *suma + *(arr + i); 
	}
	
	*prom = *suma / n;
}

main()
{
	int n;
	printf ("ingrese largo del array: ");
	scanf ("%d",&n);
	int arr[n];
	for (i=0;i<n;i++)
	{
		printf ("ingrese elemento %d del array: ",i+1);
		scanf ("%d",&arr[i]);
	}
	calcularSumaPromedio(arr,n,&suma,&prom);
	printf ("la suma es %d\n",suma);
	printf ("el promedio es %.2f\n",prom);
}
