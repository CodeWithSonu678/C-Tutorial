#include <stdio.h>

int main()
{
    int arr[] = {23, 44, 22, 11};
    int *ptr = arr;
    printf("ptr address :%u\n", ptr);
    printf("ptr value :%d\n", *ptr);
    ptr++;
    printf("ptr address :%u\n", ptr);
    printf("ptr value :%d\n", *ptr);

    return 0;
}