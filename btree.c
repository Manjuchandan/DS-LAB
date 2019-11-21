#include<stdio.h>
#include<stdlib.h>  

typedef struct node
{
  int data;
 struct node *left,*right;
}node;

node *create()
{
   node *root;
  root=(node*)malloc(sizeof(node));
  printf("enter the root element");
  scanf("%d",&root->data);
 
   if(root->data==-1)
    return NULL;
  
  printf("enter the left child of %d",root->data);
 root->left=create();
 printf("enter the right child of %d",root->data);
 root->right=create();
  return root;

}

 void preorder(node *t)
 {
    if(t!=NULL)
   {
        printf("\t%d\t",t->data);
        preorder(t->left);
	preorder(t->right);
   }
}

 void inorder(node *t)
 {
    if(t!=NULL)
   {
        
        inorder(t->left);
       printf("%d---->",t->data);
	inorder(t->right);
   }
}


 void postorder(node *t)
 {
    if(t!=NULL)
   {
       
        postorder(t->left);
	postorder(t->right);
          printf("%d",t->data);
   }
}


void main()
{   node *root;  
   root=create();
  printf("\nthe preorder travesal of tree is:\n");
  preorder(root);
   printf("\nthe inorder travesal of tree is:\n");
  inorder(root);
   printf("\nthe postorder travesal of tree is:\n");
  postorder(root);
}
