#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char Name[31];
    char Passport[11];
    char Nationality[16];
    char DOB[15];
} Person;

void readPerson(Person *p)
{
    printf("Enter Name: ");
    scanf(" %[^\n]%*c", p->Name);
    printf("Enter Passport No: ");
    scanf("%s", p->Passport);
    printf("Enter Nationality: ");
    scanf("%s", p->Nationality);
    printf("Enter DOB: ");
    scanf("%s", p->DOB);
}

void printPerson(const Person *p)
{
    printf("Name: %s\n", p->Name);
    printf("Passport: %s\n", p->Passport);
    printf("Nationality: %s\n", p->Nationality);
    printf("DOB: %s\n", p->DOB);
    printf("-------------------\n");
}

int main()
{
    printf("Enter number of entries for the first set: ");
    int n;
    scanf("%d", &n);

    Person *persons1 = (Person *)malloc(n * sizeof(Person));
    for (int i = 0; i < n; i++)
    {
        printf("** Person %d **\n", i + 1);
        readPerson(&persons1[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("** Person %d **\n", i);
        printPerson(&persons1[i]);
    }

    printf("Enter number of entries for the second set: ");
    int m;
    scanf("%d", &m);

    Person *persons2 = (Person *)malloc(m * sizeof(Person));
    for (int i = 0; i < m; i++)
    {
        printf("** Person %d **\n", i + 1);
        readPerson(&persons2[i]);
    }
    for (int i = 0; i < m; i++)
    {
        printf("** Person %d **\n", i);
        printPerson(&persons2[i]);
    }

    Person *personsMerged = (Person *)malloc((m + n) * sizeof(Person));
    memcpy(personsMerged, persons1, n * sizeof(Person));
    memcpy(&personsMerged[n], persons2, m * sizeof(Person));

    printf("Merged persons with Indian nationality:\n");
    for (int i = 0; i < m + n; i++)
    {
        if (strcmp(personsMerged[i].Nationality, "India") == 0)
        {
            printf("** Person %d **\n", i + 1);
            printPerson(&personsMerged[i]);
        }
    }

    free(persons1);
    free(persons2);
    free(personsMerged);

    return 0;
}
