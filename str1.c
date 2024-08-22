#include <stdio.h>
int main ()
{
char ch[100];
int l=0;
printf("enter char:");
scanf("%s",&ch);


for (int i=0;ch[i]!='\0';i++){
	l++;

}
printf("lenth :%d",l);
}
