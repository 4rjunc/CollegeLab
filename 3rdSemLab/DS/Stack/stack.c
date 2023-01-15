#include<stdio.h>
#include<stdlib.h>
#include "stackop.c"

int main()
{
	int choice,d;
	while(1)
	{
		printf("\n*******************\n");
		printf("\n  Stack Operations \n");
		printf("\n*******************\n");
		printf("1.PUSH\n");
		printf("2.POP\n");
		printf("3.DISPLAY \n");
		printf("4.EXIT\n");
		printf("Enter the choice: \n");
		scanf("%d",&choice);

		switch(choice)
		{
			case 1 :
				printf("Enter the value: \n");
				scanf("%d",&d);
				push(d);
				break;

			case 2:
				printf("\n");
				pop();
				break;

			case 3:
				printf("\n");
				display();
				break;

			case 4:
				exit(0);
				break;

			case 5:
				printf("\nInvalid Option");
		}
	}
}
