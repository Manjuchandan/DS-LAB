#include<stdio.h>
#include<stdlib.h>
#define SIZE 10

int front=-1,rear=-1;
char q[SIZE];
int item,count;
void insert()
{  printf("enter the elemnt to be insrtted");
    scanf("%d",&item);
   if(count==SIZE)
 printf("quene is full");
else
{
   if(front==-1) front=0;
     rear+=1%SIZE;
   q[rear]=item;
    count++;
 }
}

 void delete()
{
  if(count==0)
 printf("q is empty");
else
{
   item=q[front];
   front+=1;
    count-=1;
}

}

void display()
{  int i;
   if(front==-1||front>rear)
 printf("q is empty");
else
{
    if(front<=rear)
    {
    
      for(i=front;i<=rear;i++)
      printf("%d",q[i]);
 
    }
  else
    {
      for(i=0;i<=rear;i++)
      printf("%d",q[i]);
      for(i=front;i<SIZE-1;i++)
      printf("%d",q[i]);
     }
 }
}

void main()
{
   int choice;
for(;;){
 printf("1:insert,2:delete,3:display,4:exit\n");
  printf("enter the choice");
  scanf("%d", &choice);
  switch(choice){

    case 1:
	     
	     insert();
	      break;
    case 2:  
	    
	       delete();
	       break;
   case 3:   display();
	      break;
   case 4:  exit(0);
	    break;
   default:printf("invalid choice");
 }
 }
 }

