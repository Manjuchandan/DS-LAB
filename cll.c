#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
   int data;
   struct node *next;
}node;

struct node *head,*temp,*ptr,*deleteptr;

void display()
{
  if(head==NULL)
  printf("linked list empty");
else
 {
    ptr=head;
   while(ptr->next!=head)
   {
      printf("%d",ptr->data);
        ptr=ptr->next;
    }
     printf("%d",ptr->data);
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
       head->next=temp;
   }
else
  {
     
       ptr=head;
      while(ptr->next!=head)
      {
          ptr=ptr->next;
       }
                temp->next=head;
       ptr->next=temp;
       head=temp;
  }
}


void insertend()
{
    temp=(node*)malloc(sizeof(node));
   printf("enter the data for the node");
   scanf("%d",&temp->data);
   temp->next=NULL;

    if(head==NULL)
  {
      head=temp;
      head->next=temp;
   }   
else
  {
     ptr=head;
     while(ptr->next!=head)
   { 
     ptr=ptr->next;
  }
    ptr->next=temp;
     temp->next=head;
 }

}

 void insertpos()
{
    int i,pos;
   temp=(node*)malloc(sizeof(node));
   printf("enter the data for the node");
   scanf("%d",&temp->data);
   temp->next=NULL;
    printf("enter the position to be inserted");
      scanf("%d",&pos); 

   if(pos==1)
  {   temp->next=head;
       ptr=head;
      while(ptr->next!=head)
      {
          ptr=ptr->next;
       }
       ptr->next=temp;
       head=temp;
      
   }   

else
 {    
     ptr=head;
    for(i=0;i<pos-1;i++)
    {
        ptr=ptr->next;
          
       if(ptr==NULL)
          printf("position is notfound");
       }
      temp->next=ptr->next;
      ptr->next=temp;
   }
}

void deletebegin()
{
  if(head==NULL)
  {   
      printf("empty");
   }    
     
else
  {
        ptr=head;
        deleteptr=head;
       while(ptr->next!=head)
         {
             ptr=ptr->next;
          }
         
        head=head->next;
          ptr->next=head;
  
    printf("the deleted element is %d",deleteptr->data);
     free(deleteptr);
  }
}


void deleteend()
{
  if(head==NULL)
  {   
      printf("empty");
   }    
     
else
  {     
      ptr=head;   
     while(ptr->next!=head)
      { 

           temp=ptr;
           ptr=ptr->next;
        }

     temp->next=head;
  printf("the deleted element is %d",ptr->data);
     free(ptr);
  }
}


void deletepos()
{
   int i,pos;
  
     if(head==NULL)
  {   
      printf("empty");
   }    
     
else
  {
     printf("enter the position to be deleted");
      scanf("%d",&pos); 

   if(pos==1)
  { 
    ptr=head;   
     while(ptr->next!=head)
      { 

           temp=ptr;
           ptr=ptr->next;
        }

     temp->next=head;
  printf("the deleted element is %d",ptr->data);
     free(ptr);
  }

     else
         {    
                  ptr=head;
		for(i=0;i<pos;i++)
                 {
                         temp=ptr; 
			ptr=ptr->next;
		    }
                temp->next=ptr->next;

            printf("the deleted element is %d",ptr->data);
     free(ptr);
      }
 }


}


int main()
{

   int choice;

 for(;;)
{
   printf("1:display\n2:insertbegin\n3:insertend\n4:insertpos\n5:deletebegin\n6:deleteend\n7:deletepos\n8:exit\n");
   printf("enter the choice:");
   scanf("%d",&choice);

	switch(choice)
		{
			
			case 1:display();
				break;


                 	case 2:insertbegin();
				break;
			
			case 3:insertend();
				break;

			case 4:insertpos();
				break;
                        case 5 :deletebegin();
                                  break;
 			case 6:deleteend();
				break;
			case 7:deletepos();
				break;
                          case 8:exit(0);
			default:printf("sorry invalid choice");
		}
}




}//end




