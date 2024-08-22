#include <stdio.h>
int rate ,qty,amt,dis,bamt,gst,netbill;

void p1(){

printf("enter rate:");
scanf("%d",&rate);
printf("enter qty:");
scanf("%d",&qty);
}
void p2(){
	
	p1();
	amt=rate*qty;
	dis=amt*0.10;
	bamt=amt-dis;
	gst=bamt*0.18;
	netbill=bamt+gst;
}

void p3(){
	p2();
	
	printf("rate  qty  amount  dis  billamt  gst18  netbill \n");
	printf("%d  %d  %d  %d   %d   %d   %d  \n",rate , qty , amt , dis , bamt , gst , netbill);
	
}

int main(){
	p3();
	
}