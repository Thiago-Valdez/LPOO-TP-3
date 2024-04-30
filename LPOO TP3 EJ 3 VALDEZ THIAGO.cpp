#include<stdio.h>

int nums[5],i,max,min;
void maxmin(int *max,int *min);

main()
{
	for(i=0;i<5;i++)
	{
	printf("ingrese numero %d: ",i+1);
	scanf("%d",&nums[i]);
	}
	maxmin(&max,&min);
	printf("el numero maximo es %d y el minimo %d\n",max,min);
}

void maxmin(int *max,int *min)
{
	for(i=0;i<5;i++)
	{
		if(i == 0 || nums[i] > *max)
		{
			*max = nums[i];
		}
		if(i == 0 || nums[i] < *min)
		{
			*min = nums[i];
		}
	}
}
