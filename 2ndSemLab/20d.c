/*
  Program to access the elements of an array using function pointer
*/
#include<stdio.h>
void accessarray(int n);
int main()
{
  int n;
  void (*p)(int) = &accessarray;
  printf("Enter the number of elements in the array: ");
  scanf("%d",&n);
  p(n);
  printf("\n");
}

void accessarray(int n)
{
  int i,a[50];
  printf("Enter the %d elements of the array: ",n);
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  printf("\nThe elements of the array are: ");
  for(i=0;i<n;i++)
  {
    printf("%d ",a[i]);
  }
}
