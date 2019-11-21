#include<stdio.h>
#include<stdlib.h>
 typedef struct node
{
    int data;
    struct node*next;
}node;

  void printdetails(node*head)

{ 	if (head==NULL)
 	printf("SORRY linked list is empty\n");
       else
	node*temp=head;
 	while(temp!=NULL)
      {
	printf("address of current node is %d",temp);
	printf("%d",&data);

	temp=temp->next;
	printf("address of next node is %d",temp);
      
       }
}

   
    node*createnewnode(node*next,int data)
{      
 	  node*newnode=(node *)malloc(sizeof(node));
 	  newnode->data=data;
 	  newnode->next=next;
 	  return newnode;

}

    node*insertbegin(node*head,int data)
{
        node*newnode=createnewnode(head,data);
        head=newnode;
        return head;

}
  
  node*insertend(node*head,int data)
{
	if(head==NULL)
    	return NULL;
 else
   {
	node*pointer=head;
	while(poiner!=NULL)
	pointer=pointer->next;
	node*newnode=createnewnode(NULL,data);
        pointer->next=newnode;
        return head;
    }
}


 node*searchnode(int data,node*head)
{
	if(head==NULL)
    	return NULL;
 else
   {
	
	while(pointer!=NULL)
       {
	if(pointer->data==data)
	     return pointer;
	else 
             pointer=pointer->next;
	}
	return NULL;
    }
}

  node*insertafter(node*head,node*after,int data)
{
	if(head==NULL||after==NULL)
	return NULL;
else
{
       node*pointer=head;
	while(pointer!=after)
	pointer=pointer->next;
if(pointer!=NULL)
{
	node*newnode=createnewnode(pointer->next,data)	
	pointer->next=newnode;
	return head;
}


   return NULL

   }
}


node*insertbefore(node*head,node*before,int data)
{
  
        if(head==NULL||before==NULL)
	return NULL;
    if(head==before)
    {
     head=insertbegin(head,data)
	return head;
    }


       node*pointer=head;
	while(pointer!=NULL)
         {
       		if(pointer->next==before)break;
		pointer=pointer->next;
         }
if(pointer!=NULL)
    {
	node*newnode=createnewnode(pointer->next,data)	
	pointer->next=newnode;
	return head;
    }
else

   return NULL;

   
}





































































  
 void main()
{
          int data;
 	int choice;
 	  node*head=NULL;
 	 for(;;)
      {
	printf("enter the choice");
         scanf("%d",choice);
switch(choice)
   {
	case 1: printf("enter the item to be inserted");
                 scanf("%d",&data);
                     
   			head=insertbegin(head,data);	 

		       printdetails(head);
   }
}

}
