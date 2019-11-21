#include<stdio.h>
#include<stdlib.h>
#define SIZE 19
typedef struct tree
{
   char data;
  struct tree *left,*right;
}tree;
int top=-1;
struct tree *s[34];
struct tree *node;

void push(tree *node)
{
   s[++top]=node;
}

tree *pop()
{
   return s[top--];
}

int check(char ch)
{
  if(ch=='*'||ch=='-'||ch=='+'||ch=='/')
     return 2;
 else return 1;
}

int cal(tree *node)
{
   int ch;

 ch=check(node->data);
if(ch==1)
return node->data-48;
else if(ch==2)
    {
       if(node->data=='+')
        return cal(node->left)+cal(node->right);
	if(node->data=='-')
        return cal(node->left)-cal(node->right);
	if(node->data=='*')
        return cal(node->left)*cal(node->right);
	if(node->data=='/')
        return cal(node->left)/cal(node->right);
      }
else 
return 0;
}

void operand(char a)
{
    node=(tree*)malloc(sizeof(tree));
    node->data=a;
    node->left,node->right=NULL;
    push(node);
}

void operator(char b)
{
    node=(tree*)malloc(sizeof(tree));
    node->data=b;
    node->left=pop();
node->right=pop();
    push(node);
}

void inorder(tree *node)
{
    if(node!=NULL)
  {
      inorder(node->left);
       printf("%c",node->data);
      inorder(node->right);
   }
}


void main()
{
    char ch;
    char postfix[SIZE];
    int i,res,op;

 printf("enter the valid postfix expression");
 scanf("%s",postfix);

  for(i=0;postfix[i]!='\0';i++)
  {
      op=check(postfix[i]);
      
      if(op==1)
     operand(postfix[i]);
    else if(op==2)
     operator(postfix[i]);
   }
 res=cal(s[top]);
 printf("answer is: %d",res);
printf("inorder travesal is : ");
inorder(s[top]);
}



