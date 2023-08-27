#include <stdio.h>
int main()
{
    int n;
    printf("Howmany element you want to enter: ");
    scanf("%d",&n);
    int arr[n];
    printf("\nEnter the element :");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int NGE[n];
  
    for(int i=0;i<n;i++)
    {
        int flag=0;
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]<arr[j])
            {
                NGE[i]=arr[j];
                flag=1;
                break;

            }
            
        }
        if(flag==0)
        {
            NGE[i]=-1;
        }
    }
    
    for(int i=0;i<n;i++)
    {
        printf("%d",NGE[i]);
    }
    return 0;
}