#include <stdio.h>   
#include <string.h>  
int main()  
{  
    char str[50],t;  
    int i, a,b,len;  
  
    printf (" Enter a string to reverse order: ");  
    scanf( "%s", &str);  
    len = strlen(str);  
     
    b = len - 1; 
     
    for (i = 0; i <b; i++)  
    {  
        t = str[i];  
        str[i] = str[b];  
        str[b] = t;  
        b--;  
    }  
    printf (" The reverse of the original string is: %s ",  str);  
    
}