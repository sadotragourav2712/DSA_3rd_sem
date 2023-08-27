#include <stdio.h>
int main()
{
    int num, i, a[10], n, min, max, sum = 0;
    float avg;
    printf("enter the n numbers:");
    scanf("%d", &n);
    printf("\nEnter the numbers one by one:\n  ");
    for (i = 0; i < n; i++)
    {

        scanf("%d", &a[i]);
        sum = sum + a[i];
    }
    min = max = a[0];
    for (i = 1; i < n; i++)
    {
        if (min > a[i])
            min = a[i];
        if (max < a[i])
            max = a[i];
    }

    printf("min no is : %d\n", min);
    printf("max no is : %d\n", max);

    avg = sum / n;

    printf("sum of %d no is = %d\n", n, sum);
    printf("avg of %d no is = %f\n", n, avg);

    return 0;
}