#include <stdio.h>

int main()
{
    float c ;
    printf("Enter The Value in Celcious\n");
    scanf("%f", &c);
    float f = (9.0/5.0)*c +32 ;
    printf("The Value In Fare.. : %f", f);
    return 0;
}