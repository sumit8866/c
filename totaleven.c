#include<stdio.h>
int main()
{
int t =0 , n ; 	
printf("enter the value");
scanf("%d",&n);
 
 for (int i=2;i<=n;i+=2){
printf("%d \n ",i);
t += i;
 
 }
 printf(" total=%d\n",t);
 
 return 0;
 
} 