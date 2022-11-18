#include<stdio.h>

#define MAX 1000

//declaring the structure named 'Student'
//that contains the components:
//name(string)
//gender(string-boy or girl)
//marks(floating point number)

struct Student
{
    char name[20];
    char gender[5];
    float marks;
};


//Creating a 1D array of structure
struct Student record[MAX];

//Function for printing the student records..
void print(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%s %s %.2f\n", record[i].name, record[i].gender, record[i].marks);
    }
}

//Function to find the best girl student in the class
void best_girl_student(int n)
{
    float _marks = -1.0;
    int student_to_get;
    for (int i = 0; i < n; i++)
    {
        if(record[i].gender[0] == 'g')
        {
            if(record[i].marks > _marks)
            {
                _marks = record[i].marks;
                student_to_get = i;
            }
        }
    }
//Printing the name of best girl student in the class
    printf("\nBest girl Student: %s", record[student_to_get].name);
}
int main()
{
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);

    printf("Enter the student details...\n");
    for (int i = 0; i < n; i++)
    {
        // fflush(stdin);
        printf("Enter name: ");
        scanf("%s", &record[i].name);
        scanf("%s", &record[i].name);
        scanf("%s", &record[i].gender);
        scanf("%f", &record[i].marks);

        // gets(record[i].name);
        // printf("Enter gender: ");
        // gets(record[i].gender);
        // printf("Enter marks: ");
        // scanf("%f", &record[i].marks);
    }

    printf("\n\nPrinting the student records...\n\n");
    print(n);

    best_girl_student(n);

    return 0;
}
