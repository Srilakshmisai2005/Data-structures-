#include<stdio.h>
int main()
{
	int a[10],i,key,found=0,pos,n;
	printf("enter the size of the array");    
	scanf("%d",&n);
	printf("enter the array of elements");
	for (i=0;i<n;i++)
	    scanf("%d",&a[i]);
	printf("enter the value to search");
	scanf("%d",&key);
	for (i=0;i<n;i++)
	{
	if (a[i]==key)
		 {
		 found=1;
	     pos=i+1;
	     break;}
	 }
	 if (found==0)
	   printf("not found in the list");
	   else
	   printf("found in the list");
}
