#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct fast
{
  char name[34];
  float price;
  struct fast *link;




}item1,*item2;

int main()
{

	printf("\naddresss is %d,bytes is %d ", &item1,sizeof(item1));
 	item2=(struct fast *)malloc(sizeof(struct fast));

	printf("\naddres is %d,bytes is %d",item2,sizeof(item2));	

	printf("\naddres is %d,bytes is %d",item2,sizeof(item2));

	strcpy(item2->name, "poori");
	item2->price=35;
	printf("\n\n\n--name is %s,price is %f,link value is %d",item2->name,item2->price,item2->link);
	
	item2->link = ++item2;//link to next node
        

	strcpy(item2->name, "dosa");
	item2->price=55;
	printf("\n\n\n--name is %s,price is %f,link value is %d",item2->name,item2->price,item2->link);
	
       


	printf("\n");









}//end main

