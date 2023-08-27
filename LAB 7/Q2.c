#include<stdio.h>
int search(int a[], int l, int r, int x){
    while(l<=r){
        int m=l+(r-l)/2;
        if(a[m]==x){
            return m;
        }
        else if(a[m]<x){
            l=m+1;
        }
        else{
            return m-1;
        }
        return -1;
    }

}
int  main(){
    int n;
    int arr[100];
    printf("Enter the Size :\n");
    scanf("%d", &n);
    printf("Enter the data:\n");
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    int x;
    printf("Enter the dta to be found:\n");
    scanf("%d", &x);
    int result = search(arr,0,n-1,x);
    if(result==-1){
        printf("element is not found:\n");
    }
    else {
        printf("the element is found:\n");
    }
    return 0;
}