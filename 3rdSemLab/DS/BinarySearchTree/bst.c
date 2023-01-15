#include<stdio.h>
#include "bstop.c"
int main()
{
    int choice,d;
    do
    {
        printf("\n\n*****************\n");
        printf("BST OPERATIONS\n");
        printf("*****************\n");
        printf("\n1. Insert");
        printf("\n2. Delete");
        printf("\n3. Traverse (Inorder)");
        printf("\n4. Search");
        printf("\n5. Exit");
        printf("\n\nEnter your choice: ");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            printf("Enter the number: ");
            scanf("%d",&d);
            insert(d);
            break;
        case 2:
            printf("Enter the number to be deleted: ");
            scanf("%d",&d);
            delete(d);
            break;
        case 3:
            inorder(root);
            break;
        case 4:
            printf("Enter the number to search: ");
            scanf("%d",&d);
            search(d);
            break;
        case 5:
            printf("\nThank you..\n\n");
            break;
        default:
            printf("Invalid choice\n");
        }
    }while(choice != 5);
}