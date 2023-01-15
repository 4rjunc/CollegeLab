#include<stdio.h>
#include "cqueueop.c"
int main()
{
    int choice,d;
    do
    {
        printf("\n\n**************************\n");
        printf("CIRCULAR QUEUE OPERATIONS\n");
        printf("**************************\n");
        printf("\n1. Enqueue");
        printf("\n2. Dequeue");
        printf("\n3. Display");
        printf("\n4. Exit");
        printf("\n\nEnter your choice: ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                printf("Enter the number: ");
                scanf("%d",&d);
                enqueue(d);
                break;
            case 2:
                dequeue();
                break;
            case 3:
                display();
                break;
            case 4:
                printf("\nThank you..\n\n");
                break;
            default:
                printf("Invalid choice\n");
        }
    }while(choice != 4);
}
