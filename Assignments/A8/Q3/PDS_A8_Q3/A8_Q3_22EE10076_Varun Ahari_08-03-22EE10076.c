#include <stdio.h>
#include <string.h>

#define MAX_STUDENTS 100

typedef struct Student {
    char RollNo[10];
    float marks[3];
    float total;
} Student;

void readStudentData(Student *student) {
    printf("Enter Roll No: ");
    scanf("%s", student->RollNo);
    
    printf("Enter marks in 3 subjects: ");
    scanf("%f %f %f", &(student->marks[0]), &(student->marks[1]), &(student->marks[2]));
    
    student->total = student->marks[0] + student->marks[1] + student->marks[2];
}

void printStudentData(Student student) {
    printf("Roll No: %s\n", student.RollNo);
    printf("Marks: %.2f %.2f %.2f\n", student.marks[0], student.marks[1], student.marks[2]);
    printf("Total: %.2f\n", student.total);
}

void sortStudentsByTotal(Student students[], int n) {
    int i, j;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (students[j].total < students[j + 1].total) {
                Student temp = students[j];
                students[j] = students[j + 1];
                students[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n, i;
    Student students[MAX_STUDENTS];
    
    printf("Enter the number of students: ");
    scanf("%d", &n);
    
    if (n <= 0 || n > MAX_STUDENTS) {
        printf("Invalid number of students.\n");
        return 0;
    }
    
    printf("Enter the student records:\n");
    for (i = 0; i < n; i++) {
        printf("Student %d:\n", i + 1);
        readStudentData(&students[i]);
        printf("\n");
    }
    
    printf("Student Records:\n");
    for (i = 0; i < n; i++) {
        printf("Record %d:\n", i + 1);
        printStudentData(students[i]);
        printf("\n");
    }
    
    sortStudentsByTotal(students, n);
    
    printf("Sorted Student Records:\n");
    for (i = 0; i < n; i++) {
        printf("Record %d:\n", i + 1);
        printStudentData(students[i]);
        printf("\n");
    }
    
    return 0;
}
