#include<stdio.h>

int main() {
	
	//Variable Declaration
	int n;
	printf("Enter number of elements in the array\n");
	scanf("%d",&n);
	int a[n+1];
	int i,k;

	
	//Array Input
	printf("Enter %d elements in the given array\n",n);
	for(i = 0 ; i < n ; i ++)
        	scanf("%d",&a[i]);
        
    for(i = 0 ; i < n ; i ++)
        printf("%d ",a[i]);

    printf("\n");
        
    //Element position and element Input
    int x;
    printf("Enter the element to be added to the beginning of the array\n");
    scanf("%d",&x);
    
    for(i = n-1; i >= 0 ; i--)
        a[i + 1] = a[i];
        
    a[0] = x;
    
	
	for(i = 0 ; i <= n ; i ++)
        printf("%d ",a[i]);

	return 0;
}
