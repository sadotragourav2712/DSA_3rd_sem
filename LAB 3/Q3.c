#include <stdio.h>
struct distance
{
    int Km;
    float m;
};
int main()
{
    struct distance d1, d2, sum;
    printf("enter the first Distance: \n");
    printf("Enter  the Kilometer's: ");
    scanf("%d", &d1.Km);
    printf("Enter meter's: ");
    scanf("%f", &d1.m);
    printf("\n\n");
    printf("Enter Second Distance: \n");
    printf("Enter  the Kilometer: ");
    scanf("%d", &d2.Km);
    printf("Enter  the meters: ");
    scanf("%f", &d2.m);

    sum.Km = d1.Km + d2.Km;
    sum.m = d1.m + d2.m;

    if (sum.m >= 1000)
    {
        sum.m = sum.m - 1000;
        ++sum.Km;
    }
    printf("\nSum of distances\nsum of kilometers = %d Km \nsum of meters = %.2f meters", sum.Km, sum.m);
    return 0;
}