#include <stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    printf("Enter the length of the array:");
    scanf("%d", &n);

    int *ptr;
    ptr = (int*)malloc(n * sizeof(int));
    printf("Enter %d number: \n", n);
    for(int i=0; i<n; i++){
        scanf("%d",ptr + i);
    }
    printf("\nArray in Reverse are : ");
    for(int i = n-1; i>=0; i--){
        printf("\n%d",(*ptr+i));
    }
    return 0;
}