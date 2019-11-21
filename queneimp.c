#include<stdio.h>
#include<stdlib.h>


typedef struct node                          //Refer this program
{									//FOR STACK IMPLEMENTATION
   int data;								//use insertbegin(),,,deletebegin(),,,,display()  	
   struct node *next;							//FOR quene IMPLEMENTATION
}node;									//use insertend(),,,,deletebegin() ,,,,display() 

  struct node *ptr,*head,*temp;
  
 
void display()
{
  
	if(head==NULL)
	printf("SORRY LINK LIST IS EMPTY\n");
 else
      {          printf("Linked list elements are:\n");
  		ptr=head;
		while(ptr!=NULL)
		{	printf("%d",ptr->data);
			ptr=ptr->next;

		}
			
 }
  

}//end of display


void insertend()
{
		

	temp=(node *)malloc(sizeof(node));
	printf("Enter the data value for the node\n");
	scanf("%d",&temp->data);
        temp->next=NULL;

if(head==NULL)
   {
	head=temp;//means newnode itself acts as a fst node
	return;
    }
 
else

 {
     ptr=head;

	while(ptr->next!=NULL)
	{
	   ptr=ptr->next;//for travelling
         }  
       
	 ptr->next=temp;//if while condn is false it means we get end node just link that to the newnode
}

}


void deletebegin()
{
	
	if(head==NULL)
	{
          

            printf("SORRY LINK LIST IS EMPTY\n");
        }

 else
      { 

		ptr=head;
		head=head->next;

		printf("The Deleted element is %d\t", ptr->data);

		 free(ptr);
      }									//in deleting ptr points to the previous node.


                 
}//end





int main()
{
   struct node *head=NULL;
   int choice;

 for(;;)
{
   printf("1:display\n3:insertend\n5:deletebegin\n8:exit\n");
   printf("enter the choice:");
   scanf("%d",&choice);

	switch(choice)
		{
			
			case 1:display();
				break;


                 	
			case 3:insertend();
				break;

			
                        case 5 :deletebegin();
                                  break;
 			
                          case 8:exit(0);
			default:printf("sorry invalid choice");
		}
}




}//end




