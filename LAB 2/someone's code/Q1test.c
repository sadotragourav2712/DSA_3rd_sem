#include<stdio.h>
void nonzero(int n,int a[n][n])
{
    int count=0;
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i][j]!=0)
            {
                count++;
            }
        }
    }
    printf("a)No. of non-zero element in square matrix is %d.\n",count);
}
void sum(int n,int a[n][n])
{
    int s=0;
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            s+= a[i][j];
        }
    }
    printf("b)Sum of the elements above the leading diagonal is %d.\n",s);
}
void minor_elements(int n,int a[n][n])
{
    printf("c)Elements below the minor diagonal are \n");
    int i,j;
    for(i=1;i<n;i++)
    {
        for(j=1;j<n;j++)
        {
            if(i+j>n-1)
            printf("%d\t",a[i][j]);
        }
       printf("\n");
         }
}
void product(int n,int a[n][n])
{
    int i,j,p=1;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j)
            {
                p=p*a[i][j];
            }
        }
    }
    printf("d)Product of all the diagonal element is %d.\n",p);
}
int main()
{
  int n;
  printf("enter the order of square matrix.\n");
  scanf("%d",&n);
   int a[n][n];
    int i,j;
    printf("enter values in array: \n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
nonzero(n,a);
sum(n,a);
minor_elements(n,a);
product(n,a);
    return 0;
}