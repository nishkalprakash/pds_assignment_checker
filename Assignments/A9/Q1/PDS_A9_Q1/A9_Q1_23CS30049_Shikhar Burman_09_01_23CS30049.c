// Roll No.: 23CS30049
// Name: Shikhar Burman

#include <stdio.h>
#include <string.h>

typedef struct
{
    char firstName[20];
    char lastName[20];
    char address[40];
    long unsigned int mobileNumber;
    char grades[5];
    float gpa;
} student;

student studArray[50];
int nStuds;

void enrolStuds()
{
    printf("enter number of students: ");
    scanf("%d", &nStuds);

    for (int i = 1; i <= nStuds; i++)
    {
        printf("For student %d\n", i);

        printf("enter first name: ");
        scanf("%s", studArray[i].firstName);

        printf("enter last name: ");
        scanf("%s", studArray[i].lastName);

        printf("enter address: ");
        scanf(" %[^\n]s", studArray[i].address);

        printf("enter mobile number: ");
        scanf("%lu", &studArray[i].mobileNumber);
    }

    for (int i = 1; i <= nStuds; i++)
    {
        printf("\n\nStudent %d :\n", i);
        printf("first name: %s\nlast name: %s\naddress: %s\nmobie number: %lu \n\n", studArray[i].firstName, studArray[i].lastName, studArray[i].address, studArray[i].mobileNumber);
    }
}

void enterGradesForEach(int rollNumber)
{
    printf("enter grades of 5 subjects for student %d:\n", rollNumber);

    studArray[rollNumber].gpa = 0;

    int x = 0;
    while (x < 5)
    {
        scanf(" %c", &studArray[rollNumber].grades[x]);
        switch (studArray[rollNumber].grades[x])
        {
        case 'E':
            studArray[rollNumber].gpa += 10.0 / 5;
            x++;
            break;
        case 'A':
            studArray[rollNumber].gpa += 9.0 / 5;
            x++;
            break;
        case 'B':
            studArray[rollNumber].gpa += 8.0 / 5;
            x++;
            break;
        case 'C':
            studArray[rollNumber].gpa += 7.0 / 5;
            x++;
            break;
        case 'D':
            studArray[rollNumber].gpa += 6.0 / 5;
            x++;
            break;
        case 'P':
            studArray[rollNumber].gpa += 5.0 / 5;
            x++;
            break;
        case 'F':
            studArray[rollNumber].gpa += 0.0 / 5;
            x++;
            break;
        default:
            printf("enter correct grade!\n");
            break;
        }
    }
}

void enterGrades()
{
    for (int i = 1; i <= nStuds; i++)
    {
        printf("\nStudent %d :\n", i);
        printf("first name: %s\nlast name: %s\naddress: %s\n\n", studArray[i].firstName, studArray[i].lastName, studArray[i].address);

        enterGradesForEach(i);

        printf("\n%f\n", studArray[i].gpa);
    }

    for (int i = 1; i <= nStuds; i++)
    {
        printf("\nStudent %d :\n", i);
        printf("first name: %s\nlast name: %s\naddress: %s\nmobie number: %lu \ngpa: %f\n\n", studArray[i].firstName, studArray[i].lastName, studArray[i].address, studArray[i].mobileNumber, studArray[i].gpa);
    }
}

void swap(int i, int j)
{
    student temp;
    temp = studArray[i];
    studArray[i] = studArray[j];
    studArray[j] = temp;
}

void displayStuds()
{
    student temp;
    for (int i = 1; i <= nStuds; i++)
    {
        for (int j = i + 1; j <= nStuds; j++)
        {
            if (strcasecmp(studArray[i].firstName, studArray[j].firstName) > 0)
            {
                swap(i, j);
            }
            if (strcasecmp(studArray[i].firstName, studArray[j].firstName) == 0)
            {
                if (strcasecmp(studArray[i].lastName, studArray[j].lastName) > 0)
                {
                    swap(i, j);
                }
            }
        }
    }

    for (int i = 1; i <= nStuds; i++)
    {
        printf("\nStudent %d :\n", i);
        printf("first name: %s\nlast name: %s\naddress: %s\nmobie number: %lu \ngpa: %f\n\n", studArray[i].firstName, studArray[i].lastName, studArray[i].address, studArray[i].mobileNumber, studArray[i].gpa);
    }
}

