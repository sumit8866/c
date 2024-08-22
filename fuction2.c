#include<stdio.h>

void cir(){

int cir,r;

printf("enter amt:");
scanf("%d",&r);

cir=3.14*r*r;
printf("area of circle%d\n",cir);
}
int sum1(){

int cir,r;

printf("enter rate:");
scanf("%d",&r);

cir=3.14*r*r;
printf("area of circle%d\n",cir);

return cir;

}
int main(){
cir();

int cir=sum1();
printf("intrest::%d",cir);
	
}
