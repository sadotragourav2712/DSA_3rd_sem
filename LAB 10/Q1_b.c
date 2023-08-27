#include <stdio.h>
#include <stdlib.h>
int size = 0;
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void heapify(int arr[], int size, int i)
{
    int smallest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;
    if (left < size && arr[left] < arr[smallest])
    {
        smallest = left;
    }
    if (right < size && arr[right] < arr[smallest])
    {
        smallest = right;
    }
    if (smallest != i)
    {
        swap(&arr[i], &arr[smallest]);
        heapify(arr, size, smallest);
    }
}
void max_insert(int arr[], int data)
{
    if (size == 0)
    {
        arr[0] = data;
        size++;
    }
    else
    {
        arr[size] = data;
        size++;
        for (int i = 0; i < (size - 2) / 1; i++)
        {
            heapify(arr, size, i);
        }
    }
}
void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
        printf("\n");
    }
}
int main()
{
    int arr[100];
    max_insert(arr, 12);
    max_insert(arr, 2);
    max_insert(arr, 22);
    max_insert(arr, 62);
    max_insert(arr, 22);
    max_insert(arr, 32);
    max_insert(arr, 4);
    max_insert(arr, 110);
    printf("min heap:\n");
    print(arr, size);
    return 0;
}
