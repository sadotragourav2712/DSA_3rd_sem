void selection_sort(int *arr, int n){
    int min;
    for(int i=0; i<n-1; i++){
        mid =i;
        for(int j=i+1; j<n; j++){
            if(arr[j]<arr[min]){
                min=j;
            }
        }
        if(min!=i){
            int temp;
            temp=arr[i];
            arr[i]=arr[min];
            arr[min]=temp;
        }
    }
}
void selection(int *arr, int n){
    int min;
    for(int i=0; i<n-1; i++){
        min=i;
        for(int j=i+1; j<n; j++){
            if(arr[j]<arr[min]){
                min=j;
            }
        }
        if(min!=i){
            int temp;
            temp=arr[i];
            arr[i]=arr[min];
            arr[min]=temp;
        }
    }
}

void inertion_sort(int *arr, int n){
    int temp;
    int i,j;
    for(i=1; i<n; i++){
        temp=arr[i];
        j=i-1;
        while(j>=0 && arr[j]>temp){
            arr[j+1]=arr[j]
        }
    }
}