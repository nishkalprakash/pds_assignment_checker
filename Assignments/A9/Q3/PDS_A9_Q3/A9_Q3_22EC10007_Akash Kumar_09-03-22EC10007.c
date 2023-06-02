/*
* Name: Akash Kumar
* Roll no.: 22EC10007
* Section : 2
* Assignment : 9
* Question: 3
* Description:
*/
#include <stdio.h>

typedef struct user {
    char userID[100];
    char password[100];

} user;

user enrolment(user a)
{
    printf("Enter User ID\n");
    scanf("%s", a.userID);

    printf("Enter password");
    scanf("%s", a.password);

    return a;
}

user signin(user myuser)
{
    user a;
    printf("Enter user ID\n");
    scanf("%s", a.userID);

    printf("Enter password");
    scanf("%s", a.password);
}



int main()
{
    int n;
    printf("Enter the no. of users n\n");
    scanf("%d", &n);

    printf("choose one of the options\n");
    printf("1. Enroll\n");
    printf("2. Sign in\n");
    printf("3. Exit \n");

    int choice;
    scanf("%d", &choice);

    user myuser;

    if (choice == 1)
    {
        myuser = enrolment(myuser);
    }

    if (choice == 2)
    {
        myuser = signin(myuser);
    }


    return 0;
}
