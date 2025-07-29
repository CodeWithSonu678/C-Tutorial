#include <stdio.h>

struct data
{
    int date, month, year;
};

struct student
{
    char name[20];
    struct data dob; // dob ek variable member h jiska data type struct data hai. esse nested structure bhi kahte hai
};

int main()
{
    struct student s;

    printf("Enter The name :");
    //scanf("%s", &s.name);
    // getchar();

    fgets(s.name,sizeof(s),stdin);

    printf("Enter the date of birth :");
    scanf("%d %d %d", &s.dob.date, &s.dob.month, &s.dob.year);

    printf("\n---Student Details---\n");
    printf("\n");

    printf("Student's Name : %s\n", s.name);
    printf("Student's DOB : %d / %d / %d\n", s.dob.date, s.dob.month, s.dob.year);

    return 0;
}
