#include<stdio.h>
int main ()
{
int  arr[3][3];
int ut=0,lt=0,dt=0;
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
		if(i<j)
		{
		ut +=arr[i][j];
		}
		else if(i>j)
		{
		lt +=arr[i][j];
		}
		else
		{
		dt +=arr[i][j];
		}
}
printf("\n");
}
printf("upper total:%d\n",ut);
printf("lower total:%d\n",lt);
printf("m total:%d\n",dt);
}