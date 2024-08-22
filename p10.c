#include<stdio.h> 
int main()
{
char c;
int t=1;

for( c='A';c<='Z';c+=2)
{
	if(t==1){
	printf("%c",c);
}else
{
printf("%c",c+32);
}
t!=t;


}
 return 0;
}