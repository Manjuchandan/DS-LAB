#include<stdio.h>

int mt(int n,char s,char d,char t)
{
   if(n==1){
 printf("\nmove %d disks from %c to %c\n",n,s,d);
        return ; }

  mt(n-1,s,t,d);
  {
   printf("\nmove %d disks from %c to %c\n",n,s,d);
  }
   mt(n-1,t,d,s);
}

void main()
{

  int n;
  printf("enter the no of disks");
  scanf("%d",&n);

 mt(n,'A','B','C');

}

