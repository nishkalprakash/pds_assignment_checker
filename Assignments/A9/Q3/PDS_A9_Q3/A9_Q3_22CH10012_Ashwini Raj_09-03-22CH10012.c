
#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_USERS 100
#define MAX_USERID_LENGTH 100
#define MAX_PASSWORD_LENGTH 100

// Defining Structure which stores user details
typedef struct {
    char userID[MAX_USERID_LENGTH];
    char password[MAX_PASSWORD_LENGTH];
} User;

// Function Checks whether password is valid
int isValidPassword(char password[]) {
    int length = strlen(password);
    int hasLower = 0, hasUpper = 0, hasNumber = 0, hasSymbol = 0;

    if (length < 12 || length > MAX_PASSWORD_LENGTH) {
        return 0;
    }

    for (int i = 0; i < length; i++) {
        if (isspace(password[i])) {
            return 0;
        }

        if (islower(password[i])) {
            hasLower = 1;
        } else if (isupper(password[i])) {
            hasUpper = 1;
        } else if (isdigit(password[i])) {
            hasNumber = 1;
        } else if (strchr("[!@#$%&\"]", password[i])) {
            hasSymbol = 1;
        }
    }

    return (hasLower && hasUpper && hasNumber && hasSymbol);
}

//Function checks whether enrolled
void enrollment(User users[], int *numUsers) {
    char userID[MAX_USERID_LENGTH];
    char password[MAX_PASSWORD_LENGTH];

    printf("Enter a userID: ");
    scanf("%s", userID);

    for (int i = 0; i < *numUsers; i++) {
        if (strcmp(users[i].userID, userID) == 0) {
            printf("%s already exists.\n", userID);
            return;
        }
    }

    printf("Enter a password: ");
    scanf("%s", password);

    if (!isValidPassword(password)) {
        printf("Invalid Password.\n");
        return;
    }

    strcpy(users[*numUsers].userID, userID);
    strcpy(users[*numUsers].password, password);

    printf("%s enrolled successfully.\n", userID);
    (*numUsers)++;
}

// Function authenticates user
void signin(User users[], int numUsers) {
    char userID[MAX_USERID_LENGTH];
    char password[MAX_PASSWORD_LENGTH];

    printf("Enter your userID: ");
    scanf("%s", userID);

    int found = 0;
    int index = -1;

    for (int i = 0; i < numUsers; i++) {
        if (strcmp(users[i].userID, userID) == 0) {
            found = 1;
            index = i;
            break;
        }
    }

    if (!found) {
        printf("%s is not enrolled.\n", userID);
        return;
    }

    printf("Enter your password: ");
    scanf("%s", password);

    if (strcmp(users[index].password, password) == 0) {
        printf("%s successfully logged in.\n", userID);
    } else {
        printf("Wrong password.\n");
    }
}

// Function to display the menu and handle user input
void displayMenu(User users[], int *numUsers) {
    int choice;

    do {
        printf("\nMenu:\n");
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
                signin(users, *numUsers);
                break;

            case 3:
                printf("Exiting the program.\n");
                return;

            default:
                printf("Invalid choice. Please try again.\n");
                break;
        }
    } while (1);
}

int main() {
    User users[MAX_USERS];
    int numUsers = 0;
    int numEnroll;

    printf("Enter the number of users to enroll: ");
    scanf("%d", &numEnroll);

    if (numEnroll > MAX_USERS) {
        printf("Maximum number of users exceeded.\n");
        return 1;
    }

    if (numEnroll > MAX_USERS) {
        printf("Maximum number of users exceeded.\n");
        return 1;
    }



    return 0;
}


