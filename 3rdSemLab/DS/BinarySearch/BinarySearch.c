#include<stdio.h>
#include<stdlib.h>

int main()
{
	int *a,i,n,k,mid,l,u,flag=0,c=0;
	printf("Binary Search (Enter the array in sorted order) \n");
	printf("Enter the number of elements:\n");
	scanf("%d",&n);
	a = (int *)malloc(n*sizeof(int));
	printf("Enter the elements: \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",a+i);
	}

	printf("\nEnter the elements to be seached for:");
	scanf("%d",&k);
	l = 0;
	u = n-1;
	while(flag == 0 && l <= u)
	{
		mid = (l + u)/2;
		c++;
		if(k == a[mid])
		{
			printf("%d is found at location %d",k,mid+1);
			printf("\nNumber of comparisons done : %d ",c);
			flag = 1;
		}
		else if(k < a[mid])
		{
			u = mid - 1;
		}
		else
		{
			l=mid+1;
		}
	}
	if(flag == 0)
	{
		printf("\n%d is not found in the array",k);
		printf("\nNumber of comparisons done : %d ",c);
	}
	printf("\n\n");
}
