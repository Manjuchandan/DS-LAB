#include<stdio.h>
#include<stdlib.h>
#define SIZE 9
char quene[SIZE];
int front=-1,rear=-1,item,count;

void insert()
{

   printf("enter the item to be inserted\n");
    scanf("%d",&item);
      if(count==SIZE)
   printf("quene is full");

else 
    {
      if(front==-1)  front=0;
    rear=(rear+1)%SIZE;
    quene[rear]=item;
    	count+=1;

     }
}
   void delete()
{
    if(count==0)
    printf("quene is empty");
else
  {
   item=quene[front];
   front=(front+1)%SIZE;
    count-=1;
   }
}

 void display()
{
    if(front == -1)
    printf("\nCircular Queue is Empty!\n");
    else
    {
        int i;
        printf("\nCircular Queue Elements are : \n");
        if(front <= rear)
        {
            
            for (i=front; i <= rear; i++)
            printf("%d\t",quene[i]);
        }
        
        else
        {
            
            for (i = 0;i <= rear; i++) 
            printf("%d\t",quene[i]);
            
            for (i = front;i <= SIZE - 1; i++) /*Start from the position of "front" when previous deQueing stopped */
            printf("%d\t", quene[i]);
            
            
        }
    }
}//end display



  
      
       
   

 void main()
{
   int choice,count;
for(;;)
{
 printf("1:insert,\n2:delete,\n3:display,\n4:exit\n");
  printf("enter the choice:\n");
  scanf("%d", &choice);
  switch(choice)
{

    case 1: insert();
	      break;
    case 2:  delete();
	       break;
   case 3:   display();
	      break;
   case 4:  exit(0);
	    break;
   default:printf("invalid choice");
}
}
}
