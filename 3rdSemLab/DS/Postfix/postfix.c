#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<ctype.h>
#include<string.h>

struct node
{
	int data;
	struct node *next;
};

struct node *top = NULL;

void push(int n)
{
	struct node *new;
	new = (struct node *)malloc(sizeof(struct node));
	new -> data = n;
	new -> next = top;
	top = new;
}

int pop()
{
	int data;
	struct node *temp;
	temp = top;
	data = temp->data;
	top = top->next;
	free(temp);
	return data;
}

int main()
{
	char postfix[100],e;
	int i=0,a,b,r;
	printf("Enter the postfix expression:\n");
	fgets(postfix,100,stdin);
	for(i=0;i < strlen(postfix) - 1;i++)
	{
		e = postfix[i];
		if(isdigit(e))
		{
			push(atoi(e));
		}
		else
		{
			a = pop();
			b = pop();
			switch(e)
			{
				case '+':
					r = a+b;
					break;
				case '-':
					r = b-a;
					break;
				case '*':
					r = a*b;
					break;
				case '/':
					r = b/a;
					break;
				case '^':
					r = pow(b,a);
					break;
			}
			push(r);
		}
	}
	printf("\nResult=%d\n\n",r);
}
