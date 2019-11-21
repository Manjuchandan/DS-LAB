#include<stdio.h>
#include<stdlib.h>
#define SIZE 20
char s[SIZE];
char item;
int top=-1;

int presedence(char item)
{

   if(item=='^')
    return 4;
  if(item=='*'||item=='/')
    return 3;
if(item=='+'||item=='-')
    return 3;
else 
return 1;
}

int isoperator(char item)
{
if(item=='^'||item=='*'||item=='/'||item=='+'||item=='-')
    return 1;
else
return 0;
}

void push(char item)
{

   s[++top]=item;
}

 char pop()
{
   return s[top--];
}


int main()
{

   char infix[SIZE],postfix[SIZE],a,item;
   int i=0,j=0;

  printf("enter expressoin");
 scanf("%s",infix);

 while(infix[i]!='\0')
 {
    item=infix[i];

  if(isalnum(item))
   postfix[j++]=item;
 else if(item=='(')
   push(item);

 else if(isoperator(item))
 {
       if(item!='^')
        {
             while(top!=-1&&presedence(s[top])>=presedence(item))
                   postfix[j++]=pop();
          }
       push(item);
 }
else if(item==')')
 {
   while(s[top]!='(')
   postfix[j++]=pop();
    a=pop();
  }

i++;
}

while(top!=-1)
postfix[j++]=pop();
 postfix[j]='\0';
printf("result is");
puts(postfix);
}





























