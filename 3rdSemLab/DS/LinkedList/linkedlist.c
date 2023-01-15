#include<stdio.h>
#include<stdlib.h>
#include "linkedlistop.c"

int main()
{
	int choice,data,key;
	while(1)
	{
		printf("\n*******************\n");
		printf("\nLinked List Operations\n");
		printf("\n*******************\n");
		printf("\n");
		printf("\n1.Insert at Front");
		printf("\n2.Insert at End");
		printf("\n3.Insert After");
		printf("\n4.Delete From Front");
		printf("\n5.Delete From End");
		printf("\n6.Delete");
		printf("\n7.Search");
		printf("\n8.Traverse");
		printf("\n9.Exit");
		printf("\n\nEnter your choice:");
		scanf("%d",&choice);
		switch(choice)
		{
		case 1:
			printf("\nEnter the data: ");
			scanf("%d",&data);
			insertatfront(data);
			break;

		case 2:
			printf("\nEnter the data: ");
			scanf("%d",&data);
			insertatend(data);
			break;

		case 3:
			printf("\nEnter the data:");
			scanf("%d",&data);
			printf("\nEnter the data of node :");
			scanf("%d",&key);
			insertafter(data,key);
			break;

		case 4:
			deletefromfront();
			break;

		case 5:
			deletefromend();
			break;
		case 6:
			printf("\nEnter the node to be deleted:");
			scanf("%d",&data);
			delete(data);
			break;

		case 7:
			printf("\nEnter the data to be searched for :
			");
			scanf("%d",&data);
			if (search(data) == 1)
			{
				printf("%d is found in the list\n",data);
			}
			else
			{
				printf("%d is not found in the list\n",data);
			}
			break;

		case 8:
			traverse();
			break;

		case 9:
			printf("\nEXITING!!");
			exit(0);
			break;

		default :
			printf("\nInvalid Option");
		}
	}
	
}
