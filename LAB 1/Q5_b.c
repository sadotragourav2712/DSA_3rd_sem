#include <stdio.h>

int main()
{
    int a[2][2], i, j, *p;
    printf("enter the value of rows and column\n");
    for (i = 0; i <= 1; i++)
    {
        for (j = 0; j <= 1; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("\n");
    p = &a[0][0];
    for (i = 0; i <= 1; i++)
    {
        for (j = 0; j <= 1; j++)
        {

            printf("%d ", *(p + i * 2 + j)); 
        }
        printf("\n");
    }

    return 0;
}