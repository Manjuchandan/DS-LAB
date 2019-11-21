#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
   int data;
   struct node *next,*prev;
}node;

struct node *head,*temp,*ptr,*tail;

void display()
{
  if(head==NULL)
  printf("linked list empty");
else
 {
    ptr=head;
   while(ptr!=NULL)
   {
      printf("%d",ptr->data);
        ptr=ptr->next;

    }
 }

}

void insertbegin()
{
   temp=(node*)malloc(sizeof(node));
   printf("enter the data for the node");
   scanf("%d",&temp->data);
   temp->next=NULL;

  if(head==NULL)
  {
      head=temp;
      tail=temp;
   }
else
  {
      temp->next=head;
       head->prev=temp;
       head=temp;
  }

  int temp,i,count;
  struct node *t,*ptr;
   ptr=head;
  while(ptr!=NULL)
  {
     count++;
     ptr=ptr->next;
  }
     ptr=head;
 for(i=0;i<count;i++)
 {
    while(ptr->next!=NULL)
    {
        t=ptr;
	ptr=ptr->next;
        
          if(t->data>ptr->data)
               {
                   temp=t->data;
                    t->data=ptr->data;
			ptr->data=temp;
               }
       }
       ptr=head;
   }

}


int main()
{
      struct node *head=NULL;
   int choice;

 for(;;)
{
   printf("1:display\n2:insertbegin\n8:exit\n");
   printf("enter the choice:");
   scanf("%d",&choice);

	switch(choice)
		{
			
			case 1:display();
				break;


                 	case 2:insertbegin();
				break;
			
                          case 8:exit(0);
			default:printf("sorry invalid choice");
		}
}




}//end
