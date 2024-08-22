#include<stdio.h>

void perfect(){
int i,n,r,sum =0;

printf("enter n number:");
scanf("%d",&n);
for (i=1;i<=(n-1);i++){
	
	r= n % i;
	if(r == 0){
		
		sum += i;
	}
}

if (sum == n){
	printf("this is perfact number");
}
else{
	printf("this is not perfact number");
}

}
int main(){
	perfect();
	
}
	