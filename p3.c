#include<stdio.h>
int main()
{
int	 n ; 
int c=1;	
printf("enter the value");
scanf("%d",&n);
 
for (int i=1;i<=n;i++){
	printf("%d ",c*i);
	c +=c;
}

 return 0;
 
} 