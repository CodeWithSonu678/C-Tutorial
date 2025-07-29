#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("sonu1.txt", "r");
    int num;

    if (ptr == NULL)
    {
        printf("The file is not exist !");
    }
    else
    {
        fscanf(ptr, "%d", &num);
        printf("the value of num is %d \n", num);
        fscanf(ptr, "%d", &num);
        printf("the value of num is %d \n", num);
    }
    fclose(ptr);

        return 0;
}