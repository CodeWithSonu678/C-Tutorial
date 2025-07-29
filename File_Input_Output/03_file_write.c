#include <stdio.h>

int main()
{
    FILE *ptr;
    // ptr = fopen("sonu.txt", "w"); "w" file mein phle se likhe sabhi data ko erase kar deta hai
    ptr = fopen("sonu.txt", "a");
    // "a" file mein phle se likhe data  ke sath add kar deta hai

    if (ptr == NULL)
    {
        printf("The file is not exist !");
    }

    int num = 678;
    fprintf(ptr, "%d", num);
    fclose(ptr);

    return 0;
}