#include <stdio.h>

int main() {
    int n,i;
    int es=0, os=0;
    printf("Enter the array size:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements:\n");
    for (i=0;i<n;i++) 
	{
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++) 
	{
        if (i % 2 == 0) 
		{ 
            es += i;
        } 
		else 
		{ 
            os += i;
        }
    }
    printf("total of even postion: %d\n", es);
    printf("total of odd postions: %d\n", os);
    return 0;
}