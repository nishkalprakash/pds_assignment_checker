#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
struct User {

    char userID[100];
    char password[100];

};
bool isUserIDValid(const char *userID){

    if (strchr(userID, ' ') != NULL) {

        return false;

    }

    return true;

}
bool isPasswordValid(const char *password) {
    if (strchr(password, ' ') != NULL) {

        return false;

    }

    if (strlen(password) < 12) {

        return false;

    }

    bool hasLower = false, hasUpper = false, hasNumber = false, hasSpecial = false;

    for (int i = 0; i < strlen(password); i++) {

        char c = password[i];

        if (c >= 'a' && c <= 'z') {

            hasLower = true;

        } else if (c >= 'A' && c <= 'Z') {

            hasUpper = true;

        } else if (c >= '0' && c <= '9') {

            hasNumber = true;

        } else if (c == ' ' || c == '!' || c == '@' || c == '#' || c == '$' || c == '%' || c == '^' || c == '&' || c == '*') {

            hasSpecial = true;

        }

    }

    if (!hasLower || !hasUpper || !hasNumber || !hasSpecial) {

        return false;

    }

    return true;

}
void enrollment(struct User *users, int numUsers) {

    char userID[100];

    char password[100];


    printf("Enter the userID: ");

    scanf("%s", userID);

    for (int i = 0; i < numUsers; i++) {

        if (strcmp(users[i].userID, userID) == 0) {

            printf("%s> already exists.\n", userID);

            exit(0);

        }

    }


    printf("Enter the password: ");

    scanf("%s", password);

    if (!isUserIDValid(userID) || !isPasswordValid(password)) {

        printf("Invalid Password.\n");
        printf("** EXITING**");
        exit(0);

    }

    strcpy(users[numUsers].userID, userID);

    strcpy(users[numUsers].password, password);


    printf("%s> enrolled successfully.\n", userID);

}
void signin(struct User *users, int numUsers) {

    char userID[100];

    char password[100];


    printf("Enter the userID: ");

    scanf("%s", userID);


    bool userFound = false;

    int userIndex = -1;

    for (int i = 0; i < numUsers; i++) {

        if (strcmp(users[i].userID, userID) == 0) {

            userFound = true;

            userIndex = i;

            break;

        }

    }


    if (!userFound) {

        printf("%s> is already exist.\n", userID);

        exit(0);

    }


    printf("Enter the password: ");

    scanf("%s", password);
    if (!isPasswordValid(password)) {

        printf("Invalid Password.\n");

        exit(0);

    }

    if (strcmp(users[userIndex].password, password) == 0) {

        printf("%s> successfully signed in.\n", userID);

    } else {

        printf("Wrong password.\n");

    }

}
void showMenu() {
    printf("choose one of the options\n");
    printf("1. Enroll\n");

    printf("2. Sign-in\n");

    printf("3. Exit\n");

}
int main() {

    int numUsers;

    printf("Enter MAX no of users:- ");

    scanf("%d", &numUsers);


    struct User *users = (struct User *)malloc(numUsers * sizeof(struct User));


    int choice;

    do {

        showMenu();

        scanf("%d", &choice);


        switch (choice) {

            case 1:

                enrollment(users, numUsers);

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

    } while (1);
    free(users);
    return 0;
}



