#include <stdio.h>
#include <string.h>

struct student
{

    int roll;
    char name[30];
    float marks;
};

int main()
{
    struct student st[3];

    for (int i = 0; i < 3; i++)
    {
        printf("Enter the roll , name and marks of student %d :\n ", i + 1);
        scanf("%d %s %f", &st[i].roll, st[i].name, &st[i].marks);
        getchar();
    }

    printf("\n");
    printf("\n");
    
    printf("----Student Details----");
    printf("\n");
    printf("\n");

    for (int i = 0; i < 3; i++)
    {
        printf("the roll , name  and marks of student %d : %d %s %.2f \n", i + 1, st[i].roll, st[i].name, st[i].marks);
    }

    return 0;
}