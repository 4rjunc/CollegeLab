#include<stdio.h>
#include<stdlib.h>
struct node* getSuccessor(struct node *p);
struct node
{
int data;
struct node *left, *right;
};
struct node *root = NULL;
void insert(int k)
{
int flag = 0;
struct node *ptr,*pre,*new;
ptr = root;
while(ptr != NULL && flag == 0)
{
if(k < ptr -> data)
{
pre = ptr;
ptr = ptr->left;
}
else if(k > ptr -> data)
{
pre = ptr;
ptr = ptr->right;
}
else
{
flag = 1;
printf("Key already exists");
return;
}
}
if(ptr == NULL)
{
new = (struct node *)malloc(sizeof(struct node));
new->data = k;
new->left = new->right = NULL;
if(root == NULL)
{
root = new;
return;
}
if(pre->data < k)
{
pre->right = new;
}
else
{
pre->left = new;
}
}
}
void inorder(struct node *root)
{
if(root == NULL)
{
return;
}
inorder(root->left);
printf("%d ",root->data);
inorder(root->right);
}
void search(int k)
{
struct node *ptr;
ptr = root;
int flag = 0;
while(ptr != NULL && flag == 0)
{
if(k < ptr -> data)
{
ptr = ptr->left;
}
else if(k > ptr -> data)
{
ptr = ptr->right;
}
else
{
flag = 1;
break;
}
}
if(flag == 1)
{
printf("\n%d is found\n",k);
}
else
{
printf("\n%d is not found\n",k);
}
}
void delete(int k)
{
struct node *ptr,*parent,*successor;
int flag = 0,data_successor;
ptr = root;
if(ptr == NULL)
{
printf("The tree is empty");
return;
}
while(ptr != NULL && flag == 0)
{
if(k < ptr -> data)
{
parent = ptr;
ptr = ptr->left;
}
else if(k > ptr -> data)
{
parent = ptr;
ptr = ptr->right;
}
else
{
flag = 1;
}
}
if(flag == 0)
{
printf("Key not found in the list\n");
return;
}
if(ptr -> left == NULL && ptr ->right == NULL)
{
if(parent->left = ptr)
{
parent->left = NULL;
}
else
{
parent->right = NULL;
}
}
else if(ptr->right !=NULL && ptr->left!=NULL)
{
successor = getSuccessor(ptr);
data_successor = successor->data;
delete(data_successor);
ptr->data = data_successor;
}
else
{
if(parent->left = ptr)
{
if(ptr->left == NULL)
{
parent->left = ptr->right;
}
else
{
parent->left = ptr->left;
}
}
else
{
if(ptr->left == NULL)
{
parent->right = ptr->right;
}
else
{
parent->right = ptr->left;
}
}
}
}
struct node* getSuccessor(struct node *p)
{
struct node *succ;
succ = p->right;
if(succ != NULL)
{
while(succ->left != NULL)
{
succ = succ->left;
}
}
return succ;
}