#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *front = NULL;
struct node *rear = NULL;

void enqueue(int x)
{
    struct node *new;
    new = (struct node *)malloc(sizeof(struct node));
    new->data = x;
    new->next = NULL;
    if(front == NULL && rear == NULL)
    {
        front = new;
        rear = new;
    }
    else
    {
        rear->next = new;
        rear = new;
    }
}

void dequeue()
{
    struct node *temp;
    if(rear ==NULL && front==NULL)
    {
        printf("\nQueue is empty");
    }
    else
    {
        temp = front;
        front = front->next;
        printf("%d is dequeued ",temp->data);
        free(temp);
    }
    
}

void display()
{
    struct node *temp;
    if(front == NULL)
    {
        printf("\nQueue is empty");

    }
    else
    {
        temp = front;
        while(temp!=NULL)
        {
            printf(" %d ",temp->data);
            temp = temp->next;
        }
    }
    printf("\n\n");
}