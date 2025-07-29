#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Who many number you want :");
    scanf("%d", &n);

    int *m = (int *)malloc(n * sizeof(int));
    int *ca = (int *)calloc(n, sizeof(int));

    if (m == NULL || ca == NULL)
    {
        printf("Memory allocation is failed !");
        return 1;
    }

    printf("\n malloc mein value pass karna \n");
    scanf("");

    return 0;
}
