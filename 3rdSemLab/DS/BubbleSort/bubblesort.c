#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *a,i,j,n,temp,c=0;
	printf("*********************\n");
	printf("*    Bubble Sort    *\n");
	printf("*********************\n");
	printf("Enter The Number of Elements:\n");
	scanf("%d",&n);
	a = (int *)malloc(n*sizeof(int));
	printf("Enter the Elements: \n");
	for(i = 0;i < n;i++)
	{
		scanf("%d",a+i);
	}

	printf("\nArray Before Sorting\n");
	for(i = 0;i < n;i++)
	{
		printf(" %d ",a[i]);
	}	

	for(i = 0;i < n - 1;i++)
	{
		for(j = 0;j < n-i-1;j++)
		{
			c++;
			if(a[j] > a[j + 1]);
			{
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}

	printf("\nArray After Sorting\n");
	for(i = 0;i < n;i++)
	{
		printf(" %d ",a[i]);
	}
	printf("\n Number of comparisons done:%d \n\n",c);
}
