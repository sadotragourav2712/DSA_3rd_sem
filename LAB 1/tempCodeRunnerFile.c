
#include<stdio.h>
#include<math.h>

struct coor
{
    int x,y;
};

int main()
{
    float d;
    struct coor a,b;
    printf("Enter coordinate of point a: ");
    scanf("%d %d", &a.x, &a.y);
    printf("Enter coordinate of point b: ");
    scanf("%d%d", &b.x, &b.y);
    d=sqrt((a.x - b.x)*(a.x - b.x)+(a.y - b.y)*(a.y - b.y));
    printf("Distance between  two points a and b is : %.2f\n",d);
    return 0;
}