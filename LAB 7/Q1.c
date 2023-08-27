#include<stdio.h>
int search(int arr[],int n,int x){
    int fool =0;
    for(int i=0; i<n; i++){
        if(arr[i]==x){
            fool =1;
        }
        
    }
    return fool;
}

int main(){
    int n,x;
    int arr[100];
    printf("Enter the no of elements you want to insert:\n");
    scanf("%d", &n);
    printf("Enter the number:\n");
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    printf("Enter the data you want to search :\n");
    scanf("%d", &x);
    int data;
    data=search(arr,n,x);
    if(data==1){
        printf("THe data is found:\n");

    }
    else{
        printf("the data is not found:\n");
    }
    
    return 0;
}