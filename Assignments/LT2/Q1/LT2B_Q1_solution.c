// Code Creator: Nishkal Prakash
/*
LT1_Q1B:
1.	Management of Records, a record can be defined having:
•	name – A string of characters of length 30, for example: John Doe
•	passport_no – A string of 10 alpha-numeric characters, for example 10EX566A68
•	nationality – A string of characters of at-most length 15, for example: America
•	dob – A structure with the fields dd-mm-yyyy, for example, 25-12-1997
You have to store a number of records of the above-mentioned type, in this regard write a program to:
1.	Define a structure, Person.
Allocate a memory to store the records of n (>0) persons in an array named, Persons. N is read from the user.
2.	Write a function, void read(…) {…}, to read data for a person.
Also write another function void print(…) {…}, to print the record of the person.
3.	Read n records and store them in Persons array. Print all records to the screen.
4.	Read another number m (>0), then read m records from the user. Store it in another array, Persons2.
Merge Persons and Persons2 to a single array Persons, using realloc() function.
5.	Print the records from the final array Persons whose nationality is “India”.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char *name;
    char *passport_no;
    char *nationality;
    struct
    {
        int dd;
        int mm;
        int yyyy;
    } dob;
} Person;

void read(Person *P)
{
    // Temp variable to store strings
    char temp[30];
    // Read name
    printf("Enter name: ");
    scanf("%[^\n]*s", temp);
    P->name = (char *)calloc((strlen(temp) + 1), sizeof(char));
    strcpy(P->name, temp);
    // Read passport number
    printf("Enter passport number: ");
    scanf("%s", temp);
    if (strlen(temp) != 10)
    {
        printf("Invalid passport number\n");
        printf("** Exiting **\n");
        exit(0);
    }
    P->passport_no = (char *)calloc((strlen(temp) + 1), sizeof(char));
    strcpy(P->passport_no, temp);

    // Read nationality
    printf("Enter nationality: ");
    scanf("%s", temp);
    if (strlen(temp) > 15)
    {
        printf("Invalid nationality\n");
        printf("** Exiting **\n");
        exit(0);
    }
    P->nationality = (char *)calloc((strlen(temp) + 1), sizeof(char));
    strcpy(P->nationality, temp);

    // Read dob
    printf("Enter dob (dd-mm-yyyy): ");
    scanf("%d-%d-%d", &P->dob.dd, &P->dob.mm, &P->dob.yyyy);
}

// Print the record of the person
void print(Person *P, int i)
{
    printf("\n** Person %d **\n");
    printf("%s\n", P->name);
    printf("%s %s %d-%d-%d\n", P->passport_no, P->nationality, P->dob.dd, P->dob.mm, P->dob.yyyy);
    // printf("****\n");
}

// Print all persons that have nationality as India
void print_indian(Person *Persons, int n)
{
    int flag = 0;
    for (int i = 0; i < n; i++)
    {
        if (strcmp(Persons[i].nationality, "India") == 0)
        {
            if (flag == 0)
                printf("\nAll persons having Nationality as India:\n");
            print(&Persons[i], i);
            flag = 1;
        }
    }
    if (flag == 0)
        printf("\nNo persons having Nationality as India\n");
}

void main()
{
    int n, m;
    // Read n
    printf("Enter n: ");
    scanf("%d", &n);
    // getchar(); // to consume the newline character
    // Allocate memory for Persons
    Person *Persons = (Person *)calloc(n, sizeof(Person));
    // Read n records and store them in Persons array. Print all records to the screen.
    for (int i = 0; i < n; i++)
    {
        // Persons[i] = (Person *)malloc(sizeof(Person));
        getchar(); // to consume the newline character
        read(&Persons[i]);
        print(&Persons[i], i);
    }
    // Read m
    printf("Enter m: ");
    scanf("%d", &m);
    // getchar(); // to consume the newline character
    // Allocate memory for Persons2
    Person *Persons2 = (Person *)calloc(m, sizeof(Person));
    // Read m records and store them in Persons2 array. Print all records to the screen.
    for (int i = 0; i < m; i++)
    {
        // Persons2[i] = (Person *)malloc(sizeof(Person));
        getchar(); // to consume the newline character
        read(&Persons2[i]);
        // print(&Persons2[i]);
    }
    // Merge Persons and Persons2 to a single array Persons, using realloc() function.
    // Reallocate new memory for Persons
    Person *Persons_merged = (Person *)calloc(n + m, sizeof(Person));
    // Copy Persons and Persons2 to Persons_merged
    for (int i = 0; i < n; i++)
        Persons_merged[i] = Persons[i];
    for (int i = 0; i < m; i++)
        Persons_merged[n + i] = Persons2[i];
    // Print all persons that have nationality India
    print_indian(Persons_merged, n + m);
    free(Persons);
    free(Persons2);
    free(Persons_merged);
}