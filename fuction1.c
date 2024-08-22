#include<stdio.h>

void sum(){

int amt,rate,intrest;

printf("enter amt:");
scanf("%d",&amt);
printf("enter rate:");
scanf("%d",&rate);

intrest=(amt*rate)/100;
printf("simple intrest%d\n",intrest);
}
int sum1(){

int amt,rate,intrest;

printf("enter amt:");
scanf("%d",&amt);
printf("enter rate:");
scanf("%d",&rate);

intrest=(amt*rate)/100;
return intrest;

}
int main(){
sum();

int intrest=sum1();
printf("intrest::%d",intrest);
	
}
