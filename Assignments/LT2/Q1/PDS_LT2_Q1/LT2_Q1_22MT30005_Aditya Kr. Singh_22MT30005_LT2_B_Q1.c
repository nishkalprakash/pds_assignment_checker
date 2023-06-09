#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NAME_LENGTH 30
#define MAX_PASSPORT_LENGTH 10
#define MAX_NATIONALITY_LENGTH 15


typedef struct {
    int day;
    int month;
    int year;
} DateOfBirth;

typedef struct {
    char name[MAX_NAME_LENGTH];
    char passport_no[MAX_PASSPORT_LENGTH];
    char nationality[MAX_NATIONALITY_LENGTH];
    DateOfBirth dob;
} Person;

void printPerson(Person p) {
    printf("Name: %s\n", p.name);
    printf("Passport No: %s\n", p.passport_no);
    printf("Nationality: %s\n", p.nationality);
    printf("Date of Birth: %02d-%02d-%04d\n", p.dob.day, p.dob.month, p.dob.year);
    printf("\n");
}

int main() {
    int n, i;

    printf("Enter the number of records: ");
    scanf("%d", &n);
    Person* persons = (Person*)malloc(n * sizeof(Person));


    for (i = 0; i < n; i++) {
        printf("\nEnter details for Person %d:\n", i + 1);

        printf("Name: ");
        getchar();
        fgets(persons[i].name, sizeof(persons[i].name), stdin);
        persons[i].name[strcspn(persons[i].name, "\n")] = '\0';

        printf("Passport No: ");
        fgets(persons[i].passport_no, sizeof(persons[i].passport_no), stdin);
        persons[i].passport_no[strcspn(persons[i].passport_no, "\n")] = '\0';

        printf("Nationality: ");
        fgets(persons[i].nationality, si#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NAME_LENGTH 30
#define MAX_PASSPORT_LENGTH 10
#define MAX_NATIONALITY_LENGTH 15


typedef struct {
    int day;
    int month;
    int year;
} DateOfBirth;

typedef struct {
    char name[MAX_NAME_LENGTH];
    char passport_no[MAX_PASSPORT_LENGTH];
    char nationality[MAX_NATIONALITY_LENGTH];
    DateOfBirth dob;
} Person;

void printPerson(Person p) {
    printf("Name: %s\n", p.name);
    printf("Passport No: %s\n", p.passport_no);
    printf("Nationality: %s\n", p.nationality);
    printf("Date of Birth: %02d-%02d-%04d\n", p.dob.day, p.dob.month, p.dob.year);
    printf("\n");
}

int main() {
    int n, i;

    printf("Enter the number of records: ");
    scanf("%d", &n);
    Person* persons = (Person*)malloc(n * sizeof(Person));


    for (i = 0; i < n; i++) {
        printf("\nEnter details for Person %d:\n", i + 1);

        printf("Name: ");
        getchar();
        fgets(persons[i].name, sizeof(persons[i].name), stdin);
        persons[i].name[strcspn(persons[i].name, "\n")] = '\0';

        printf("Passport No: ");
        fgets(persons[i].passport_no, sizeof(persons[i].passport_no), stdin);
        persons[i].passport_no[strcspn(persons[i].passport_no, "\n")] = '\0';

        printf("Nationality: ");
        fgets(persons[i].nationality, sizeof(persons[i].nationality), stdin);
        persons[i].nationality[strcspn(persons[i].nationality, "\n")] = '\0';

        printf("Date of Birth (dd-mm-yyyy): ");
        scanf("%d-%d-%d", &persons[i].dob.day, &persons[i].dob.month, &persons[i].dob.year);
    }


    printf("\nRecords:\n");
    for (i = 0; i < n; i++) {
        printf("Person %d:\n", i + 1);
        printPerson(persons[i]);
    }


    free(persons);

    return 0;
}
zeof(persons[i].nationality), stdin);
        persons[i].nationality[strcspn(persons[i].nationality, "\n")] = '\0';

        printf("Date of Birth (dd-mm-yyyy): ");
        scanf("%d-%d-%d", &persons[i].dob.day, &persons[i].dob.month, &persons[i].dob.year);
    }


    printf("\nRecords:\n");
    for (i = 0; i < n; i++) {
        printf("Person %d:\n", i + 1);
        printPerson(persons[i]);
    }


    free(persons);

    return 0;
}
