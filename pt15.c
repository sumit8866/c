#include<stdio.h>
int main()
{
	int n;
	printf("enter row:");
scanf("%d",&n);
 for (int i=0;i<n;i++){
  for (int j=0;j<n;j++){
 if(i==0||i==n||j==0||j==n||i==j||i==n-1||(i+j)==(n-1)||j==n-1){
    printf("* ");
   }else{
    printf("  ");
   }
  }
  printf("\n");
 }
  return 0;
}