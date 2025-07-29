#include <stdio.h>

int main()
{
    int income;
    float tax;
    printf("Enter your income :");
    scanf("%d", &income);
    if (income < 250000)
    {
        tax = 0;
        printf(" Tax On ths amount is :Rs %2f", tax);
    }
    else if (income > 250000 && income <= 500000)
    {
        tax = 0.05 * (income - 250000);
        printf(" Tax On ths amount is :Rs %2f", tax);
    }
    else if (income > 500000 && income <= 1000000)
    {
        tax = 0.05 * (500000 - 250000) + 0.2 * (income - 500000);
        printf(" Tax On ths amount is :Rs %2f", tax);
    }
    else if (income > 1000000 && income <= 2000000)
    {

        tax = 0.05 * (500000 - 250000) + 0.2 * (1000000 - 500000) + 0.3 * (income - 1000000);
        printf(" Tax On ths amount is :Rs %2f", tax);
    }
    else
    {
        printf("this condition is not true!");
    }

    return 0;
}