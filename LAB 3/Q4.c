#include <stdio.h>
void percent(int i, float n);
int main()
{
    float n, new[50];
    printf("enter the number : ");
    scanf("%f", &n);
    percent(1, n);

    return 0;
}

void percent(int i, float n)
{
    if (i > 50)
    {
        return;
    }
    else
    {
        printf("%d  = %f \n", i, (n * i) / 100);
    }
    percent(i = i + 1, n);
}
