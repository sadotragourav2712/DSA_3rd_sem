#include <stdio.h>
void disp1(int n,int (*arr)[n])
{
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(*(*(arr+i)+j)!=0)
            {
                printf("%d",*(*(arr+i)+j));
            }
            

        }
    }

}
void disp2(int n,int (*arr)[n])
{
    int total=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==j)
            {
                total=total+*(*(arr+i)+j);
            }
            

        }
    }
    /*for(int i=0;i<n;i++)
    {
        total=total+*(*(arr+i)+i);
    }*/
    printf("\nLeading digonal Total : %d\n",total);

}
void disp3(int n,int (*arr)[n])
{
    int total=0;
     for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if((i+j)==((n+1)-2))
            {
                total=total+*(*(arr+i)+j);
            }
            

        }
    }
    /*for(int i=0,j=n-1;j>=0,i<n;j--,i++)
    {
        total=total+*(*(arr+i)+j);
    }*/
    printf("Minor digonal Total : %d\n",total);

}

void disp4(int n,int (*arr)[n])
{
    int total=1;
     for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==j)
            {
                total=total*(*(*(arr+i)+j));
            }
            

        }
    }
    printf("Leading digonal product : %d\n",total);

}
void disp5(int n,int (*arr)[n])
{
    int total=1;
     for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if((i+j)==((n+1)-2))
            {
                total=total*(*(*(arr+i)+j));
            }
            

        }
    }

    printf("Minor digonal product : %d\n",total);

}
int main()
{
    int n;
    printf("Enter the value of n for nXn matrix : ");
    scanf("%d",&n);
    int arr[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
        
    }
    disp1(n,arr);
    disp2(n,arr);
    disp3(n,arr);
    disp4(n,arr);
    disp5(n,arr);
    return 0;
}