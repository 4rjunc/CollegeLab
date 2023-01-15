//Write a program to find the roots of quadratic equations
#include<stdio.h>
int main()
{
  float a,b,c,d;
  printf("\nEnter the coefficient of the quadratic equation a,b,c\n");
  scanf("%f%f%f",&a,&b,&c);
  d=((b*b)-(4*a*c));
  if(d<0)
  {
    printf("\nRoot 1 is (-%.2f + sqrt(%.2f i)/2%.2f)\n",b,d,a);
    printf("\nRoot 2 is (-%.2f - sqrt(%.2f i)/2%.2f)\n",b,d,a);
  }
  else if(d>0)
  {
    printf("\nRoot 1 is (-%.2f + sqrt(%.2f )/2%.2f)\n",b,d,a);
    printf("\nRoot 2 is (-%.2f - sqrt(%.2f )/2%.2f)\n",b,d,a);
  }
  else if(d==0)
  {
    printf("\nRoot 1 is (-%f/2%.2f\n)",b,a);
    printf("\nRoot 2 is (-%f/2%.2f\n)",b,a);
  }
}
