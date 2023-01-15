#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
};

struct node *top = NULL;

int push(int d)
{
	struct node *new;
	new = (struct node *)malloc(sizeof(struct node));

	new->data = d;
	new->next = top;
	top = new;
}

void pop()
{
	struct node *temp;
	temp = top;
	if(temp == NULL)
	{
		printf("Stack is empty!!");
		exit(0);
	}
	else
	{
		printf("Deleting Element : %d",temp->data);
		top = top->next;
		free(temp);
	}
}

void display()
{
	struct node *temp;
	temp = top;
	if(temp == NULL)
	{
		printf("Stack is empty!!");
		exit(0);
	}
	else
	{
		printf("\nStack is \n");
		while(temp != NULL)
		{
			printf("%d\n",temp->data);
			temp = temp->next;
			printf("\n");
		}
	}
}
