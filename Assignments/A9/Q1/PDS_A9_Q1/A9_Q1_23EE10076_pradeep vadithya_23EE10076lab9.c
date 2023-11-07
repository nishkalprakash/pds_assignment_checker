
// ROLL NO. 23EE10076
// NAME. Pradeep

#include <stdio.h>
#include <string.h>


struct Student {
    char firstName[20];
    char lastName[20];
    char address[40];
    unsigned int mobileNumber;
    char grades[5];
    float gpa;
};


struct Student studArray[50];
int nStuds = 0;


void enrolStuds() {
    int numStudents, i;

    printf("Enter the number of students to enroll: ");
    scanf("%d", numStudents);

    for (i = 0; i < numStudents; i++) {
        struct Student student;

        printf("Enter First Name: ");
        scanf("%s", student.irstName);

        printf("Enter Last Name: ");
        scanf("%s", student.lastName);

        printf("Enter Address: ");
        scanf("%s", student.address);

        printf("Enter Mobile Number: ");
        scanf("%u", student.mobileNumber);

        studArray[nStuds] = student;
        nStuds++;
    }

    printf("Enrollment completed!\n");
}


void enterGrades() {
    for (int i = 0; i < nStuds; i++) {
        printf("Enter grades for student %d (%s %s):\n", i + 1, studArray[i].firstName, studArray[i].lastName);

        for (int j = 0; j < 5; j++) {
            char grade;
            printf("Enter grade for subject %d (E, A, B, C, D, P, F): ", j + 1);
            scanf(" %c", &grade);

            if (grade == 'E') studArray[i].grades[j] = 10;
            else if (grade == 'A') studArray[i].grades[j] = 9;
              else if (grade == 'B') studArray[i].grades[j] = 8;
            else if (grade == 'C') studArray[i].grades[j] = 7;
            else if (grade == 'D') studArray[i].grades[j] = 6;
               else if (grade == 'P') studArray[i].grades[j] = 5;

            else if (grade == 'F') studArray[i].grades[j] = 0;
            else {
                printf("Invalid grade entered. \n");
                j--;
            }
        }

        float total = 0;
        for (int j = 0; j < 5; j++) {
            total += studArray[i].grades[j];
        }
        studArray[i].gpa = total / 5;
    }
    printf("Grades entered and GPA calculated\n");
}


void displayStuds() {
    printf("Student Details:\n");

    for (int i = 0; i < nStuds; i++) {
        printf("Student %d:\n", i + 1);
        printf("First Name: %s\n", studArray[i].firstName);

        printf("Last Name: %s\n", studArray[i].lastName);
        printf("Address: %s\n", studArray[i].address);
        printf("Mobile Number: %u\n", studArray[i].mobileNumber);

        printf("GPA: %.2f\n", studArray[i].gpa);
       
    }
}


void searchStuds() {
    char searchName[20];
    printf("Enter the first or last name to search for: ");
    scanf("%s",searchName);

    printf("Matching Students:\n");
    for (int i = 0; i < nStuds; i++) {
        if (strcasestr(studArray[i].firstName, searchName) || strcasestr(studArray[i].lastName, searchName)) {
            printf("%s %s\n", studArray[i].firstName, studArray[i].lastName);
        }
    }
}
void modifyStudDetails() {
    int rollNum;
    printf("Enter the roll number of the student to modify details: ");
    scanf("%d", &rollNum);

    if (rollNum >= 1 && rollNum <= nStuds) {
        printf("Current Details for Student %d:\n", rollNum);
        printf("First Name: %s\n", studArray[rollNum - 1].firstName);
        printf("Last Name: %s\n", studArray[rollNum - 1].lastName);
        printf("Address: %s\n", studArray[rollNum - 1].address);
        printf("Mobile Number: %u\n", studArray[rollNum - 1].mobileNumber);

        printf("Enter new address: ");
        scanf("%s", studArray[rollNum - 1].address);
        printf("Enter new mobile number: ");
        scanf("%u", &studArray[rollNum - 1].mobileNumber);

        printf(" modified!\n");
    } else {
        printf("Invalid roll number.\n");
    }
}


void editStudGrades() {
    int rollNum;
    printf("Enter the roll number of the student to edit grades: ");
    scanf("%d", &rollNum);

    if (rollNum >= 1 && rollNum <= nStuds) {
        printf("Current Grades for Student %d (%s %s):\n", rollNum, studArray[rollNum - 1].firstName, studArray[rollNum - 1].lastName);
        for (int i = 0; i < 5; i++) {
            printf("Subject %d Grade: %c\n", i + 1, studArray[rollNum - 1].grades[i]);
        }

        printf("Enter new grades:\n");
        for (int i = 0; i < 5; i++) {
            char grade;
            printf("Enter grade for sbject %d (E, A, B, C, D, P, F): ", i );
            scanf(" %c", &grade);

            if (grade == 'E') studArray[rollNum - 1].grades[i] = 10;
            else if (grade == 'A') studArray[rollNum - 1].grades[i] = 9;
            else if (grade == 'B') studArray[rollNum - 1].grades[i] = 8;
            else if (grade == 'C') studArray[rollNum - 1].grades[i] = 7;
            else if (grade == 'D') studArray[rollNum - 1].grades[i] = 6;
            else if (grade == 'P') studArray[rollNum - 1].grades[i] = 5;
            else if (grade == 'F') studArray[rollNum - 1].grades[i] = 0;
            else {
                printf("Invalid grade entered.\n");
              
            }
        }