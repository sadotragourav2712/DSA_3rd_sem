// #include <stdio.h>

// int main()
// {
//     int r, c, i, j, l, u, a[10][10];
//     printf("enter the number of rows you want ot enter: ");
//     scanf("%d", &r);
//     printf("enter the number of columns: ");
//     scanf("%d", &c);

//     printf("Enter the elements of the matrix: ");

//     for (i = 0; i < r; i++)
//     {
//         for (j = 0; j < c; j++)
//             scanf("%d", &a[i][j]);
//     }

//     printf("dispalying the matrix you entered: \n");
//     for (int i = 0; i < r; i++)
//     {
//         for (int j = 0; j < c; j++)
//         {
//             printf("\t%d", a[i][j]);
//         }
//         printf("\n");
//     }
    
//     for (int i = 0; i < r; i++)
//     {
//         for (int j = 0; j < c; j++)
//         {
//             if (a[i]<a[j] && a[i][j] != 0)
//             {
//                 printf("upper matrix\n");
//             }
//         }
//     }

    
//     u= 0;
//     for (int i = 0; i < r; i++)
//     {
//         for (int j = 0; j < c; j++)
//         {
//             if (a[i] > a[j] && a[i][j] != 0)
//             {
//                 printf("lower matrix\n");
//             }
//         }
//     }
//     return 0;
// }


#include <stdio.h>

int main()
{
    int n;
    printf("Enter matrics n X n :\n");
    scanf("%d",&n);
    int mat[n][n];
    int upper=0,lower=0,tri=0;
    printf("Enter matrics elements:\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }
    
    for(int i=0;i<n;i++)
    {
   

     for(int j=0;j<n;j++)
        {
            printf("\t%d",mat[i][j]);
        }
         printf("\n");
    }
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(j<i && mat[i][j]==0)
            {
                upper = 1;
            }
            
            
        }
       
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(j>i && mat[i][j]==0)
            {
                lower = 1;
            }
            
        }
       
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(mat[i][i]!=0 && mat[i][i+1]!=0 && mat[i+1][i]!=0)
            {
                tri=1;
            }
           
            
        }
       
    }
    
    //printf("%d,%d,%d",upper,lower,tri);
    if (lower==1 && upper==1)
    {
        printf("Tri Diagonal Matrix\n");
    }
    else if (lower==1 && upper==0)
    {
        printf("Lower Triangular Matrix\n");
    }
    else if (upper==1 && lower==0)
    {
        printf("Upper Triangular Matrix\n");
    }
    else
    {
        printf("Normal Matrix\n");
    }
    
    return 0;
}

