#include<stdio.h>
int ff(int n){
if (n == 0){
return 0;
}
else if(n==1){
	return 1;
}else{

return (ff(n-1)+ff(n-2));

}
}

int main()
{
int n;
printf("enter n number:");
scanf("%d",&n);

int total;

printf("fibonacci:");
for(int i =0;i<n;i++){
	printf("%d ",ff(i));

}
return 0;

}