#include<stdio.h>
#include<stdlib.h>

int main()
{
	int *a,n,k,i,flag = 1;
	printf("\nLinear Search\n Enter the number of elements: ");
	scanf("%d",&n);
	a = (int *)malloc(n*sizeof(int));
	printf("\nEnter the elements: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",a+i);
	}

	printf("\nEnter the element to be searched for: ");
	scanf("%d",&k);

	for(i=0;i<n;i++)
	{
		if(a[i] == k)
		{
			printf("\nElement is found at index %d ",i+1);
			flag = 0;
		}
	}

	if(flag != 0)
		printf("\nElement not found:)");
}
