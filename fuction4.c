#include<stdio.h>

int rec(){

int l,w,rec;

printf("enter l:");
scanf("%d",&l);
printf("enter w:");
scanf("%d",&w);

rec= l*w;

return rec; 
}
int main(){

int rec1=rec();
printf("rec:%d",rec1);


	
}