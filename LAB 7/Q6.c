#include <stdio.h>
void merge(int *arr, int lb, int mid, int ub)
{
    int i = lb;
    int j = mid + 1;
    int k = lb;
    int b[100];
    while (i <= mid && j <= ub)
    {
        if (arr[i] <= arr[j])
        {
            b[k] = arr[i];
            i++;
        }
        else
        {
            b[k] = arr[j];
            j++;
        }
        k++;
    }

    if (i > mid)
    {
        while (j <= ub)
        {
            b[k] = arr[j];
            j++;
            k++;
        }
    }
    else
    {
        while (i <= mid)
        {
            b[k] = arr[i];
            i++;
            k++;
        }
    }
    for (k = lb; k <= ub; k++)
    {
        arr[k] = b[k];
    }
}
void merge_sort(int *arr, int lb, int ub)
{
    if (lb < ub)
    {
        int mid;
        mid = (lb + ub) / 2;
        merge_sort(arr, lb, mid);
        merge_sort(arr, mid + 1, ub);

        merge(arr, lb, mid, ub);
    }
}
int main()
{
    int n;
    int arr[100];
    printf("Enter the size:\n");
    scanf("%d", &n);
    printf("Enter the Data:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    merge_sort(arr, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}