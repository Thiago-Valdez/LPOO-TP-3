#include<stdio.h>

int nums[5],i,max,min;
void maxmin(int *max,int *min);

main()
{
	for(i=0;i<5;i++)
	{
	printf("num %d:",i+1);
	scanf("%d",&nums[i]);
	}
	maxmin(&max,&min);
	printf("Max = %d\n",max);
	printf("Min = %d\n",min);
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
