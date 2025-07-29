#include <stdio.h>
#include <string.h>

int main()
{
    char st[30];
    printf("Enter the strings :");
    fgets(st, sizeof(st), stdin);
    printf("Entered the strings is %s", st);

    return 0;
}

