#include<stdio.h>
int main()
{
	int n;
	printf("enter array size:");
	scanf("%d",&n);
	int arr[n];
	
	for (int i = 0; i<n; i++)
	{
		printf("enter element of position:%d \n",i);
		scanf("%d",&arr[i]);
	}
	for ( int i =0; i<n; i++)
	{
		printf("%d\n",arr[i]);

	}
return 0;
}