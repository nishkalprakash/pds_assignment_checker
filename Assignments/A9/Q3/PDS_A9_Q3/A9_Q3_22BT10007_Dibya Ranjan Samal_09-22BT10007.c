#include <stdio.h>

#include <stdlib.h>

#include <string.h>

#include <ctype.h>


#define MAX_USERS 100

#define MAX_ID_LENGTH 100

#define MAX_PASSWORD_LENGTH 100


// Structure to store user details

struct User {

    char userID[MAX_ID_LENGTH];

    char password[MAX_PASSWORD_LENGTH];

};


// Function to validate password

int validatePassword(char *password) {

    int length = strlen(password);

    int hasLower = 0, hasUpper = 0, hasDigit = 0, hasSpecial = 0;



    if (length < 12)

        return 0;



    for (int i = 0; i < length; i++) {

        if (islower(password[i]))

            hasLower = 1;

        else if (isupper(password[i]))

            hasUpper = 1;

        else if (isdigit(password[i]))

            hasDigit = 1;

        else if (password[i] == '*' || password[i] == '~' || password[i] == '@' || password[i] == '#' ||

                 password[i] == '$' || password[i] == '%' || password[i] == '&' || password[i] == '\"')

            hasSpecial = 1;

    }



    return (hasLower && hasUpper && hasDigit && hasSpecial);

}


// Function to enroll a new user

void enrollment(struct User users[], int *numUsers) {

    char userID[MAX_ID_LENGTH];

    char password[MAX_PASSWORD_LENGTH];



    printf("Enter userID: ");

    scanf("%s", userID);



    // Check for duplicate userID

    for (int i = 0; i < *numUsers; i++) {

        if (strcmp(users[i].userID, userID) == 0) {

            printf("%s already exists.\n", userID);

            exit(0);

        }

    }



    printf("Enter password: ");

    scanf("%s", password);



    if (!validatePassword(password)) {

        printf("Invalid Password.\n");

        exit(0);

    }



    strcpy(users[*numUsers].userID, userID);

    strcpy(users[*numUsers].password, password);



    printf("%s enrolled successfully.\n", userID);

    (*numUsers)++;

}


// Function to authenticate a user

void signin(struct User users[], int numUsers) {

    char userID[MAX_ID_LENGTH];

    char password[MAX_PASSWORD_LENGTH];



    printf("Enter userID: ");

    scanf("%s", userID);



    for (int i = 0; i < numUsers; i++) {

        if (strcmp(users[i].userID, userID) == 0) {

            printf("Enter password: ");

            scanf("%s", password);



            if (strcmp(users[i].password, password) == 0) {

                printf("%s successfully signed in.\n", userID);

                exit(0);

            } else {

                printf("Wrong password.\n");

                exit(0);

            }

        }

    }



    printf("%s is not enrolled.\n", userID);

    exit(0);

}


int main() {

    struct User users[MAX_USERS];

    int numUsers = 0;

    int choice, numEnroll;



    printf("Enter the number of users to enroll: ");

    scanf("%d", &numEnroll);



    while (1) {

        printf("\nMenu:\n");

        printf("1. Enroll\n");

        printf("2. Sign-in\n");

        printf("3. Exit\n");

        printf("Enter your choice: ");

        scanf("%d", &choice);



        switch (choice) {

            case 1:

                if (numUsers < numEnroll)

                    enrollment(users, &numUsers);

                else

                    printf("Maximum number of users enrolled.\n");

                break;

            case 2:

                signin(users, numUsers);

                break;

            case 3:

                printf("Exiting the program.\n");

                exit(0);

            default:

                printf("Invalid choice. Please try again.\n");

        }

    }



    return 0;

}