void searchStud()
{
    char searchKeyword[100];
    printf("enter keyword to search: ");
    scanf("%s", searchKeyword);

    for (int i = 1; i <= nStuds; i++)
    {
        if (strcasecmp(studArray[i].firstName, searchKeyword) == 0 || strcasecmp(studArray[i].lastName, searchKeyword) == 0)
        {
            printf("\nfound keyword!\n");
            printf("student %d", i);
            printf("first name: %s\nlast name: %s\naddress: %s\nmobie number: %lu \ngpa: %f\n\n", studArray[i].firstName, studArray[i].lastName, studArray[i].address, studArray[i].mobileNumber, studArray[i].gpa);
        }
    }
}

void modifyStutDetails()
{
    int rollNumber;
    printf("enter roll number: ");
    scanf("%d", &rollNumber);

    printf("first name: %s\nlast name: %s\naddress: %s\nmobie number: %lu\n\n", studArray[rollNumber].firstName, studArray[rollNumber].lastName, studArray[rollNumber].address, studArray[rollNumber].mobileNumber);

    printf("enter new address: ");
    scanf(" %[^\n]s", studArray[rollNumber].address);

    printf("enter new mobile number: ");
    scanf("%lu", &studArray[rollNumber].mobileNumber);

    printf("\nupdated student details: \n");
    printf("first name: %s\nlast name: %s\naddress: %s\nmobie number: %lu \ngpa: %f\n\n", studArray[rollNumber].firstName, studArray[rollNumber].lastName, studArray[rollNumber].address, studArray[rollNumber].mobileNumber, studArray[rollNumber].gpa);
}

void editStudGrades()
{
    int rollNumber;
    printf("enter roll number: ");
    scanf("%d", &rollNumber);

    printf("first name: %s\nlast name: %s\naddress: %s\nmobie number: %lu\n\n", studArray[rollNumber].firstName, studArray[rollNumber].lastName, studArray[rollNumber].address, studArray[rollNumber].mobileNumber);

    printf("grades: ");
    for (int i = 0; i < 5; i++)
    {
        printf("%c\t", studArray[rollNumber].grades[i]);
    }
    printf("\ngpa: %f\n\n", studArray[rollNumber].gpa);

    enterGradesForEach(rollNumber);

    printf("\ngpa: %f\n\n", studArray[rollNumber].gpa);
}

void dispMeritList()
{
    student temp;
    for (int i = 1; i <= nStuds; i++)
    {
        for (int j = i + 1; j <= nStuds; j++)
        {
            if (studArray[i].gpa < studArray[j].gpa)
            {
                swap(i, j);
            }
            if (studArray[i].gpa == studArray[j].gpa)
            {
                if (strcasecmp(studArray[i].lastName, studArray[j].lastName) > 0)
                {
                    swap(i, j);
                }
            }
        }
    }

    for (int i = 1; i <= nStuds; i++)
    {
        printf("\nStudent %d :\n", i);
        printf("first name: %s\nlast name: %s\naddress: %s\nmobie number: %lu \ngpa: %f\n\n", studArray[i].firstName, studArray[i].lastName, studArray[i].address, studArray[i].mobileNumber, studArray[i].gpa);
    }
}

int main()
{
    nStuds = 0;

    int choice;
    for (int i = 1; i <= nStuds; i++)
    {
        printf("\nStudent %d :\n", i);
        printf("first name: %s\nlast name: %s\naddress: %s\nmobie number: %lu \n\n", studArray[i].firstName, studArray[i].lastName, studArray[i].address, studArray[i].mobileNumber);
    }
    do
    {
        printf("1 -> enrol student\n2 -> enter grade\n3 -> display students\n4 -> search student\n5 -> edit student grades\n6 -> modify student details\n7 -> display merit list\n8 -> exit the program\n");
        printf("Enter choice:");
        scanf("%d", &choice);
        if (choice < 1 || choice > 8)
            printf("Please make sure the choice is in correct range.\n");

        switch (choice)
        {
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
            searchStud();
            break;
        case 5:
            editStudGrades();
            break;
        case 6:
            modifyStutDetails();
            break;
        case 7:
            dispMeritList();
            break;
        default:
            break;
        }

    } while (choice != 8);

    return 0;
}
