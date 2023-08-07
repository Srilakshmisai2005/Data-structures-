include<stdio.h>

int bs(int arr[],int n,int key)
{
	int s=0,e=n,mid=0;
	while(s<e)
	{
		mid=(s+e)/2;
		if(arr[mid]==key)
		return mid;
		else if(arr[mid]<key)
		s=mid;
		else if(arr[mid]>key)
		e=mid;
		
	}
}

int main()
{
	int a;
	scanf("%d",&a);
	int key;
	scanf("%d",&key);
	int arr[a];
	for(int i=0;i<a;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<a;i++)
	{
		for(int j=0;j<a;j++)
		{
			if(arr[i]<arr[j])
			{
				int temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	printf("%d",bs(arr,a,key));
}