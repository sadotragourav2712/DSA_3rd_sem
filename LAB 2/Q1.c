#include <stdio.h>
#include <stdlib.h>
int dis(int arr[], int n, int x, int y);
void main()
{

    int arr[] = {3, 5, 4, 2, 6, 5, 6, 6, 5, 4, 8, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 3, y = 6;
    int m = dis(arr, n, x, y);

    printf("Minimum distance between %d and %d is %d", x, y, m);
}

int dis(int arr[], int n, int x, int y)
{
    int td, j, m;

    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] == x)
        {
            for (j = i + 1; j < n; j++)
            {
                if (arr[j] == x)
                {
                    i = j;
                }
                else if (arr[j] == y)
                {
                    if (j - i < m)
                    {
                        m = j - i;
                    }
                }
            }
        }
    }

    return m;
}
