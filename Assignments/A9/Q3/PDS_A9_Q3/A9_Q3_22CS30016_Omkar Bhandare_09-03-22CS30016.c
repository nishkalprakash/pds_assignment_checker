/*
Section 2
Roll No. - 22CS30016
Name - Omkar Vijay Bhandare
Assignment No. - 09
Description -
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct
{
    char userID[100];
    char password[100];
} data;

int isCorrectPassword(data *person)
{
    int upp = 0, low = 0, num = 0, sym = 0;
    for(int i=0; person->password[i] != '\0'; i++)
    {
        if(person->password[i]>'a' && person->password[i]<'z') low++;
        if(person->password[i]>'A' && person->password[i]<'Z') upp++;
        if(person->password[i]>'0' && person->password[i]<'9') num++;
        if(person->password[i]=='~'|| person->password[i]=='!' || person->password[i] == '@'||person->password[i]=='#'||person->password[i]=='$'||person->password[i]=='%'||person->password[i]=='&'||person->password[i]=='*') sym++;
    }
    if(upp==0||low==0||num==0||sym==0) return 0;
    else return 1;
}

void enrolment(data *users, int n)
{
    int i,j;
    data enrol;
    printf("Enter userID : ");
    scanf("%s", &enrol.userID);
    for(i=0; i<n; i++)
    {
        if(strcmp(users[i].userID, enrol.userID)==0)
        {
            printf("%s already exists", enrol.userID);
            exit(1);
        }
    }
    i--;

    for(j=i; j<n; j++)
    {
        if(strcmp(users[j].userID,"\0")==0) strcpy(users[j].userID,enrol.userID);
    }
    j--;

    printf("Enter Password : ");
    scanf("%s", enrol.password);
    if(isCorrectPassword(&enrol)) strcpy(users[j].password,enrol.password);
    else
    {
        printf("Invalid Password");
        exit(1);
    }
    printf("%s enrolled successfully\n", enrol.userID);
}

void signIn(data *users, int n)
{
    int i;
    data input;
    printf("Enter UserID : ");
    scanf("%s", &input.userID);
    for(i=0; i<n; i++)
    {
        if(strcmp(users[i].userID, input.userID)==0)
        {
            exit(1);
        }
    }

    if(i==n)
    {
        printf("%s is not enrolled\n", input.userID);
        exit(1);
    }

    i--;
    printf("Enter Password : ");
    scanf("%s", &input.password);
    if(strcmp(users[i].password,input.password)==0) printf("%s signed in successfully", input.userID);
    else
    {
        printf("Wrong Password\n");
        exit(1);
    }
}
int main()
{
    int n;
    printf("Enter MAX no. of users :- ");
    scanf("%d", &n);
    data users[n];

    while(1)
    {
        int select;
        printf("Choose one of the options : \n");
        printf("1. Enroll\n2. Sign-in\n3. Exit\n");
        scanf("%d", &select);
        switch(select)
        {
        case 1 :
            enrolment(users,n);
            break;
        case 2 :
            signIn(users,n);
            break;
        case 3 :
            exit(1);
        default :
            printf("Invalid Input");
        }
    }
}
