#include <stdio.h>

void display(int arr[], int size)
{

    for (int i = 0; i < size; i++)
    {
        printf("the index number %d and at this value is %d and this memory address is %u \n", i, *(arr + i), (&arr + i));
    }
}

int main()
{
    int arr[] = {33,44,22,11 };
    int size = 4;
    display(arr, size);
}