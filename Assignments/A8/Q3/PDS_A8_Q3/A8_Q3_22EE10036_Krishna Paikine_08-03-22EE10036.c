#include <stdio.h>
typedef struct student
{
    int n;
    char roll[10];
    float marks[3];
    float total;
} student;
int main()
{
    int i, n;
    printf("Enter the number of students of whose data is to be stored\n");
    scanf("%d", &n);
    student s[n];

    for (i = 0; i < n; ++i)
    {
        printf("Enter the roll number, marks in subject 1, marks in subject 2, marks in subject 3 for student %d\n", i + 1);
        scanf("%s %f %f %f", s[i].roll, &s[i].marks[0], &s[i].marks[1], &s[i].marks[3]);
    }
    printf("Student Records :\n");
    for (i = 0; i < n; ++i)
    {
        printf("Roll no : %s\n", s[i].roll);
        printf("Marks %0.2f %0.2f %0.2f\n", s[i].marks[0], s[i].marks[1], s[i].marks[3]);

    }

    return 0;
}
