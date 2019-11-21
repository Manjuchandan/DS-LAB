#include<stdio.h>
#define SIZE 3
struct studentnode
{
  char name[23];
  char gender;
  int age;
  int usn;
  struct studentnode *link;
 }*sn1,*sn2;

   int i;
  int main()
{	
  sn1=(struct studentnode *)malloc(3*sizeof(struct studentnode));
   printf("the no of bytes allocated for the node is %d\n",(3*sizeof(struct studentnode)));
    
	sn2=sn1;
  
for(i=0;i<SIZE;i++)
{
  
   printf("Enter the name of the student\n");
    scanf(" %s",sn1->name);
   printf("Enter the gender of the student\n");
    scanf(" %c",&sn1->gender);
   printf("Enter the age of the student\n");
    scanf(" %d",&sn1->age);
   printf("Enter the usn of the student\n");
    scanf(" %d",&sn1->usn);
   printf("name is %s\n,gender is %c\n, age is %d\n,usn is %d\n",sn1->name,sn1->gender,sn1->age,sn1->usn);

 sn2->link=++sn1;

  if(i<SIZE-1)
{
   printf("\nthe address of the current node is %d and for the next node is %d\n",sn2,sn2->link);
}
 if (i==SIZE-1)
  {
 sn2->link = NULL;
 printf("\nthe address of the current node is %d and for the next node is %d\n", sn2, sn2->link);
  }
sn2++;

}//for end
}






