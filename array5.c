#include <stdio.h>

int main() 
{
    int n,i;
    int es=0, os=0;
    printf("Enter the array size:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements:\n");
    for (i=0;i<n;i++) {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++) 
	{
        if (arr[i] % 2 == 0) 
		{ 
            es += arr[i];
        } 
		else 
		{ 
            os += arr[i];
        }
    }
    printf("total of even number: %d\n", es);
    printf("total of odd number: %d\n", os);
    return 0;
}