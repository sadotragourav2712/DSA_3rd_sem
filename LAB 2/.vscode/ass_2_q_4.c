#include <stdio.h>
int main() 
{
    int n;
    printf("how many element you want to add: ");
    scanf("%d",&n);
    int data[n];

    printf("Enter elements: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&data[i]);
    }
    int search1,search2;
    printf("Enter 1st element: ");
    scanf("%d",&search1);
    printf("Enter 2nd element: ");
    scanf("%d",&search2);
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(data[i]>=search1 && data[i]<=search2)
        {
           printf("%d,",data[i]);
           count++;
        }
        
    }
    printf("\nFound no of element :%d",count);
    return 0;
}