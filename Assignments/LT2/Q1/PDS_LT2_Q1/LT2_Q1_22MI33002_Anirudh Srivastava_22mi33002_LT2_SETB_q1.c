//Name:Anirudh Rollno:22Mi33002

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Date {
    int day;
    int month;
    int year;
};

struct Person {
    char name[31];
    char passportNo[11];
    char nationality[16];
    struct Date dob;
};

void read(struct Person* p) {
    printf("Enter name: ");
    fgets(p->name, sizeof(p->name), stdin);
    p->name[strcspn(p->name, "\n")] = '\0';

    printf("Enter passport number: ");
    fgets(p->passportNo, sizeof(p->passportNo), stdin);
    p->passportNo[strcspn(p->passportNo, "\n")] = '\0';

    printf("Enter nationality: ");
    fgets(p->nationality, sizeof(p->nationality), stdin);
    p->nationality[strcspn(p->nationality, "\n")] = '\0';

    printf("Enter date of birth (dd-mm-yyyy): ");
    scanf("%d-%d-%d", &p->dob.day, &p->dob.month, &p->dob.year);
    getchar();
}

void print(const struct Person* p) {
    printf("Name: %s\n", p->name);
    printf("Passport No: %s\n", p->passportNo);
    printf("Nationality: %s\n", p->nationality);
    printf("Date of Birth: %02d-%02d-%04d\n", p->dob.day, p->dob.month, p->dob.year);
    printf("\n");
}

int main() {
    int n;
    printf("Enter the number of records: ");
    scanf("%d", &n);
    getchar();

    struct Person* Persons = (struct Person*)malloc(n * sizeof(struct Person));

    printf("Enter details for %d persons:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Person %d:\n", i + 1);
        read(&Persons[i]);
    }

    printf("\nPrinting all records from the array:\n");
    for (int i = 0; i < n; i++) {
        printf("Record %d:\n", i + 1);
        print(&Persons[i]);
    }

    int m;
    printf("Enter the number of additional records: ");
    scanf("%d", &m);
    getchar();

    struct Person* Persons2 = (struct Person*)malloc(m * sizeof(struct Person));

    printf("Enter details for %d additional persons:\n", m);
    for (int i = 0; i < m; i++) {
        printf("Person %d:\n", i + 1);
        read(&Persons2[i]);
    }



    // free(Persons);
    // free(Persons2);
    // free(merged);

    return 0;
}
