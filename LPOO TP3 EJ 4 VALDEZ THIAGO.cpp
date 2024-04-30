#include <stdio.h>

int arr1[5],arr2[5],i;

void copiar(int *arr1, int *arr2);

main()
{
	for(i=0;i<5;i++)
	{
		printf("num %d:",i+1);
		scanf("%d",&arr1[i]);
	}
	
	copiar(arr1,arr2);
	
	for(i=0;i<5;i++)
	{
		printf("[%d]",arr2[i]);
	}
}

void copiar(int *arr1, int *arr2)
{
	for(i=0;i<5;i++)
	{
		arr2[i] = arr1[i];
	}
}

