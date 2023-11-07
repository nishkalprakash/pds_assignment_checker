//NAME.:NAZEER ANWAR
//ROLL NO.:23BT30019
#include <stdio.h>
#include <string.h>
#include <ctype.h>

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
    printf("Enter the number of students to enroll: ");
    int numEnroll;
    scanf("%d", &numEnroll);

    for (int i = 0; i < numEnroll; i++) {
        struct Student student;
        student.mobileNumber = 0;  

        printf("Enter First Name: ");
        scanf("%19s", student.firstName);
        printf("Enter Last Name: ");
        scanf("%19s", student.lastName);
        printf("Enter Address: ");
        scanf("%39s", student.address);
        printf("Enter Mobile Number: ");
        scanf("%u", &student.mobileNumber);

        studArray[nStuds++] = student;
    }

    printf("Enrolled students:\n");
    for (int i = 0; i < nStuds; i++) {
        printf("Student %d:\n", i + 1);
        printf("First Name: %s\n", studArray[i].firstName);
        printf("Last Name: %s\n", studArray[i].lastName);
        printf("Address: %s\n", studArray[i].address);
        printf("Mobile Number: %u\n", studArray[i].mobileNumber);
    }
}

void enterGrades() {
    for (int i = 0; i < nStuds; i++) {
        printf("Enter grades for Student %d (Roll number %d):\n", i + 1, i + 1);
        printf("First Name: %s\n", studArray[i].firstName);
        printf("Last Name: %s\n", studArray[i].lastName);

        for (int j = 0; j < 5; j++) {
            char grade;
            do {
                printf("Enter grade for subject %d (E, A, B, C, D, P, F): ", j + 1);
                scanf(" %c", &grade);
                grade = toupper(grade);
            } while (grade != 'E' && grade != 'A' && grade != 'B' && grade != 'C' && grade != 'D' && grade != 'P' && grade != 'F');

            studArray[i].grades[j] = grade;
        }

        
        float totalPoints = 0;
        for (int j = 0; j < 5; j++) {
            char grade = studArray[i].grades[j];
            switch (grade) {
                case 'E':
                    totalPoints += 10.0;
                    break;
                case 'A':
                    totalPoints += 9.0;
                    break;
                case 'B':
                    totalPoints += 8.0;
                    break;
                case 'C':
                    totalPoints += 7.0;
                    break;
                case 'D':
                    totalPoints += 6.0;
                    break;
                case 'P':
                    totalPoints += 5.0;
                    break;
                case 'F':
                    totalPoints += 0.0;
                    break;
            }
        }
        studArray[i].gpa = totalPoints / 5;

        printf("Grades entered for Student %d:\n", i + 1);
        printf("First Name: %s\n", studArray[i].firstName);
        printf("Last Name: %s\n", studArray[i].lastName);
        printf("GPA: %.2f\n", studArray[i].gpa);
    }
}

void displayStuds() {
    for (int i = 0; i < nStuds - 1; i++) {
        for (int j = i + 1; j < nStuds; j++) {
            if (strcmp(studArray[i].firstName, studArray[j].firstName) > 0) {
                struct Student temp = studArray[i];
                studArray[i] = studArray[j];
                studArray[j] = temp;
            }
        }
    }

    printf("Student Details (sorted by First Name):\n");
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
    char searchStr[20];
    printf("Enter a string to search for students: ");
    scanf("%19s", searchStr);

    printf("Matching Students (case-insensitive):\n");
    for (int i = 0; i < nStuds; i++) {
        if (strcasestr(studArray[i].firstName, searchStr) || strcasestr(studArray[i].lastName, searchStr)) {
            printf("Student %d:\n", i + 1);
            printf("First Name: %s\n", studArray[i].firstName);
            printf("Last Name: %s\n", studArray[i].lastName);
            printf("Address: %s\n", studArray[i].address);
            printf("Mobile Number: %u\n", studArray[i].mobileNumber);
            printf("GPA: %.2f\n", studArray[i].gpa);
        }
    }
}

