#include<stdio.h> 
int main()
{
int n;
int a=1 ,b=1;

printf("enter n value:");
scanf("%d",&n);
printf("%d %d,",a,b);
for (int i=3;i<=n;i++){
	int c=a+b;
	printf("%d \n",c);
	a=b;
	b=c;
}

 return 0;
}