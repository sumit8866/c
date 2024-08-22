#include<stdio.h>

void sum(int amt ,int rate){

int intrest;

intrest=(amt*rate)/100;
printf("simple intrest%d\n",intrest);
}
int sum1(int amt ,int rate){
int intrest;
intrest=(amt*rate)/100;
return intrest; 

}
int main(){
sum(10000,10);
int intrest=sum1(20000,20);
printf("intrest::%d",intrest);
	
}
