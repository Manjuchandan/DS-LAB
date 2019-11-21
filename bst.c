#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
   int data;
   struct node *left,*right;
 }node;

struct node *tree,*ptr;

node *createnode(int data)
 {
   ptr=(node*)malloc(sizeof(node));
   ptr->data=data;
   ptr->left,ptr->right=NULL;
    return ptr;
}

void createleaf(node *root)
{   int data;
    if(root==NULL)
   {
     printf("enter the root element");
     scanf("%d",&data);
   
    root=createnode(data);
     tree=root;
 }

  printf("enter the data");
  scanf("%d",&data);

  while(1)
  {
     if(data>=root->data&&root->right!=NULL)
      root=root->right;
    else if(data<root->data&&root->left!=NULL)
       root=root->left;
     else
         break;
  }
   
   if(data>=root->data)
  root->right=createnode(data);
else
  root->left=createnode(data);

}

 void preorder(node *t)
 {
    if(t!=NULL)
   {
        printf("%d---->",t->data);
        preorder(t->left);
	preorder(t->right);
   }
}

 void inorder(node *t)
 {
    if(t!=NULL)
   {
        
        inorder(t->left);
       printf("%d",t->data);
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
{

   int choice;

  for(;;)
  {
     printf("1:insert\n2:preorder\n3:inorder\n4:postorder\n5:exit\n");
      printf("enter the choice");
     scanf("%d",&choice);

    switch(choice)
  {
     case 1:createleaf(tree);
             break;

     case 2: preorder(tree);
                break;
     case 3: inorder(tree);
               break;
     case 4: postorder(tree);
               break;
     case 5:exit(0);
}
}
} 


