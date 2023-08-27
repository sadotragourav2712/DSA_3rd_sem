#include<stdio.h>
#include<stdlib.h>

void swap(double *arr,int i,int j )
{
    double p = arr[i];
    arr[i] = arr[j];
    arr[j] = p;
}

int partition(double *arr ,int s,int e)
{
    double pivot = arr[s];
    int count = 0;
    for(int i = s+1;i<=e;i++)
    {
        if(arr[i]>=pivot)
            count++;
    }
    int pivot_index = s + count;
    swap(arr,s,pivot_index);
    int i = s,j = e;
    while(i < pivot_index && j> pivot_index)
    {
        while(arr[i] >= pivot)
        {
            i++;
        }
        while(arr[j] < pivot)
        {
            j--;
        }
        if(i < pivot_index && j > pivot_index)
            {
                swap(arr,i,j);
                i++;
                j--;
            }
    }
    return pivot_index;
}

void quick_Sort(double *arr, int s, int e) {

    if(s >= e) 
        return ;
    int p = partition(arr, s, e);
    quick_Sort(arr, s, p-1);
    quick_Sort(arr, p+1, e);
}

int main()
{
    int n;
    printf("Enter the length of an array:- ");
    scanf("%d",&n);
    double *arr = malloc(n*(sizeof(double)));
    printf("Enter the elmnents in array:- ");
    for(int i=0;i<n;i++)
    {
        scanf("%lf",&arr[i]);
    }
    quick_Sort(arr,0,n-1);
    for(int i=0;i<n;i++)
    {
        printf("%lf ",arr[i]);
    }
    return 0;

}