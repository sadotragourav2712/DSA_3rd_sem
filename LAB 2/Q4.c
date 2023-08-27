#include <stdio.h>
#include<stdlib.h>
int dis(int arr[],int n, int x, int y);

int main()
{
   
    int a, b, c = 0, d = 2, n, i;
    int arr[100];
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    

    printf("Enter Element:");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("enter the lower and upper limit: ");
    scanf("%d %d", &a, &b);
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == a || arr[i] == b)
        {
            c++;
            d = 0;
        }
        if (arr[i] > a && arr[i] < b)
        {
            c++;
        }
    }
    printf("Number of elements bw  are:  : %d", c + d);
    return 0;
}