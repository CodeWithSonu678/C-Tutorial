#include <stdio.h>

int main()
{
    int a;
    printf("Enetr your number :");
    scanf("%d", &a);
    if (a%2 == 0)
    {
        printf("The number of %d is even number.\n", a);
    }
    else
    {
        printf("The number of %d is odd number.\n", a);
    }
    return 0;
}