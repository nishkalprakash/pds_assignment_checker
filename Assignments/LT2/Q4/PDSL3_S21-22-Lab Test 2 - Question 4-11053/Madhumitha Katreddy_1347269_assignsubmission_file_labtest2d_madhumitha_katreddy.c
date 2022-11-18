#include <stdio.h>
#include <stdlib.h>
#define size sizeof(INT_MAX);
struct student
{
    char name[100];
    char gender[5];
    float marks;
};//declaring structure
void bestgirl(struct student *class, int n)//function to find the bestgirl
{
    float max = INT_MIN;
    int a = 0;
    for (int i = 0; i < n; i++)
    {
        if ((max < class[i].marks) && class[i].gender == "girl")
        {
            max = class[i].marks;
            a = i;
        }
    }
    printf("\nBest girl student:%s", class[a].name);//printing best girl details
}
int main()
{
    struct student class[100];
    int n;
    printf("Enter the number of students: ");//inputing the number of students
    scanf("%d", &n);
    printf("Enter the student details:\n");
    for (int i = 0; i < n; i++)//inputing student details
    {
        printf("Enter name of the student %d: ", i + 1);
        scanf(" %[^\n]s", class[i].name);
        printf("Enter gender of the student %d: ", i + 1);
        scanf(" %[^\n]s", &class[i].gender);
        printf("Enter marks of the student %d ", i + 1);
        scanf("%f", &class[i].marks);
    }
    printf("\nPrinting the student records..\n");
    for (int i = 0; i < n; i++)//printing student details
    {
        printf("%s %s- %.2f\n", class[i].name, class[i].gender, class[i].marks);
    }
    bestgirl(class, n);
    return 0;
}
