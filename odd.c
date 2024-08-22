#include<stdio.h>
int main()
{
int a ,t =0 , n ;
printf("enter the value");
scanf("%d\n",&n);
 
 for (int i=1;i<=n;i+=2){
printf("%d \n ",i);
t += i;
 
 }
 printf(" total=%d\n",t);
 
 return 0;
 
} 