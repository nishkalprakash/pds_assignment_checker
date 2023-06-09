#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NAME_LENGTH 30
#define PASSPORT_LENGTH 10
#define MAX_NATIONALITY_LENGTH 15
#define MAX_DOB_LENGTH 11

// Structure to store a person's record
typedef struct {
    char name[MAX_NAME_LENGTH + 1];
    char passportNo[PASSPORT_LENGTH + 1];
    char nationality[MAX_NATIONALITY_LENGTH + 1];
    char dob[MAX_DOB_LENGTH + 1];
} Person;

// Function to read the data for one person
void read(Person *person) {
    printf("Enter name: ");
    fgets(person->name, sizeof(person->name), stdin);
    person->name[strcspn(person->name, "\n")] = '\0'; // Remove the newline character

    printf("Enter passport number: ");
    fgets(person->passportNo, sizeof(person->passportNo), stdin);
    person->passportNo[strcspn(person->passportNo, "\n")] = '\0'; // Remove the newline character

    printf("Enter nationality: ");
    fgets(person->nationality, sizeof(person->nationality), stdin);
    person->nationality[strcspn(person->nationality, "\n")] = '\0'; // Remove the newline character

    printf("Enter date of birth (dd-mm-yyyy): ");
    fgets(person->dob, sizeof(person->dob), stdin);
    person->dob[strcspn(person->dob, "\n")] = '\0'; // Remove the newline character

    printf("\n");
}

// Function to print the data for one person
void print(Person *person) {
    printf("Name: %s\n", person->name);
    printf("Passport Number: %s\n", person->passportNo);
    printf("Nationality: %s\n", person->nationality);
    printf("Date of Birth: %s\n", person->dob);
    printf("\n");
}

int main() {
    int n, m;
    
    printf("Enter the number of persons to store: ");
    scanf("%d", &n);
    getchar(); // Clear the newline character from the input buffer
    
    // Allocate memory for the Persons array
    Person *Persons = (Person *)malloc(n * sizeof(Person));

    // Read records and store them in Persons array
    printf("=== Enter records for Persons ===\n");
    for (int i = 0; i < n; i++) {
        printf("Enter details for Person %d:\n", i + 1);
        read(&Persons[i]);
    }

    // Print all records from the array
    printf("=== Printing records from Persons ===\n");
    for (int i = 0; i < n; i++) {
        printf("Person %d:\n", i + 1);
        print(&Persons[i]);
    }

    printf("Enter the number of additional records to store: ");
    scanf("%d", &m);
    getchar(); // Clear the newline character from the input buffer
    
    // Allocate memory for the Persons2 array
    Person *Persons2 = (Person *)malloc(m * sizeof(Person));

    // Read additional records and store them in Persons2 array
    printf("=== Enter additional records for Persons2 ===\n");
    for (int i = 0; i < m; i++) {
        printf("Enter details for Person2 %d:\n", i + 1);
        read(&Persons2[i]);
    }

    // Merge Persons and Persons2 to a new single array
    int mergedSize = n + m;
    Person *PersonsMerged = (Person *)malloc(mergedSize * sizeof(Person));
    memcpy(PersonsMerged, Persons, n * sizeof(Person));
    memcpy(&PersonsMerged[n], Persons2, m * sizeof(Person));

    // Print the records from the final array where nationality is "India"
    printf("=== Printing records from PersonsMerged with nationality as 'India' ===\n");
    for (int i = 0; i < mergedSize; i++) {
        if (strcmp(PersonsMerged[i].nationality, "India") == 0) {
            printf("PersonMerged %d:\n", i + 1);
            print(&PersonsMerged[i]);
        }
    }

    // Free the allocated memory
    free(Persons);
    free(Persons2);
    free(PersonsMerged);

    return 0;
}
