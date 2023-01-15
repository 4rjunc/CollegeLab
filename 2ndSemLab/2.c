//Write A Program To Print the size of built in data types.
#include<stdio.h>
int main()
{
  int a;
  float b;
  double c;
  char d;
  printf("\nSize of int is %lu\n",sizeof(a));
  printf("\nSize of float is %lu\n",sizeof(b));
  printf("\nSize of double is %lu\n",sizeof(c));
  printf("\nSize of char is %lu\n",sizeof(d));
}
