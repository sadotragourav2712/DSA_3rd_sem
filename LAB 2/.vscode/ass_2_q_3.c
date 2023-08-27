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
    int search;
    printf("Enter element for search: ");
    scanf("%d",&search);
    int flag=0;
    int display[n];
    for(int i=0;i<n;i++)
    {
        if(data[i]==search)
        {
            
            flag=1;
            display[i]=i;
            
        }
        else
        {
            display[i]=-1;
        }
    }
    if(flag==1)
    {
        for(int i=0;i<n;i++)
        {
            if(display[i]>=0)
            {
            printf(":%d\n",search);
            printf("Found the element at %d position\n",display[i]);
            }
        }
    }
    else
    {
        printf("Element not found!!!");
    }
    return 0;
}