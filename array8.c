#include<stdio.h>
int main ()
{
int  arr[3][3];
int arr1[3][3];
int sum =0;

printf("first array\n");
for(int i=0; i<3;i++)
{
	for(int j=0; j<3;j++)
	{
		printf("enter elements:");
		scanf("%d",&arr[i][j]);
		
	}
	printf("\n");
}
for(int i=0; i<3;i++)
{
	for(int j=0; j<3;j++)
	{
		printf("%d ",arr[i][j]);
		sum +=arr[i][j];
}
printf("\n");
}
printf("second array\n");
for(int i=0; i<3;i++)
{
	for(int j=0; j<3;j++)
	{
		printf("enter elements:");
		scanf("%d",&arr1[i][j]);
		
	}
	printf("\n");
}
for(int i=0; i<3;i++)
{
	for(int j=0; j<3;j++)
	{
		printf("%d ",arr1[i][j]);
		sum +=arr1[i][j];
	}
printf("\n");
}
printf("total:%d",sum);
return 0;

}