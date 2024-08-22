#include<stdio.h>
int n, r = 0, rr;
void p1(){
 printf("Enter an integer: ");
  scanf("%d", &n);

  while (n != 0) {
    rr = n % 10;
    r = r * 10 + rr;
    n /= 10;
  }

  printf("Reversed number = %d", r);
}
int main(){
	p1();
}