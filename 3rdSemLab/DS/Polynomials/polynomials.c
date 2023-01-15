#include<stdio.h>
#include<stdlib.h>

struct node
{
	float coeff;
	int exp;
	struct node *next;
};

struct node*  addterm(struct node *h,float c,int e)
{
	struct node *new, *temp;
	new = (struct node *)malloc(sizeof(struct node));
	new->coeff=c;
	new->exp=e;
	new->next=NULL;
	if(h == NULL || e > h->exp)
	{
		new->next = h;
		h = new;
	}
	else
	{
		temp= h;
		while(temp->next != NULL && temp->next->exp > e)
		{
			temp = temp->next;
		}
		new->next = temp->next;
		temp->next= new;
	}
	return h;
}


struct node* createpolynomial(struct node *head)
{
	int n,e,i;
	float c;
	printf("\nEnter the number of terms:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter the coefficient for terms %d: ",i+1);
		scanf("%f",&c);
		printf("Enter the exponent for term %d:",i+1);
		scanf("%d",&e);
		head = addterm(head,c,e);
	}
	return head;
}

void display(struct node *h)
{
	struct node *temp = h;
	while(temp != NULL)
	{
		if(temp->exp == 0)
		{
			printf("%0.1f",temp->coeff);
		}
		else
		{
			printf("%0.1fx ^ %d",temp->coeff,temp->exp);
		}
		temp = temp->next;
		if(temp != NULL)
		{
			printf(" + ");
		}
	}
	printf("\n");
}

struct node* add(struct node *h1,struct node *h2)
{
	struct node *p1 = h1,*p2 = h2,*h3 = NULL;
	while(p1 != NULL && p2 != NULL)
	{
		if(p1->exp == p2->exp)
		{
			h3  = addterm(h3,p1->coeff+p2->coeff,p1->exp);
			p1  = p1->next;
			p2  = p2->next;
		}
		else if(p1->exp > p2->exp)
		{
			h3 = addterm(h3,p1->coeff,p1->exp);
			p1 = p1->next;
		}
		else
		{
			h3 = addterm(h3,p2->coeff,p2->exp);
			p2 = p2->next;
		}
	}

	while(p1 != NULL)
	{
		h3 = addterm(h3,p1->coeff,p1->exp);
		p1 = p1->next;
	}
	while(p2 !=NULL)
	{
		h3 = addterm(h3,p1->coeff,p1->exp);
		p1 = p1->next;
	}
	return h3;
}


int main()
{
	struct node *p1=NULL,*p2=NULL,*p3=NULL;
	printf("\nFirst polynomial:\n");
	p1 = createpolynomial(p1);
	printf("\nSecond polynomial:\n");
	p2 = createpolynomial(p2);
	printf("Addition\n:");
	display(p1);
	display(p2);
	p3 = add(p1,p2);
	display(p3);
	printf("\n\n");
}


