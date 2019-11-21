
 #include<stdio.h>  
 #include<stdlib.h>    
 #include<string.h>  
 
 
 typedef struct node  
 {  
      char data;  
      struct node *next;  
      struct node *prev;
 }node;

struct node *head,*tail,*ptr,*temp;


void create(char ch) // creating double link list  
 {  
      struct node *ptr,*temp,*prev,*next;  
      ptr=head;  
      temp=(node*)malloc(sizeof(node));  // allocating space node dynamicaly  
      temp->data=ch;  
      if(head == NULL)  
      {  
           head=temp;  
           tail=temp;  
           
      }  
      else  
      {  temp->next=head;
	 head->prev=temp;	//like insertbegin.
	 head=temp;
      }  
 }

  
 void display()  
 {  
      node *ptr;  
      ptr=head;    
      printf("\n\n\t");  
      while(ptr!= NULL) // traverse list & print volue  
      {  
           printf("%c",ptr->data);  
           ptr=ptr->next;  
      }  
 }  


void check(int m) // funtion check our requrement  
 {  
      struct node *fst,*lst,*prev;  
      fst=head;  
      lst=tail;
  
      while(m/2 > 0)   
      {  
           if(fst->data == lst->data)  
           {  
                fst=fst->next;  
                lst=lst->prev;  
           }  
           else  
           {  
           printf("\n\n\t not a palidrome :???");  
           exit(0);  
           }  
             m--;  
      }  
      printf("\n\n\t it is palidrome !!!!");  
 }  




 void main()  
 {  
      char a[20];  
      int m,i;  
      printf("\n enter string to check :");  
      scanf("%s",&a);  
      m=strlen(a);    // calculating lenghth of string  
      printf("\n length of string is %d",m);  
      for(i=0;i<m;i++)  
      {  
           create(a[i]); // creating a double ling list with each node containning a single char  
      }  
      display();  
      check(m);   
 }   
 
