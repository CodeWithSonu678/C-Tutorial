#include <stdio.h>

int main()
{
    int a;
    
    printf("Enter the vale of a is :");
    scanf(" %d", &a);
    int *p = &a;
    int *p1 = &p;
   
    printf("The value of a is :%d\n", a);
    printf("The address of a is :%u\n", p);
    printf("The address value is :%d\n", *p);
    printf("The address value is :%u\n", p1);
    
    
    return 0;
}
