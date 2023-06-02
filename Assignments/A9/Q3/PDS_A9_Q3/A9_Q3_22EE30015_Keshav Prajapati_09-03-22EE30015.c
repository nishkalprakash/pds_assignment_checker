/*
Section 2
Roll no. 22EE30015
Name : Keshav Prajapati
Assignment No. 9
Description : User-Login and Enrollment
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct user
{
    char* userid;
    char* passwd;
} user;

user enrolment(user u1)
{
    printf("Enter User ID : ");
    scanf("%s", u1.userid);

    printf("Enter Password : ");

    scanf("%s", u1.passwd);
    int passwdlen = strlen(u1.passwd);


    //Checking Password
    int has_digit = 0, has_special_char = 0, has_upper = 0, has_lower = 0;
    int is_valid = 1; // flag to check if password is valid

    for(int i = 0; i < passwdlen; i++)
    {
        if ((u1.passwd[i] >= 'A' && u1.passwd[i] <= 'Z'))
        {
            has_upper = 1;
        }

        else if ((u1.passwd[i] >= 'a' && u1.passwd[i] <= 'z'))
        {
            has_lower = 1;
        }

        else if (passwdlen < 12)
        {
            printf("Invalid Password:\nPassword must be atleast 12 characters long.\n");
            is_valid = 0;
            break;
        }

        else if (u1.passwd[i] == ' ')
        {
            printf("Invalid Password:\nSpaces are not allowed in password.\n");
            is_valid = 0;
            break;
        }

        else if (u1.passwd[i] >= '0' && u1.passwd[i] <= '9')
            has_digit = 1;

        else if (u1.passwd[i] == '$' || u1.passwd[i] == '#' || u1.passwd[i] == '&' || u1.passwd[i] == '%' || u1.passwd[i] == '@' || u1.passwd[i] == '~' || u1.passwd[i] == '!' || u1.passwd[i] == '*');
            has_special_char = 1;
    }

    if (is_valid)
    {
        if (!has_digit)
            printf("Invalid Password:\nPassword must have at least one digit.\n");

        else if (!has_special_char)
            printf("Invalid Password:\nPassword must have at least one special character.\n");

        else if (passwdlen < 12)
            printf("Invalid Password:\nPassword must be atleast 12 characters long.\n");

        else if (!has_upper)
            printf("Invalid Password:\nPassword must have at least one upper case letter.\n");

        else if (!has_lower)
            printf("Invalid Password:\nPassword must have at least one lower case letter.\n");

        else
            printf("Password is valid.\n");
    }
}

int main()
{
    user *ptr;
    int n, choice;
    printf("Enter max number of users : ");
    scanf("%d", &n);

    //Memory Allocation for number of records
    ptr = (user *)malloc(n*sizeof(user));

    for(int i = 0; i < n; i++)
    {
        printf("Choose one of the options : \n");
        printf("1. Enroll\n");
        printf("2. Sign-In\n");
        printf("3. Exit\n");
        scanf("%d", &choice);

        if(choice == 1)
        {
            user ui;
            enrolment(*(ptr+i));
        }

        else if(choice == 2)
        {
            //signin(*(ptr+i));
        }

        else if(choice == 3)
        {
            break;
        }

        else
        {
            printf("Please Enter a number from menu");
            i--;
        }
    }

    return 0;
}
