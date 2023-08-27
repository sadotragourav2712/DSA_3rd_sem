#include <stdio.h>
int size = 0;
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void heapify(int arr[], int size, int i)
{
    if (size == 1)
    {
        printf("Single element:\n");
    }
    else
    {
        int largest = i;
        int left = 2 * i + 1;
        int right = 2 * i + 2;
        if (left < size && arr[left] > arr[largest])
        {
            largest = left;
        }
        if (right < size && arr[right] > arr[largest])
        {
            largest = right;
        }
        if (largest != i)//if largest is not the root
        {
            swap(&arr[i], &arr[largest]);
            heapify(arr, size, largest);
        }
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
        for (int i = (size / 2) - 1; i >= 0; i--)
        {
            heapify(arr, size, i);
        }
    }
}
void max(int arr[],int data){
    if(size==0){
        arr[0]=data;size++;
    }
    else{
        arr[size]=data;
        size++;
        for(int i=(size/2)-1; i>=0; i--){
            heapify(arr,size, i);
        }
    }
}

void printarray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
        printf("\n");
    }
}

int main()
{
    int arr[1000];
    // printf("Enter the size of the array:\n");
    // int n;
    // scanf("%d", &n);
    // printf("ENter the elements:\n");
    // for(int i=0; i<n; i++){
    //     scanf("%d", &arr[i]);
    //     insert(arr,i);
    // }
    max_insert(arr, 50);
    max_insert(arr, 60);
    max_insert(arr, 45);
    max_insert(arr, 12);
    max_insert(arr, 4);
    max_insert(arr, 6);
    max_insert(arr, 15);
    max_insert(arr, 36);
    printf("max heap:\n");
    printarray(arr, size);
    return 0;
}