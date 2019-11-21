#include<stdio.h>
int search(int key,int a[],int low,int high)
{
   if(low>high)
    return -1;
int mid;
 mid=(low+high)/2;
 if(key==a[mid])
   return mid;
else if(key<a[mid])
 return search(key,a,low,mid-1);
else
  return search(key,a,mid+1,high);
}
 
void main()
{
   int key,a[56],n,i,pos;

printf("enter the size of array");
scanf("%d",&n);

printf("enter the elements of array");
for(i=0;i<n;i++)
scanf("%d",&a[i]);

printf("enter the key element to be serch");
scanf("%d",&key);

pos=search(key,a,0,n-1);

printf("the element is found at %d position",pos);

}

