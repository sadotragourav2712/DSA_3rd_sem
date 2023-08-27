#include <stdio.h>
int main()
{
    int r, c, a[10][10], count = 0;
    printf("Enter the no fo rows you want to enter : ");
    scanf("%d", &r);
    printf("Enter the no of cloums you want ot enter : ");
    scanf("%d", &c);
    
    printf("Enter the elments of the matrix : ");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("dispalying the matrix you entered: \n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("\t%d", a[i][j]);
        }
        printf("\n");
    }

    // to find the no of zeros in matrix:
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        if(a[i][j]==0)
        count++;

    }
    // to find out if it is sparse or not: 
    if((r*c)/2<count){
        printf("the entered matrix is sparse matrix: ");
    }
    else 
    printf("the enterd matrix is not sparse matrix: ");
    return 0;
}