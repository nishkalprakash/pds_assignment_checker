#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX_LENGTH 100

typedef struct {
    char userID[MAX_LENGTH];
    char password[MAX_LENGTH];
} User;

int isAlphaNumeric(const char *str) {
    while (*str) {
        if (!isalnum(*str))
            return 0;
        str++;
    }
    return 1;
}

int isValidPassword(const char *password) {
    int hasLower = 0, hasUpper = 0, hasNumber = 0, hasSymbol = 0;
    while (*password) {
        if (islower(*password))
            hasLower = 1;
        else if (isupper(*password))
            hasUpper = 1;
        else if (isdigit(*password))
            hasNumber = 1;
        else if (strchr("~!@#$%^&*", *password))
            hasSymbol = 1;
        password++;
    }
    return hasLower && hasUpper && hasNumber && hasSymbol;
}

void enrolment(User *users, int numUsers) {
    char userID[MAX_LENGTH];
    char password[MAX_LENGTH];

    printf("Enter userID: ");
    scanf("%s", userID);

    // Check for duplicate userID
    for (int i = 0; i < numUsers; i++) {
        if (strcmp(users[i].userID, userID) == 0) {
            printf("%s already exists.\n", userID);
            exit(0);
        }
    }

    printf("Enter password: ");
    scanf("%s", password);

    // Check for valid password
    if (!isValidPassword(password)) {
        printf("Invalid Password.\n");
        exit(0);
    }

    // Enrol new user
    strcpy(users[numUsers].userID, userID);
    strcpy(users[numUsers].password, password);
    printf("%s enrolled successfully.\n", userID);
}

void signin(User *users, int numUsers) {
    char userID[MAX_LENGTH];
    char password[MAX_LENGTH];

    printf("Enter userID: ");
    scanf("%s", userID);

    // Check if userID is enrolled
    int found = 0;
    int index = 0;
    for (int i = 0; i < numUsers; i++) {
        if (strcmp(users[i].userID, userID) == 0) {
            found = 1;
            index = i;
            break;
        }
    }

    if (found) {
        printf("Enter password: ");
        scanf("%s", password);

        // Check if password matches
        if (strcmp(users[index].password, password) == 0) {
            printf("%s successfully logged in.\n", userID);
            exit(0);
        } else {
            printf("Wrong password.\n");
            exit(0);
        }
    } else {
        printf("%s is not enrolled.\n", userID);
        exit(0);
    }
}

int main() {
    int numUsers;

    printf("Enter the number of users to enrol: ");
    scanf("%d", &numUsers);

    User *users = (User *) malloc(numUsers * sizeof(User));

    while (1) {
        printf("\nMenu:\n");
        printf("1. Enroll\n");
        printf("2. Sign-in\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");

        int choice;
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                enrolment(users, numUsers);
                break;
            case 2:
                signin(users, numUsers);
                break;
            case 3:
                free(users);
                exit(0);
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}
