#include <stdio.h>
int main()
{
    char s[] = {'h', 'e', 'l', 'l', 'o'};
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("%c ", s[j]);
        }
        printf("\n");
    }
    return 0;
}