#include<stdio.h>
int main()
{
char ch;

printf("enter char=");
scanf("%c",&ch);

if (ch == 'a' || ch == 'e' ||ch == 'i' ||ch == 'o' ||ch == 'u' ||ch == 'A' ||ch == 'E' ||ch == 'I' ||ch == 'O' ||ch == 'U'){
    printf("character is vovel");	
}else{
	printf("character is consonant");
}
return 0;
} 