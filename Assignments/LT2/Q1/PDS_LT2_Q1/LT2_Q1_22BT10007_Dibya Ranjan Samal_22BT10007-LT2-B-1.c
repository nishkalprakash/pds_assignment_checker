#include <stdio.h>
#include <stdlib.h>
#include<string.h>


struct Person {
    char name[31];
    char passport_no[11];
    char nationality[16];

    struct {

        int day;
        int month;
        int year;

    } dob;
};
void read(struct Person* person) {
    scanf(" %[^\n]s", person->name);
    scanf("%s", person->passport_no);
    scanf(" %[^\n]s", person->nationality);
    scanf("%d-%d-%d", &person->dob.day, &person->dob.month, &person->dob.year);

}

void print(struct Person* person) {

    printf("Name: %s\n", person->name);
    printf("Passport Number: %s\n", person->passport_no);
    printf("Nationality: %s\n", person->nationality);
    printf("Date of Birth: %02d-%02d-%04d\n", person->dob.day, person->dob.month, person->dob.year);

}


int main() {
    int n;
    scanf("%d", &n);
    struct Person* Persons = (struct Person*)malloc(n * sizeof(struct Person));

    for (int i = 0; i < n; i++) {

        read(&Persons[i]);
    }
    for (int i = 0; i < n; i++) {
        printf("** Person %d **\n", i + 1);
        print(&Persons[i]);
    }
    int m;
    scanf("%d", &m);
    struct Person* Persons2 = (struct Person*)malloc(m * sizeof(struct Person));
    for (int i = 0; i < m; i++) {
        read(&Persons2[i]);
    }
    int totalPersons = n + m;
    struct Person* Persons_merged = (struct Person*)malloc(totalPersons * sizeof(struct Person));
    for (int i = 0; i < n; i++) {
        Persons_merged[i] = Persons[i];
    }
    for (int i = 0; i < m; i++) {
        Persons_merged[n + i] = Persons2[i];
    }
    for (int i = 0; i < totalPersons; i++) {
        printf("**Person %d**\n", i);
        print(&Persons_merged[i]);
    }
    printf("\n All persons having nationality as India:\n");

    for (int i = 0; i < totalPersons; i++) {
        if (strcmp(Persons_merged[i].nationality, "India") == 0) {
        printf("Person %d:\n", i);
        print(&Persons_merged[i]);
        }
else{printf("No persons having nationality as India");}
    }

    free(Persons);
    free(Persons2);
    free(Persons_merged);

return 0;

}



