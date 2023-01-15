//Write a program to find whether the given number is odd or even
#include<stdio.h>
int main()
{
  int num;
  printf("\nEnter the number to whether its even or odd");
  printf("\nEnter the number:");
  scanf("%d",&num);
  if(num%2==0)
    printf("\nThe number %d is even\n",num);
  else
    printf("\nThe number %d is odd\n",num);
} 
  
