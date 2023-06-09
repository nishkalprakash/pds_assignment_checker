#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NAME_LENGTH 30
#define MAX_PASSPORT_LENGTH 10
#define MAX_NATIONALITY_LENGTH 15

typedef struct {
    char name[MAX_NAME_LENGTH];
    char passport_no[MAX_PASSPORT_LENGTH];
    char nationality[MAX_NATIONALITY_LENGTH];
    struct {
        int day;
        int month;
        int year;
    } dob;
} Person;

void read(Person *person) {
    printf("Enter name: ");
    fgets(person->name, sizeof(person->name), stdin);
    printf("Enter passport number: ");
    // fgets(person->passport_no, sizeof(person->passport_no), stdin);
    printf("Enter nationality: ");
    // fgets(person->nationality, sizeof(person->nationality), stdin);
    printf("Enter date of birth (dd-mm-yyyy): ");
    scanf("%s %s %d-%d-%d",person->passport_no,person->nationality, &person->dob.day, &person->dob.month, &person->dob.year);
    getchar();

}

void print(const Person *person) {
    printf("Name: %s", person->name);
    printf("Passport number: %s\n", person->passport_no);
    printf("Nationality: %s\n", person->nationality);
    printf("Date of Birth: %d-%d-%d\n", person->dob.day, person->dob.month, person->dob.year);
}

void print_records_with_nationality(const Person *persons, int count, const char *nationality) {
    int found = 0;
    for (int i = 0; i < count; i++) {
        if (strcmp(persons[i].nationality, nationality) == 0) {
            printf("** Person %d\n", i);
            print(&persons[i]);
            found = 1;
        }
    }
    if (!found) {
        printf("No persons having nationality as %s\n", nationality);
    }
}

int main() {
    int n;



    printf("Enter the number of records: ");
    scanf("%d", &n);
    getchar();



    Person *Persons = malloc(n * sizeof(Person));



    for (int i = 0; i < n; i++) {
        printf("** Person %d\n", i);
        read(&Persons[i]);
    }


    printf("All persons:\n");
    for (int i = 0; i < n; i++) {
        printf("** Person %d\n", i);
        print(&Persons[i]);
    }

    int m;



    printf("Enter the number of additional records: ");
    scanf("%d", &m);
    getchar();



    Person *Persons2 = malloc(m * sizeof(Person));

    for (int i = 0; i < m; i++) {
        printf("** Person %d\n", i);
        read(&Persons2[i]);
    }


    int merged_count = n + m;
    Person *Persons_merged = malloc(merged_count * sizeof(Person));
    memcpy(Persons_merged, Persons, n * sizeof(Person));
    memcpy(Persons_merged + n, Persons2, m * sizeof(Person));


    printf("All persons having Nationality as India:\n");
    print_records_with_nationality(Persons_merged, merged_count, "India");


    free(Persons);
    free(Persons2);
    free(Persons_merged);

    return 0;
}
