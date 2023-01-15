//Write A Program To Print Largest among three numbers
#include<stdio.h>
int main()
{
  int a,b,c;
  printf("A Program To Print Largest among three numbers\n");
  printf("Enter The Three Number To Find The Largest:\n");
  scanf("%d%d%d",&a,&b,&c);
  if(a>b)
  {
    if(a>c)
      printf("\n%d Is the largest number!!\n",a);
  }
  if(b>a)
  {
    if(b>c)
      printf("\n%d Is the largest number!!\n",b);
    else
      printf("\n%d Is the largest number!!\n",c); 
  }
}  
