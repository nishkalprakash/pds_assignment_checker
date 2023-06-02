#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
// Structure to store user details

typedef struct {
    char userID[100];
    char password[100];
} User;

// Function to validate if a password meets the requirements

int isValidPassw(char *password) {
    int hasLower = 0, hasUpper = 0, hasDigit = 0, hasSpecial = 0;
    int len = strlen(password);

    if (len < 12)
        return 0;

    for (int i = 0; i < len; i++) {
        if (islower(password[i]))
            hasLower = 1;
        else if (isupper(password[i]))
            hasUpper = 1;
        else if (isdigit(password[i]))
            hasDigit = 1;
        else if (strchr("~!@#$%^&*", password[i]) != NULL)
            hasSpecial = 1;
    }

    return hasLower && hasUpper && hasDigit && hasSpecial;
}

// Function to enroll a new user

void enrollment(User *users, int numUsers) {
    char userID[100];
    char password[100];
    for(int j=0;j<numUsers;j++){
        printf("Enter userID of %d user: ",j+1);
        scanf("%s", userID);
        for (int i = 0; i < numUsers; i++) {
            if (strcmp(users[i].userID, userID) == 0) {
                printf("%s already exists.\n", userID);
                exit(0);
            }
        }

        printf("Enter password: ");
        scanf("%s", password);

        if (!isValidPassw(password)) {
            printf("Invalid Password.\n");
            exit(0);
        }

        strcpy(users[j].userID, userID);
        strcpy(users[j].password, password);
        printf("%s enrolled successfully.\n", users[j].userID);
    }
}

// Function to authenticate a user

void signin(User *users, int numUsers) {
    char userID[100];
    char password[100];

    printf("Enter userID: ");
    scanf("%s", userID);

    int found = 0;
    int index;
    for (int i = 0; i < numUsers; i++) {
        if (strcmp(users[i].userID, userID) == 0) {
            found = 1;
            index = i;
            break;
        }
    }

    if (!found) {
        printf("%s is not enrolled.\n", userID);
        exit(0);
    }

    printf("Enter password: ");
    scanf("%s", password);

    if (strcmp(users[index].password, password) == 0) {
        printf("%s successfully logged in.\n", userID);
        exit(0);
    } else {
        printf("Wrong password.\n");
        exit(0);
    }
}

int main() {
    int numUsers;
    printf("Enter Max no of users:- ");
    scanf("%d", &numUsers);

    User *users = (User*)malloc(numUsers * sizeof(User));

    int choice;
    while (1) {
        printf("\nChoose one of the option:\n");
        printf("1. Enroll\n");
        printf("2. Sign-in\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                enrollment(users, numUsers);
                break;
            case 2:
                signin(users, numUsers);
                break;
            case 3:
                exit(0);
            default:
                printf("Invalid choice. Please try again.\n");
                break;
        }
    }

    return 0;
}
