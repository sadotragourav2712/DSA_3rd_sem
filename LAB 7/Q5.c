#include <stdio.h>
void insertion_sort(int *arr, int n)
{
    int temp;
    int i, j;
    for (i = 1; i <= n; i++)
    {
        temp = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] < temp)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
    }
}
int main()
{
    int n;
    int arr[100];
    printf("Enter the Size :\n");
    scanf("%d", &n);
    printf("Enter the data:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    insertion_sort(arr, n);
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    // printf("\n");
    // for(int i=n; i>0; i--){
    //     printf("%d ", arr[i]);
    // }
    return 0;
}