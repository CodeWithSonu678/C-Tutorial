#include <stdio.h>
#include <string.h>

int main()
{
    char storedUserName[] = "Archu";
    char storedPasswrd[] = "a@12345";

    char InputUserName[20];
    char InputPassword[20];

    printf("Enter the username : ");
    scanf("%s", InputUserName);
    printf("Enter the password : ");
    scanf("%s", InputPassword);

    if (strcmp(storedUserName, InputUserName) == 0 && strcmp(storedPasswrd, InputPassword) == 0)
    {
        printf("Login Successfull !\n ");
    }
    else
    {
        printf("Invalid username and password !\n");
    }

    return 0;
}