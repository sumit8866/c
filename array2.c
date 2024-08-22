#include<stdio.h>
int main()
{
	int n,a;
	printf("enter array size:");
	scanf("%d",&n);
	int arr[n];
	
	for (int i = 0; i<n; i++)
	{
		printf("enter element of position:%d \t",i);
		scanf("%d",&arr[i]);
	}
	for ( int i =0; i<n; i++)
	{
		printf("%d\n",arr[i]);

	}
printf("enter array size:");
	scanf("%d",&a);
	int arr1[a];
	
	for (int i = 0; i<a; i++)
	{
		printf("enter element of position:%d \t  ",i);
		scanf("%d",&arr[i]);
	}
	for ( int i =0; i<a; i++)
	{
		printf("%d\n",arr[i]);
	}
return 0;

}