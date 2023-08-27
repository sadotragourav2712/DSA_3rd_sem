#include <stdio.h>
#include <stdlib.h>
int size=0;
void swap(int*a,int *b){
    int temp=*a; 
    *a=*b;
    *b=temp;   
}
void heapify(int arr[], int size, int i)
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
    if(largest!=i){
        int p=arr[i];
        arr[i]=arr[largest];
        arr[largest]=p;
        heapify(arr,size,i);
    }
}

void heapsort(int arr[],int n){
    for(int i=n/2; i>=1; i--){
    heapify(arr,n,i);
    }
    for(int i=n; i>=1; i--){
        swap(&arr[1],&arr[i]);
        heapify(arr,n,1);
    }

}
void print(int arr[], int n){
    for(int i=0; i<n; i++){
        printf("%d ",arr[i]);
        printf("\n");
    }
}
int main(){
    
   // int arr[]={10,2,5,3,56,20,589};
    int arr[10];
    heapsort(arr,15);
    heapsort(arr,20);
    heapsort(arr,7);
    heapsort(arr,9);
    heapsort(arr,30);
    // max_insert(arr,32);
    // max_insert(arr,4);
    // max_insert(arr,110);
    printf("max heap:\n");
    print(arr,size);
    return 0;    

    
}