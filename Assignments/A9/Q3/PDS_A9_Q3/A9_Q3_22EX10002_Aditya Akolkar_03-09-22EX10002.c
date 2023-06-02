#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 100

typedef struct User
{
    char* userid;
    char* password;
} user;

void enrollment(user A)
{
    printf("Enter User ID:-");
    scanf("%s", A.userid);
    printf("Enter Password:-");
    scanf("%s", A.password);
    if(pass_check(A.password))
    {
        printf("%s enrolled succesfully.", A.userid);
    }
}

void signin(user A)
{
    printf("Enter User ID:-");
    scanf("%s", A.userid);
    printf("Enter Password:-");
    scanf("%s", A.password);
    if(pass_check(A.password) || strcmp(A.password, A.password));
}


void menu(int n)
{
    user *U_arr;
    printf("Enter MAX no of users:-");
    scanf("%d", &n);
    U_arr = (struct User*)malloc(n * sizeof(struct User));
    for(int i=0; i<n; i++)
    {
        int opt;
        printf("Choose one of the options.\n");
        printf("\t 1.Enroll\n");
        printf("\t 2.Sign-in\n");
        printf("\t 3.Exit\n");
        scanf("%d", &opt);


        if(n == 1)
        {
            enrollment(U_arr[i]);
            return;
        }
        if(n == 2)
        {
            signin(U_arr[i]);
            return;
        }
        if(n == 3)
        {
            printf("**EXITING**");
            return;
        }
         if(n!=1 || n!=2 || n!=3)
        {
            printf("No such Option");
            return;
        }

    }
}




int pass_check(char* a)
{
    int num = 0, special_char = 0;
    int l = 0;
    int cap=0;
    int small=0;
    char c;
    user A;
    if(strlen(a)<12 || strlen(a) >MAX)
    {
        printf("Invalid Password");
    }
    do
    {
        scanf("%c", &c);
        l++;

        if(c>= 'a' && c<='z')
            small = 1;
        else if (c >= 'A' && c <= 'Z')
            cap = 1;
        else if (c == ' ')
        {
            printf("Invalid Password\n");
            break;
        }
        else if (c >= '0' && c <= '9')
            num = 1;
        else if (c == '$' || c == '#' || c == '&' || c == '%' || c == '@')
            special_char = 1;
    }
    while(l<strlen(A.password));

        if(num && cap && small && special_char)
    {
        return 1;
    }
    else
    {
        printf("Invalid password \n **EXITING**");
            return 0;
        }
}

int main()
{
    int n;

    menu(n);

}


