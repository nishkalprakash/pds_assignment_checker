// C Program for user login and enrollment using structures
// Code Creator: Nishkal Prakash (nishkal@iitkgp.ac.in)

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_LENGTH 100

// Structure to store userID and password
typedef struct
{
    char *userID;
    char *password;
} User;

void terminate()
{
    printf("**EXITING**\n");
    exit(0);
}

// Function to check if userID exists
int check_userID(User *users, int user_count, char *userID)
{
    // Iterate over all users
    for (int i = 0; i < user_count; i++)
    {
        // Check if userID matches
        if (strcmp(users[i].userID, userID) == 0)
        {
            // Return 1 if userID exists
            return 1;
        }
    }
    // Return 0 if userID does not exist
    return 0;
}

// Function to check if password is valid
void validate_password(char *password)
{
    // Check if password is less than 12 characters
    if (strlen(password) < 12)
    {
        // Print password must be at least 12 characters message
        printf("Invalid Password\n");
        terminate();
    }
    // Check if password contains at least one lower case, upper case, number and special symbol
    int lower = 0, upper = 0, number = 0, special = 0;
    for (int i = 0; i < strlen(password); i++)
    {
        if (password[i] >= 'a' && password[i] <= 'z')
            lower = 1;
        else if (password[i] >= 'A' && password[i] <= 'Z')
            upper = 1;
        else if (password[i] >= '0' && password[i] <= '9')
            number = 1;
        else if (strchr("~!@#$%%^&*", password[i]))
            special = 1;
    }
    if (!(lower && upper && number && special))
    {
        // Print password must contain at least one lower case, upper case, number and special symbol message
        printf("Invalid Password\n");
        terminate();
    }
}
// Function to check if password matches and sign in
void sign_in(User *users, int user_count, char *userID, char *password)
{
    // Iterate over all users
    for (int i = 0; i < user_count; i++)
    {
        // Check if userID matches
        if (strcmp(users[i].userID, userID) == 0)
        {
            // Check if password matches
            if (strcmp(users[i].password, password) == 0)
            {
                // print <userID> signed in successfully if password matches
                printf("%s signed in successfully.\n", userID);
                terminate();
            }
        }
    }
    // terminate if password does not match
    printf("Incorrect Password\n");
    terminate();
}

// Function to enroll a user
void enroll(User *users, int user_count, char *userID, char *password, int MAX_USERS)
{
    // Check if user_count is less than MAX_USERS
    if (user_count < MAX_USERS)
    {
        // Allocate memory for userID and password
        users[user_count].userID = (char *)calloc(strlen(userID) + 1, sizeof(char));
        users[user_count].password = (char *)calloc(strlen(password) + 1, sizeof(char));
        // Copy userID to users[user_count].userID
        strcpy(users[user_count].userID, userID);
        // Copy password to users[user_count].password
        strcpy(users[user_count].password, password);
        // Print <userID> enrolled successfully
        printf("%s enrolled successfully\n", userID);
    }
    else
    {
        // Print enrollment unsuccessful message
        printf("Max Users Capacity Reached!\n");
        terminate();
    }
}

// Main Function
int main()
{
    // Ask user for max number of users
    int MAX_USERS, user_count = 0;
    char temp_userID[MAX_LENGTH], temp_password[MAX_LENGTH];
    printf("Enter maximum number of users: ");
    scanf("%d", &MAX_USERS);
    // Allocate memory for users
    User *users = (User *)calloc(MAX_USERS, sizeof(User));

    // Write a menu driven program
    int choice;

    do
    {
        printf("\t(1) Enroll\n\t(2) Sign-in\n\t(3) Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar(); // To consume the newline character
        switch (choice)
        {
        case 1:
            // Enroll
            // Ask user for userID and store in temp_userID
            printf("Enter userID: ");
            scanf("%s", temp_userID);
            // Check if user exists
            if (check_userID(users, user_count, temp_userID))
            {
                printf("%s already exists\n", temp_userID);
                terminate();
            }

            // Store password in temp_password
            printf("Enter password: ");
            scanf("%s", temp_password);
            validate_password(temp_password);
            enroll(users, user_count, temp_userID, temp_password, MAX_USERS);
            // Increment user_count
            user_count++;
            break;
        case 2:
            // Sign-in
            // Ask user for userID and store in temp_userID
            printf("Enter userID: ");
            scanf("%s", temp_userID);
            // Check if user exists
            if (!check_userID(users, user_count, temp_userID))
            {
                printf("%s is not enrolled\n", temp_userID);
                terminate();
            }
            // Ask user for password and store in temp_password
            printf("Enter password: ");
            scanf("%s", temp_password);
            // Call signIn function
            validate_password(temp_password);
            sign_in(users, user_count, temp_userID, temp_password);
            break;

        default:
            // Print Invalid Input
            printf("Invalid Input\n");
            break;
        }
    } while (choice != 3);
}