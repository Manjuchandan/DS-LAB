#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
   int data;
   struct node *next;
}node;

struct node *head,*temp,*ptr;

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
   }
else
  {
      temp->next=head;
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
   }   
else
  {
     ptr=head;
     while(ptr->next!=NULL)
   { 
     ptr=ptr->next;
  }
    ptr->next=temp;
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
        head=head->next;
  
    printf("the deleted element is %d",ptr->data);
     free(ptr);
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
     while(ptr->next!=NULL)
      { 

           temp=ptr;
           ptr=ptr->next;
        }

     temp->next=NULL;
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
  {   ptr=head;
      head=head->next;
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
      struct node *head=NULL;
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









 











  
  

