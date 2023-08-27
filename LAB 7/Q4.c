#include<stdio.h>
void selection_sort(float *arr, int n){
    int min;
    for(int i=0; i<n-1; i++){
         min=i;
        for(int j=i+1; j<n; j++){
            if(arr[j]<arr[min]){
                min=j;
            }
        }
        if(min!=i){
            float temp;
            temp=arr[i];
            arr[i]=arr[min];
            arr[min]=temp;
        }
    }
}

int main(){
    int n;
    float arr[100];
    printf("Enter the size :\n");
    scanf("%d", &n);
    printf("Enter the data:\n");
    for(int i =0; i<n; i++){
        scanf("%f", &arr[i]);
    }
    selection_sort(arr,n);
    for(int i=0; i<n; i++){
        printf("%f ",arr[i]);
    }
    return 0;

}