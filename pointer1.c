#include <stdio.h>

int main()
{
    int a, b;
    int *x, *y;

    printf("enter a nmber:");
    scanf("%d", &a);
    printf("enter a nmber:");
    scanf("%d", &b);
    
    x = &a;
    y = &b;

    *x = *x + *y;
    *y = *x - *y;
    *x = *x - *y;
    printf(" a:%d\n", *x);
    printf(" b :%d\n", *y);

    return 0;
}