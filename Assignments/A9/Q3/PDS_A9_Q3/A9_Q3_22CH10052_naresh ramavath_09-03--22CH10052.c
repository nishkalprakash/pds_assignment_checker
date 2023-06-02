
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_USERS 100
#define MAX_USER_ID_LENGTH 100
#define MAX_PASSWORD_LENGTH 100



typedef struct {

    char userID[MAX_USER_ID_LENGTH];
    char password[MAX_PASSWORD_LENGTH];

} User;

int isLowercase(char c) {

    return c >= 'a' && c <= 'z';

}

int isUppercase(char c) {

    return c >= 'A' && c <= 'Z';

}

int isDigit(char c) {

    return c >= '0' && c <= '9';

}

int isSpecialSymbol(char c) {

    return c == '~' || c == '!' || c == '@' ||
           c == '#' || c == '$' || c == '%' ||
           c == '&' || c == '*';

}

int isValidPassword(const char *password) {

    int hasLower = 0, hasUpper = 0, hasDigit = 0, hasSpecial = 0;
    int length = strlen(password);


if (length < 12)
        return 0;

    for (int i = 0; i < length; i++) {

        if (isLowercase(password[i]))
            hasLower = 1;

        else if (isUppercase(password[i]))
            hasUpper = 1;


else if (isDigit(password[i]))
            hasDigit = 1;
        else if (isSpecialSymbol(password[i]))
            hasSpecial = 1;
    }

return hasLower && hasUpper && hasDigit && hasSpecial;
}


void enrolment(User users[], int numUsers) {

    char userID[MAX_USER_ID_LENGTH];
    char password[MAX_PASSWORD_LENGTH];

printf("Enter the UserID: ");
    scanf("%s", userID);
 for (int i = 0; i < numUsers; i++) {

        if (strcmp(users[i].userID, userID) == 0) {

            printf("%s already exists.\n", userID);
            exit(0);

        }
    }

printf("Enter Password: ");
    scanf("%s", password);


  if (!isValidPassword(password)) {

        printf("Invalid Password.\n");
        exit(0);
    }

strcpy(users[numUsers].userID, userID);
    strcpy(users[numUsers].password, password);

    printf("%s enrolled successfully.\n", userID);
}

void signin(User users[], int numUsers) {

    char userID[MAX_USER_ID_LENGTH];
    char password[MAX_PASSWORD_LENGTH];


printf("Enter UserID: ");
    scanf("%s", userID);


  int index = -1;
    for (int i = 0; i < numUsers; i++) {

        if (strcmp(users[i].userID, userID) == 0) {

            index = i;
            break;
        }
    }



    if (index == -1) {

        printf("%s is not enrolled.\n", userID);
        exit(0);
    }


      printf("Enter Password: ");
    scanf("%s", password);

    if (strcmp(users[index].password, password) == 0) {

        printf("%s Successfully logged in.\n", userID);
    }
     else {
        printf("Wrong password.\n");
    }
}

  int main() {
    User users[MAX_USERS];
    int numUsers;

    printf("Enter max no of users: ");
    scanf("%d", &numUsers);

 int choice;

    do {
        printf("Choose any  one of the options only:\n");
        printf("1. Enroll\n");
        printf("2. Sign-in\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                enrolment(users, numUsers);
                break;
            case 2:
                signin(users, numUsers);
                break;
            case 3:
                exit(0);
            default:
                printf("Invalid choice.\n");
                exit(0);

     }
    } while (1);

    return 0;
}














