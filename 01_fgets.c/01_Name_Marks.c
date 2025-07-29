#include <stdio.h>
#include <string.h>

struct student
{
    int roll;
    char name[20];
    float marks;
};

int main()
{
    struct student s;
    // s.roll = 34;

    printf("Enter your roll number :");
    scanf("%d", &s.roll);
    getchar(); // enter key press karne par newline consume karne ke liye
    printf("Enter your name :");
    // scanf("%s", &s.name);
    fgets(s.name, sizeof(s), stdin);

    // strcpy(s.name, "Sonu Yadav");

    printf("Enter the marks :");
    scanf("%f", &s.marks);
    // s.marks = 87.16;
    printf("The roll number is %d , name is  %s and marks is %.2f", s.roll, s.name, s.marks);

    return 0;
}
