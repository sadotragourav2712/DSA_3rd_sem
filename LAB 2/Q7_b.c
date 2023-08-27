#include <stdio.h>
#include <math.h>
struct coor
{
    int x, y;
    int x1, x2, x3, y1, y2, y3;
    
}; 
int main()
{
    
    float area;
    struct coor x,y;
    printf("Enter the coordinates of first sides: ");
    scanf("%d %d", &x.x1, &y.y1);
    printf("Enter the coordinates of 2nd side: ");
    scanf("%d %d", &x.x2, &y.y2);
    printf("Enter the coordinates of 3rd side: ");
    scanf("%d %d", &x.x3, &y.y3);

    area = (x.x1 * (y.y2 - y.y3) + x.x2 * (y.y3 - y.y1) + x.x3 * (y.y1 - y.y2));
    area = fabsf(area);
    area = area * 1 / 2;

    printf("The area of the Triangle is %f sq. units", area);
    return 0;
}