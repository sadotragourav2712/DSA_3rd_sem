#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i, n, j, k, temp, c = 0;
    printf("Enter size of the  array : ");
    scanf("%d", &n);
    int *arr = calloc(n, sizeof(int));
    int b[n];
    printf("Enter elements in array : ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", arr + i);
        if (*(arr + i) % 2 == 1)
            c++;
    }
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if ((arr + j) > (arr + j + 1))
            {
                temp = *(arr + j);
                *(arr + j) = (arr + j + 1);
                *(arr + j + 1) = temp;
            }
        }
    }
    k = 0;
    j = n - c;
    for (i = 0; i < n; i++)
    {
        if (*(arr + i) % 2 == 0)
        {
            if (k < n - c)
                b[k++] = *(arr + i);
        }
        else
        {
            if (j < n)
                b[j++] = *(arr + i);
        }
    }
    printf("\narray after sorting even and odd elements separately:\n ");
    for (i = 0; i < n; i++)
    {
        *(arr + i) = b[i];
        printf("%d ", *(arr + i));
    }
}