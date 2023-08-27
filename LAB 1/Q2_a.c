
#include <stdio.h>
#include <math.h>

struct coor
{
    int x, y;
};

int main()
{
    float d;
    struct coor a, b;
    printf("Enter coordinate of point x1: ");
    scanf("%d", &a.x);
    printf("Enter coordinate of point y1: ");
    scanf("%d", &a.y);
    printf("Enter coordinate of point x2: ");
    scanf("%d", &b.x);
    printf("Enter coordinate of point y2: ");
    scanf("%d", &b.y);
    d = sqrt((a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y));
    printf("\n\nDistance between  two points a and b is : %.2f\n", d);
    return 0;
}
