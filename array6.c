#include <stdio.h>

int main() 
{
    int n,i;
    int total=0;
    printf("Enter the array size:");
    scanf("%d",&n);
    int arr[n];
    printf("Enterelements:\n");
    for (i=0;i<n;i++) 
	{
        scanf("%d", &arr[i]);
		total +=arr[i];   
    }
   
    
    printf("total of elements: %d\n",total);
    
    return 0;
}