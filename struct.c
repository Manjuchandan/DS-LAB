#include<stdio.h>
#include <string.h>
struct tea
{
  char name[34];
  char type[34];
  float amount;
  int   number; 

}p1,*p3;


  void getdetails(struct tea obj)
{
  	printf("\n-------name is %s",obj.name);

	printf("\n-------type is %s",obj.type);

	printf("\n-------amount is %f",obj.amount);

	printf("\n-------number is %d",obj.number);
}

  void setdetailsbyvalue(struct tea obj)
{
  strcpy(obj.name, "poori");
   strcpy(obj.type, "lqd");
    obj.amount=40;
    obj.number=13343;
}

 void setdetailsbyref(struct tea *obj)
{
   strcpy(obj->name, "rice");
   strcpy(obj->type, "gas");
    obj->amount=400;
    obj->number=143;
}
   
void main()
{
  struct tea p2={ "dose","solid",10000,13426};
 	 printf("before calling setdetails by value the person details are:");

 				
 	 p1=p2;
  
  setdetailsbyvalue(p1);

	printf("\n\nafter calling setdetails by value the person details are:");
 	 getdetails(p2);

   setdetailsbyref(&p2);

	printf("after calling setdetails by reference the person details are :");
 	 getdetails(p2);

}//end of mains























