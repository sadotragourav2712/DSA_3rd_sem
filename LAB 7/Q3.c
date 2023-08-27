#include<stdio.h>
#include<stdlib.h>

struct date
{
    int d,m,y;
};
void bubble_sort(struct date* arr,int n)
{
    int * sumdate = malloc(n*sizeof(int));
    for(int i=0;i<n;i++)
    {
        int sum = arr[i].y+((arr[i].m -1)*31)+arr[i].d;
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(sumdate[j] > sumdate[j+1])
            {
                int p = sumdate[j];
                sumdate[j] = sumdate[j+1];
                sumdate[j+1] = p;
                p = arr[j].d;
                arr[j].d = arr[j+1].d;
                arr[j+1].d = p;
                p = arr[j].m;
                arr[j].m = arr[j+1].m;
                arr[j+1].m = p;
                p = arr[j].y;
                arr[j].y = arr[j+1].y;
                arr[j+1].y = p;
            }
        }
    }
}
int main()
{
    int n;
    printf("Enter the No. of dates:- ");
    scanf("%d",&n);
    struct date* arr = malloc(n*sizeof(struct date));
    printf("Enter the dates:- \n");
    for(int i=0;i<n;i++)
    {
        printf("Date %d:- ",i+1);
        scanf("%d",&arr[i].d);
        scanf("%d",&arr[i].m);
        scanf("%d",&arr[i].y);
    }
    bubble_sort(arr,n);
    printf("Sorted dates:- \n");
    for(int i=0;i<n;i++)
    {
        printf("%d - %d - %d\n",arr[i].d,arr[i].m,arr[i].y);
    }
}