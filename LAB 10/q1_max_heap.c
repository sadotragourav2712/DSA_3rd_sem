#include<stdio.h>
#include<stdlib.h>

void swap(int *p,int*q)
{
    int a = *p;
    *p = *q;
    *q = a;
}

void insert(int *arr,int value,int *size)//TC:- O(logn);
{
    *size = *size + 1;
    int index = *size;
    arr[*size] = value;
    while(index > 1)
    {
        int parent = index/2;
        if(arr[parent] < arr[index])
        {
            swap(&arr[index],&arr[parent]);
            index = parent;
        }
        else
            return;
    }
}

void print(int arr[],int size)
{
    for(int i = 1;i<=size;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}
int main()
{
    int arr[100];
    int size = 0;
    int n;
    printf("Enter the no. of inputs:- ");
    scanf("%d",&n);
    printf("Enter the data heap:- ");
    for(int i=0;i<n;i++)
    {
        int input;
        scanf("%d",&input);
        insert(arr,input,&size);
    }
    print(arr,size);
    return 0;
}