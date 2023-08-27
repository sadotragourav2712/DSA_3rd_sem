#include <stdio.h>
#include<stdlib.h>
void disp1(int n, int (*arr)[n])
{
    printf("\na) The  Non-zero Element are: \n");

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (*(*(arr + i) + j) != 0)
            {

                printf("%d\t", *(*(arr + i) + j));
            }
        }
        printf("\n");
    }
}
void disp2(int n, int (*arr)[n])
{
    int total = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j > i)
            {
                total = total + *(*(arr + i) + j);
            }
        }
    }

    printf("\nb)Sum of Elements above Leading Diagonal : %d\n", total);
}
void disp3(int n, int (*arr)[n])
{
    printf("c)The element below the minor diagnol are: ");
    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j < n; j++)
        {
            if (i + j > n - 1)
                printf("%d\t", *(*(arr + i) + j));
        }
        printf("\n");
    }
}

void disp4(int n, int (*arr)[n])
{
    int total = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                total = total * (*(*(arr + i) + j));
            }
        }
    }
    printf("d)Product of Leading digonal  : %d\n", total);
}
void disp5(int n, int (*arr)[n])
{
    int total = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if ((i + j) == ((n + 1) - 2))
            {
                total = total * (*(*(arr + i) + j));
            }
        }
    }

    printf("Product of Minor digonal  : %d\n", total);
}
int main()
{
    int n;
    printf("Enter the value of n for matrix (nXn) : ");
    scanf("%d", &n);
    int arr[n][n];
    printf("Enter the elements : ");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    disp1(n, arr);
    disp2(n, arr);
    disp3(n, arr);
    disp4(n, arr);
    disp5(n, arr);
    return 0;
}