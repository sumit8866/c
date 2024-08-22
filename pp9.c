#include<stdio.h>
int main()
{
 int k=11;
 for (int i=1;i<=5;i++){
 for(int j=1;j<=5;j++){
 printf("%d ",k++);
 }
 printf("\n");
 k +=5;
 }
 return 0;
}                                      