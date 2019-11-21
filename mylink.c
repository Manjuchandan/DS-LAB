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



void insertbegin()
{
	temp=(node *)malloc(sizeof(node));
	printf("Enter the data value for the node\n");
	scanf("%d",&temp->data);
        temp->next=NULL;



     if(head==NULL)
	{
		head=temp;
		return;
	 }
else
{
	temp->next=head;
	head=temp;
}


}//end


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


  void insertpos()
{
    int i,pos;
 	temp=(node *)malloc(sizeof(node));
	printf("Enter the data value for the node\n");
	scanf("%d",&temp->data);
        temp->next=NULL;
	printf("Enter the specifed position for the insertion\n");
	scanf("%d",&pos);
 	

	if(pos==1)
	{
		temp->next=head;
		head=temp;
	}

else
{
	for(i=1,ptr=head;i<pos-1;i++)//like if enter pos is 3 we have to insert newnode before 3rd node so i<pos-1.
	{
		ptr=ptr->next;
			
			if(ptr==NULL)
			{
				printf("position is not found\n");
				return;
				}

				


	}

      temp->next=ptr->next;			
      ptr->next=temp;
           
}//end of else


}//end of fn.


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

int deleteend()
{
	
	if(head==NULL)
         {

            printf("SORRY LINK LIST IS EMPTY\n");
        }


 
else
{
                ptr=head;
                while(ptr->next!=NULL)
                {                                                //ptr points to the deleting node .......
                                                                 //temp points to the previous node.......
                        temp=ptr;
                        ptr=ptr->next;
                }

                temp->next=NULL;
                printf("\nThe deleted element is:%d\t",ptr->data);
                free(ptr);


}


}
		
void deletepos()
{
  node*temp;
  int i,pos;
   
	if(head==NULL)
         {

            printf("SORRY LINK LIST IS EMPTY\n");
        }



   
else 
{
  
    printf("enter the position for the deleting of  node\n");
    scanf("%d",&pos);
   
    if(pos==1)
    {
      ptr=head;
      head=head->next;
       free(ptr);
         }
else 
{
        ptr=head;
        for(i=1;i<pos;i++)
	  {
 
               temp=ptr;
               ptr=ptr->next;
               if(ptr==NULL)
		{
                   printf("position is not found\t");
                          return;
                 }
             }

            temp->next=ptr->next;
   
             printf("\nThe deleted element is:%d\t",ptr->data);
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




	  











































  	
