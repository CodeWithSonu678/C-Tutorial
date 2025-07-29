#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define Red "\033[0;31m"
#define Green "\033[0;32m"
#define Yellow "\033[0;33m"
#define Bold "\033[1m"
#define Reset "\033[0"

void Printbar(int temp)
{
    if (temp <= 35)
    {
        printf(Green);
    }
    else if (temp <= 50)
    {
        printf(Yellow);
    }
    else
    {
        printf(Red);
    }

    for(int i = 0 ; i < temp ; i += 2)
    {
        printf("|");
    }

    printf(Reset);

}

int main()
{
    int sec,i,temp;
    srand(time(NULL));


    return 0 ;
}