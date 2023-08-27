#include <stdio.h>

int main()
{
    int m,n;
    n=3;
    printf("Enter matrics n X 3 :\n");
    scanf("%d",&m);
    int mat[m][n];
    int mat1[m][n];
    
    


    printf("Enter matrics eliments:\n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }
    
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            
           if (j==0)
           {
            mat1[i][j]=mat[i][1];
           }
            else if (j==1)
           {
            mat1[i][j]=mat[i][0];
           }
           else
           {
               mat1[i][j]=mat[i][j];
           }
           
        }
         
    }
    
    int i1,i2,i3;
    for(int i=1;i<m;i++)
    {
        for(int j=i+1;j<m;j++)
        {
         if(mat1[i][0]>mat1[j][0])
         {
             i1=mat1[i][0];
             i2=mat1[i][1];
             i3=mat1[i][2];
             mat1[i][0]=mat1[j][0];
             mat1[i][1]=mat1[j][1];
             mat1[i][2]=mat1[j][2];
             mat1[j][0]=i1;
             mat1[j][1]=i2;
             mat1[j][2]=i3;
         }
        }
    }
    

     
    
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
           printf("\t%d",mat1[i][j]);
          
        }
         printf("\n");
    }
    
    return 0;
}