void modifyStudDetails() {
    int rollNumber;
    printf("Enter the roll number of the student to modify: ");
    scanf("%d", &rollNumber);

    if (rollNumber >= 1 && rollNumber <= nStuds) {
        struct Student *student = &studArray[rollNumber - 1];

        printf("Student Details for Roll Number %d:\n", rollNumber);
        printf("First Name: %s\n", student->firstName);
        printf("Last Name: %s\n", student->lastName);
        printf("Address: %s\n", student->address);
        printf("Mobile Number: %u\n", student->mobileNumber);

        printf("Enter new address: ");
        scanf("%39s", student->address);
        printf("Enter new mobile number: ");
        scanf("%u", &student->mobileNumber);

        printf("Updated Student Details for Roll Number %d:\n", rollNumber);
        printf("First Name: %s\n", student->firstName);
        printf("Last Name: %s\n", student->lastName);
        printf("Address: %s\n", student->address);
        printf("Mobile Number: %u\n", student->mobileNumber);
    } else {
        printf("Invalid roll number. Please enter a valid roll number.\n");
    }
}

void editStudGrades() {
    int rollNumber;
    printf("Enter the roll number of the student to edit grades: ");
    scanf("%d", &rollNumber);

    if (rollNumber >= 1 && rollNumber <= nStuds) {
        struct Student *student = &studArray[rollNumber - 1];

        printf("Student Details for Roll Number %d:\n", rollNumber);
        printf("First Name: %s\n", student->firstName);
        printf("Last Name: %s\n", student->lastName);
        printf("GPA: %.2f\n", student->gpa);

        printf("Enter updated grades for the following subjects:\n");
        for (int i = 0; i < 5; i++) {
            char grade;
            do {
                printf("Subject %d (E, A, B, C, D, P, F): ", i + 1);
                scanf(" %c", &grade);
                grade = toupper(grade);
            } while (grade != 'E' && grade != 'A' && grade != 'B' && grade != 'C' && grade != 'D' && grade != 'P' && grade != 'F');

            student->grades[i] = grade;
        }

        float totalPoints = 0;
        for (int i = 0; i < 5; i++) {
            char grade = student->grades[i];
            switch (grade) {
                case 'E':
                    totalPoints += 10.0;
                    break;
                case 'A':
                    totalPoints += 9.0;
                    break;
                case 'B':
                    totalPoints += 8.0;
                    break;
                case 'C':
                    totalPoints += 7.0;
                    break;
                case 'D':
                    totalPoints += 6.0;
                    break;
                case 'P':
                    totalPoints += 5.0;
                    break;
                case 'F':
                    totalPoints += 0.0;
                    break;
            }
        }
        student->gpa = totalPoints / 5;

        printf("Updated Student Details for Roll Number %d:\n", rollNumber);
        printf("First Name: %s\n", student->firstName);
        printf("Last Name: %s\n", student->lastName);
        printf("GPA: %.2f\n", student->gpa);
    } else {
        printf("Invalid roll number. Please enter a valid roll number.\n");
    }
}

void dispMeritList() {
    for (int i = 0; i < nStuds - 1; i++) {
        for (int j = i + 1; j < nStuds; j++) {
            if (studArray[i].gpa < studArray[j].gpa || (studArray[i].gpa == studArray[j].gpa && strcmp(studArray[i].lastName, studArray[j].lastName) > 0)) {
                struct Student temp = studArray[i];
                studArray[i] = studArray[j];
                studArray[j] = temp;
            }
        }
    }

    printf("Merit List (sorted by GPA, Last Name):\n");
    for (int i = 0; i < nStuds; i++) {
        printf("Student %d:\n", i + 1);
        printf("First Name: %s\n", studArray[i].firstName);
        printf("Last Name: %s\n", studArray[i].lastName);
        printf("Address: %s\n", studArray[i].address);
        printf("Mobile Number: %u\n", studArray[i].mobileNumber);
        printf("GPA: %.2f\n", studArray[i].gpa);
    }
}



int main() {
    while (1) {
        printf("\nStudent Academic Record Management Software\n");
        printf("1. Enrol student\n");
        printf("2. Enter grade\n");
        printf("3. Display students\n");
        printf("4. Search student\n");
        printf("5. Edit student grades\n");
        printf("6. Modify Student Details\n");
        printf("7. Display merit list\n");
        printf("8. Exit the program\n");
        printf("Enter your choice (1-8): ");

        int choice;
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                enrolStuds();
                break;
            case 2:
                enterGrades();
                break;
            case 3:
                displayStuds();
                break;
            case 4:
                searchStuds();
                break;
            case 5:
                editStudGrades();
                break;
            case 6:
                modifyStudDetails();
                break;
            case 7:
                dispMeritList();
                break;
            case 8:
                return 0;
            default:
                printf("Invalid choice. Please enter a number between 1 and 8.\n");
        }
    }

    return 0;
}

