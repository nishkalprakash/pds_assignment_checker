#include<stdio.h>

typedef struct
{
    char userID[100];
    char password[100];
} User;

User enrolment(User u)
{
    printf("Enter User ID:- ");
    scanf("%s",&u.userID);
}

User signIn(User u)
{
    printf("Enter User ID:- ");
    scanf("%s",&u.userID);
}

int main()
{
    int n,i,menu;
    User u[10];
    printf("Enter MAX no of users:- ");
    scanf("%d",&n);
    for (i=0;i<n;++i)
    {
        printf("Choose one of the options_\n      1_ Enroll\n      2_ Sign-in\n      3_ Exit\n");
        scanf("%d",&menu);
        if(menu==1) enrolment(u[i]);
        else if (menu==2) signIn(u[i]);
        else if(menu==3)
        {
            printf("** EXITING **");
            break;
        }
    }
    return 0;
}
