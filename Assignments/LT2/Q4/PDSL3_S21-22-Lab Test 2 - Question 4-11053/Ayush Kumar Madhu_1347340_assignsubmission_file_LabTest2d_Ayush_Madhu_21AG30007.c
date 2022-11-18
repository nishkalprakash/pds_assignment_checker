// NAME - AYUSH KUMAR MADHU
// ROLL NO. - 21AG30007
// SECTION - 03
// DEPT. - AGRICULTURAL AND FOOD ENGINEERING

#include <stdio.h>

#define MAX 50

// Defining struct
struct student
{
    char first_name[50];
    char last_name[50];
    char gender[4];
    float marks;
};

// Defining struct array
struct student data[MAX];

// Void function to find the best girl student and print it
void best_girl_student(int n)
{
    int m;
    float j;

    // Logic is that if the gender is boy then it will continue and if it's girl then it will store its marks in j and compares with the marks of next girl student and print it

    // This loop will store the marks of girl in j
    for (int i = 0; i < n; i++)
    {
        if (data[i].gender[0] == 'b' && data[i].gender[1] == 'o' && data[i].gender[2] == 'y')
            continue;
        else
        {
            j = data[i].marks;
            break;
        }
    }

    // This loop will compare the marks of the girl if any
    for (int i = 0; i < n; i++)
    {
        if (data[i].gender[0] == 'b' && data[i].gender[1] == 'o' && data[i].gender[2] == 'y')
            continue;

        if (j <= data[i].marks)
        {
            j = data[i].marks;
            m = i;
        }
    }

    printf("\nBest girl student: %s %s ", data[m].first_name, data[m].last_name);
}

// void function to print all the records entered by the user
void print_record(int n)
{
    printf("\nPrinting the student records :\n\n");
    for (int i = 0; i < n; i++)
        printf("%s\t%s\t%s\t%f\n", data[i].first_name, data[i].last_name, data[i].gender, data[i].marks);
}

// Main function - The program starts from here
int main()
{
    int n;

    printf("Enter the number of students : ");
    scanf("%d", &n);

    printf("\nEnter the student details :\n\n");

    for (int i = 0; i < n; i++)
    {
        // Taking inputs of student details

        printf("Enter First and Last name of the student %d : ", i + 1);
        scanf("%s", data[i].first_name);
        scanf("%s", data[i].last_name);

        printf("Enter gender of student %d : ", i + 1);
        scanf("%s", data[i].gender);

        printf("Enter marks of student %d : ", i + 1);
        scanf("%f", &data[i].marks);

        printf("\n");
    }

    // Calling functions to print record and finding the best girl student
    print_record(n);
    best_girl_student(n);

    return 0;
}