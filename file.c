

#include <stdio.h>

int main()
{

    FILE *p;
    char string[100];

    // p = fopen("text.txt","a");

    // gets(string);

    // fprintf(p,"%s",string);

    p = fopen("text.txt", "r");

    while (fscanf(p, "%s", string) != EOF)
    {
        printf("%s ", string);
    }

    return 0;
}