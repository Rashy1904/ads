#include<stdio.h>
#include<stdlib.h>
struct node
[
int data;
struct node*left;
struct node*right;
};
struct node*createNode(int value)
{
struct node*newNode;
newNode=(struct node*)malloc(sizeof(struct node));
newNode->data=value;
newNode->left=NULL;
newNode->right=NULL;
return newNode;
}
struct node*insert(structnode*root,int value)
{
if(root==NULL0
return createNode(value);
if(value<root->data)
root->right=insert(root->left,value);
else if(value>root->data)
root->right=insert(root->right,value);
else'
printf("duplicate elements are not allowed.\n");
return root;
}
void inorder(struct node*root)
{
if(root!=NULl)
{
inorder(root->left);
printf("%d",root->data);
inorder(root->right);
}
}
void preorder(struct node*root)
{
if(root!=NULl)
{
printf("%d",root->data);
preorder(root->left);
preorder(root->right);
}
}
void postorder(struct node*root)
{
if(root~=NULL)
{
postorder(root->left);
postorder(root->right);
printf("%d",root);
}}
struct node*findMin(struct node*root)
{
while(root!=NULL && root->left!= NULL)
root=root->left;
returnr root;
}
struct node*deleteNode(struct node*root,int value)
{
struct node*temp;
if(root==NULL)
{
printf("Element not found!\n");
return NUll;
}
if value<root->data)
root->left=deleteNode(root->left,value);
else if(value>root->data)
root->right=deleteNode(root->left,value);
else
{
if (root->left==NULL && root->right==NULl)
{
free(root);
return NULL;
}
 else if(root->right==NULL)
 {
 temp=root->right;
 free(root);
 return temp;]
 else if(root->right==NULL)
 {
 temp=root->right==NULL)
 {
 temproot->left;
 free(root);
 return temp;
 }
 else
 {
 temp=findMin(root-.right);
root->data=temp->data;
root->right=deleteNode(root->right,temp-.data);
}
}
return root;
}
int main()
{
struct node*root=NULL;
int choice,value;
do
{
printf("\n----BINARY SEARCH TREE----\n");
printf("1.Insert\n');
printf("2.Inorder Trasversal\n");
printf("3.Preorder Traversal\n');
printf("4.postorder Traversal\n");
printf("5.Delete a node\n");   
printf("6.Exit\n"); 
printf("Enter your choice:\n");
switch(choice)
{
case1:
     printf("Enter value to insert:\n");
     scanf("%d",choice);
     root=insert(root,value);
     break;
case2:
      print("inorder     


