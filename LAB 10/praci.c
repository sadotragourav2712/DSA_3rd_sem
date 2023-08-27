#include<stdio.h>
int size=0;
void swap(int*a,int *b){
    int temp=*a; 
    *a=*b;
    *b=temp;   
}
void heapify(int arr[], int size, int i){
    if(size==1){
        printf("single element:\n");
    }
    else{
        int largest=i;
        int left=2*i+1;
        int right=2*i+2;
        if(left<size && arr[left]>arr[largest]){
            largest=left;
        }
        if(right<size && arr[right]>arr[largest]){
            largest=right;
        }
        if(largest!=i){
            swap(&arr[i],&arr[largest]);
            heapify(arr,size,i);
        }
    }
}
void max_insert(int arr[], int data){
    if(size==0){
        arr[0]=data;
        size++;
    }
    else{
        arr[size]=data;
        size++;
        for(int i=(size-2)/1; i>=0; i--){
            heapify(arr,size,i);
        }
    
    }
}
void print(int arr[], int size){
    for(int i=0; i<size; i++){
        printf("%d ",arr[i]);
        printf("\n");
    }
}
int main(){
    int arr[100];
    max_insert(arr,15);
    max_insert(arr,20);
    max_insert(arr,7);
    max_insert(arr,9);
    max_insert(arr,30);
    // max_insert(arr,32);
    // max_insert(arr,4);
    // max_insert(arr,110);
    printf("max heap:\n");
    print(arr,size);
    return 0;
}