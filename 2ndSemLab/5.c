//Write a program to print grade of students
#include<stdio.h>
int main()
{
  float marks;
  printf("Enter The Total Mark Of The Student:");
  scanf("%f",&marks);
  if(marks>=90)
	printf("\nnStudent scored A grade\n");
  else if(marks>=80)
	printf("\nnStudent scored B grade\n");
  else if(marks>=70)
	printf("\nnStudent scored C grade\n");
  else if(marks>=60)
	printf("\nnStudent scored D grade\n");
  else if(marks>=50)
	printf("\nnStudent scored E grade\n");
  else
	printf("\n FAILED\n");
}  
