#include <stdio.h>

int main()
{
    int marks1, marks2, marks3;
    printf("Enter The Marks1 :");
    scanf("%d", &marks1);
    printf("Enter The Marks2 :");
    scanf("%d", &marks2);
    printf("Enter The Marks3 :");
    scanf("%d", &marks3);

    if (marks1 < 33 || marks2 < 33 || marks3 < 33)
    {
        printf("You Are fail due to less marks indivisiual subjects.\n");
    }
    else if ((marks1 + marks2 + marks3) / 3 < 40)
    {
        printf("You are fail due to less percentage\n");
    }
    else
    {
        printf("You are pass.\n");
    }

    return 0;
}