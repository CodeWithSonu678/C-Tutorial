#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter your first number :\n");
    scanf("%d", &a);
    printf("Enter your second number :\n");
    scanf("%d", &b);
    char choice;
    printf("Choice one option :\n");
    printf("+ , - , * , / \n");
    scanf(" %c", &choice);
    if (choice == '+')
    {
        int c = a + b;
        printf("The sum of %d and %d is %d\n", a, b, c);
    }
    else if (choice == '-')
    {
        int c = a - b;
        printf("The sub of %d and %d is %d\n", a, b, c);
    }
    else if (choice == '*')
    {
        int c = a * b;
        printf("The multiply of %d and %d is %d\n", a, b, c);
    }
    else if (choice == '/')
    {

        if (b != 0)
        {
            float c = (float)a / b;
            printf("The divided of %d and %d is %2f\n", a, b, c);
        }
        else
        {
            printf("Error Division is not posible!");
        }
    }
    else
    {

        printf("Please choice a correct option\n");
    }

    return 0;
}
