#include <stdio.h>
#include <math.h>

typedef struct Distance
{
    float x;
    float y;
} point;

int main()
{
    point p1, p2;

    printf("Enetr coordinate point 1 (x,y) :\n");
    scanf("%f %f ", &p1.x, &p1.y);
    

    printf("Enetr coordinate point 2 (x,y) :\n");
    scanf("%f %f", &p2.x, &p2.y);

    float distance = sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));

    printf("dx:%.2f,dy:%.2f\n", p2.x - p1.x, p2.y - p1.y);

    printf("The distance value of two points : %.2f\n", distance);

    return 0;
}