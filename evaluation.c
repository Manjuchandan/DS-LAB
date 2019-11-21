#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define SIZE 20
int top=-1,s[SIZE];
void push(int m)
{
	s[++top]=m;
}
int pop()
{
	return(s[top--]);
}
void main()
{
	char postfix[SIZE],item;
	int i=0,m,op1,op2,res;
	printf("Enter the postfix expression:\n");                                                            
	gets(postfix);                                                             
	while(postfix[i]!='\0')
	{
		item=postfix[i];
		if(isalpha(item))
		{
			printf("Enter the value of %c\n",item);
			scanf("%d",&m);
			push(m);
		}
		else if(isdigit(item))
		{
			push(item-48);
		}
		else
		{
			op2=pop();
			op1=pop();
			switch(item)
			{
				case '^':
                                          res=pow(op1,op2);
                                           push(res);
                                            break;
				case '/':
					res=op1/op2;
					push(res);
					break;
				case '*':
					res=op1*op2;
					push(res);
					break;
				case '+':
					res=op1+op2;
					push(res);
					break;
				case '-':
					res=op1-op2;
					push(res);
					break;
				default:
					printf("Invalid operator\n");
					exit(0);
			}
		}
		i++;
	}
	res=pop();
	printf("Answer=%d \n",res);
}





								
					

