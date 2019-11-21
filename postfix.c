#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define SIZE 20

char s[SIZE];

int top=-1;

void push(int m)
 {
    s[++top]=m;
}

 char pop()
{
 
  return s[top--];
}


void main()
{
   int i,res,op1,op2,m;
char postfix[SIZE],item;

printf("entrer exp");
scanf("%s",postfix);

while(postfix[i]!='\0')
{
   item=postfix[i];


  if(isalpha(item))
  {
     printf("entert value of %c",item);
    scanf("%d",&m);
    push(m);
 }
 else if(isdigit(item))
 push(item-48);
else
 {
    op2=pop();
     op1=pop();

 switch(item)
   {
      case'^': res=pow(op1,op2);
                push(res);
                  break;
    
        case'*': res=op1*op2;
                push(res);
                  break;
    case'/': res=op1/op2;
                push(res);
                  break;
    case'-': res=op1-op2;
                push(res);
                  break;
    case'+': res=op1+op2;
                push(res);
                  break;
    default :printf("invalid");
 }

}

i++;
}

res=pop();
printf("result is %d",res);
}
 

















