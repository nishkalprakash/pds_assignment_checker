#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define the structure to store a student's data
struct Student
{
    char RollNo[10];
    float marks[3];
    float total;
};

// Function to read the data of n students from the keyboard
void readData(struct Student *students, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Enter Roll No for student %d: ", i + 1);
        scanf("%s", students[i].RollNo);

        printf("Enter marks for 3 subjects (separated by spaces) for student %d: ", i + 1);
        scanf("%f %f %f", &students[i].marks[0], &students[i].marks[1], &students[i].marks[2]);

        // Calculate the total marks
        students[i].total = students[i].marks[0] + students[i].marks[1] + students[i].marks[2];
    }
}

// Function to swap two student records
void swap(struct Student *a, struct Student *b)
{
    struct Student temp = *a;
    *a = *b;
    *b = temp;
}

// Function to sort the array of student records in descending order of total marks
void sortData(struct Student *students, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (students[j].total < students[j + 1].total)
            {
                swap(&students[j], &students[j + 1]);
            }
        }
    }
}

// Function to print the records of students
void printData(struct Student *students, int n)
{
    printf("\nStudent Records:\n");
    for (int i = 0; i < n; i++)
    {
        printf("Roll No: %s\n", students[i].RollNo);
        printf("Marks: %.2f %.2f %.2f\n", students[i].marks[0], students[i].marks[1], students[i].marks[2]);
        printf("Total: %.2f\n\n", students[i].total);
    }
}

int main()
{
    int n;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    // Dynamically allocate memory for the array of students
    struct Student *students = (struct Student *)malloc(n * sizeof(struct Student));

    // Read data from the keyboard
    readData(students, n);

    // Print the records entered
    printData(students, n);

    // Sort the array in descending order of total marks
    sortData(students, n);

    // Print the records in sorted order
    printf("Sorted Student Records:\n");
    printData(students, n);

    // Free the dynamically allocated memory
    free(students);

    return 0;
}
