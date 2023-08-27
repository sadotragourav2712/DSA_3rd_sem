#include <stdio.h>
#include <math.h>
int main()
{
    int x, y;
    int x1, x2, x3, y1, y2, y3;
    float area;
    printf("Enter the coordinates of first sides: ");
    scanf("%d %d", &x1, &y1);
    printf("Enter the coordinates of 2nd side: ");
    scanf("%d %d", &x2, &y2);
    printf("Enter the coordinates of 3rd side: ");
    scanf("%d %d", &x3, &y3);

    area = (x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2));
    area = fabsf(area);
    area = area * 1 / 2;

    printf("The area of the Triangle is %f sq. units", area);
    return 0;
}