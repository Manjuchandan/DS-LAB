#include<stdio.h>

int gcd(int m,int n)
{
   if(n==0)
   return m;
else if (m<n)
   return gcd(n,m);
else 
   return gcd(n,m%n);
}

void main()
{
  int m,n;

printf("enter the values of m and n");
scanf("%d%d",&m,&n);



printf("gcd of %d & %d is %d\t",m,n,gcd(m,n));
}
