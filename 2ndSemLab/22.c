#include<stdio.h>
struct employee
{
  char name[50];
  float basic;
  float da;
  float ta;
  float oa;
  float ded;
};

int main()
{
  int n,i;
  float gross,net;
  struct employee e[20];
  printf("Enter the number of employees: ");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    printf("Enter the Name,Basic,DA,TA,Other allowance,deductions of employee %s : ",e[i].name);
    scanf("%s%f%f%f%f%f",e[i].name,&e[i].basic,&e[i].da,&e[i].ta,&e[i].oa,&e[i].ded);
  }

  for(i=0;i<n;i++)
  {
    gross=e[i].basic+e[i].ta+e[i].da+e[i].oa+e[i].ded;
    net=gross-e[i].ded;
    printf("\nEmployee Name : %d ",i+1);
    printf("\nBasic : %f",e[i].basic);
    printf("\nDA : %f",e[i].da);
    printf("\nTA : %f",e[i].ta);
    printf("\noa : %f",e[i].oa);
    printf("\nded : %f",e[i].ded);
    
  }
}
