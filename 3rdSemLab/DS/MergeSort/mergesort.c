#include<stdio.h>
#include<stdlib.h>

void mergesort(int *,int,int);
void merge(int *,int lb,int mid,int ub);
int c=0,n;

int main()
{
	int *a,i,j,temp;
	printf("\nEnter how many numbers:");
	scanf("%d",&n);
	a = (int *)malloc(n*sizeof(int));

	printf("\nEnter the numbers:");
	for(i = 0;i < n;i++)
	{
		scanf("%d",a+i);
	}

	printf("\nUnsorted Array is: "); 
	for(i = 0;i<n;i++)
	{
		printf("\t %d ",a[i]);
	}

	mergesort(a,0,n-1);

	printf("\nSorted Array is: "); 
	for(i = 0;i<n;i++)
	{
		printf("\t %d ",a[i]);
	}
}

void mergesort(int *a,int lb,int ub)
{
	int mid;
	if(lb < ub)
	{
		mid = (lb + ub)/2;
		mergesort(a,lb,mid);
		mergesort(a,mid+1,ub);
		merge(a,lb,mid,ub);
	}
}

void merge(int *a,int lb,int mid,int ub)
{
	int *b;
	int i,j,k;
	b = (int *)malloc(n*sizeof(int));
	i=lb;
	j=mid+1;
	k=lb;
	while(i<=mid && j<=ub)
	{
		c++;
		if(a[i] <=  a[j])
		{
			b[k] = a[i];
			i++;
		}
		else
		{
			b[k] = a[j];
			j++;
		}
		k++;
	}

	while(j <= ub)
	{
		b[k] = a[j];
		j++;
		k++;
	}
	
	while(i <= mid)
	{
		b[k] = a[i];
		i++;
		k++;
	}

	for(k = lb;k <= ub;k++)
	{
		a[k] = b[k];
	}
}
