
#include <stdio.h>
#include <string.h>

#define MAX_STUDENTS 100

typedef struct Student {
    char RollNo[10];
    float marks[3];
    float total;
} Student;


void readStudentRecords(Student records[], int n) {
    for (int i = 0; i < n; i++) {

        scanf("%s", records[i].RollNo);

        scanf("%f %f %f", &records[i].marks[0], &records[i].marks[1], &records[i].marks[2]);


        records[i].total = records[i].marks[0] + records[i].marks[1] + records[i].marks[2];
    }
}

void printStudentRecords(Student records[], int n) {
    printf("Student Records:\n");
    for (int i = 0; i < n; i++) {
        printf("Roll No: %s\n", records[i].RollNo);
        printf("Marks: %.2f %.2f %.2f\n", records[i].marks[0], records[i].marks[1], records[i].marks[2]);
        printf("Total: %.2f\n", records[i].total);
    }
}

void swap(Student* a, Student* b) {
    Student temp = *a;
    *a = *b;
    *b = temp;
}


void sortStudentRecords(Student records[], int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (records[j].total < records[j+1].total) {
                swap(&records[j], &records[j+1]);
            }
        }
    }
}

int main() {
    int n;

    scanf("%d", &n);

    Student records[MAX_STUDENTS];


    readStudentRecords(records, n);


    printf("Student Records:\n");
    printStudentRecords(records, n);


    sortStudentRecords(records, n);


    printf("Sorted Student Records:\n");
    printStudentRecords(records, n);

    return 0;
}

