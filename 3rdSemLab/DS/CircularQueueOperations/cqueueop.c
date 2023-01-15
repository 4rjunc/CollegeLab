#include<stdio.h>
#include<stdlib.h>
struct node 
{
    int data;
    struct node *next;
};

struct node *rear = NULL;
struct node *front = NULL;

void enqueue(int x)
{
    struct node *new;
    new = (struct node *)malloc(sizeof(struct node));
    new->data = x;
    new->next = NULL;
    if(rear == NULL)
    {
        rear = front = new;
        rear->next = front;
    }
    else
    {
        rear->next = new;
        rear = new;
        rear->next = front;
    }
    
}

void dequeue()
{
    struct node *temp;
    temp = front;
    if(rear == NULL)
    {
        printf("Queue is empty");

    }
    else if(front == rear)
    {
        temp = front;
        printf("%d is dequeued",temp->data);
        front = rear = NULL;
        free(temp);
    }
    else
    {
        temp = front;
        front = front->next;
        rear->next = front;
        printf("%d is dequeued",temp->data);
        free(temp);
    }
}

void display()
{
    struct node *temp;
    temp = front;
    if(temp == NULL)
    {
        printf("Queue is empty");
    }
    else
    {
        printf("\nQueue is : ");
        do
        {
            printf(" %d ",temp->data);
            temp=temp->next;
        }while(temp != front);
        
        
    }
}