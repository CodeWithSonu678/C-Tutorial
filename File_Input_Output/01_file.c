#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("sonu.txt","r");
    if (ptr == NULL)
    {
        printf("The file is not exist !");
    }
    int num;
    fscanf(ptr, "%d", &num);
    printf("the value of num is %d \n", num);
    fscanf(ptr, "%d", &num);
    printf("the value of num is %d \n", num);

    fclose(ptr);
    return 0;
}
