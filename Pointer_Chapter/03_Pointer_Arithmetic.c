#include <stdio.h>

int main()
{
    int a = 45;
    int *p = &a;
    printf("pointer p = %u\n", p);
    p += 1;
    printf("pointer p+1 =%u\n", *p);

    return 0;
}
//yahan p ke address ko pahle use kiya uske baad p+= 1 se uske aagle addrss ko print kiya gya hai