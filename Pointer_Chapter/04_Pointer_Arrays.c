#include <stdio.h>

int main()
{
    int arr[] = {34, 23, 12};
    int *p = arr;
    for (int i = 0; i < 3; i++)
    {
       
        printf("arr[%d] = %d\n", i, *(p + i));
        
    }

    return 0;
}
//result = to print arr by pointer.