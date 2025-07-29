#include <stdio.h>

int main()
{
    int choice;
    float balance = 10000.00, amount;

    while (2)
    {
        printf("\n===========\n");
        printf("\n ATM MENU \n");
        printf("\n===========\n");
        printf("1. Check Balance\n");
        printf("2. Cash Withrawn\n");
        printf("3. Cash Deposit\n");
        printf("4. Exist\n");
        printf("Enter yor choice\n");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Your curent balance is %2f\n", balance);
            break;
        case 2:
            printf("Enter your withdrawn amount :\n");
            scanf("%f", &amount);
            if (amount < balance)
            {
                balance -= amount;
                printf("Rs %2f is successfully withdrawn\n,", amount);
            }
            else
            {
                printf("Insuficient balance !\n");
            }
            break;

        case 3:
            printf("Enter your deposit amount :\n");
            scanf("%f", &amount);
            balance += amount;
            printf("Rs %2f is successfully deposit\n", amount);
            break;

        case 4:
            printf("Thanks for using this ATM");
            break;
        default:
            printf("Enter a valid choice !");
            break;
        }
    }

    return 0;
}