#include<stdio.h>
struct user
{
    char *userID[100];
    char *password[100];
};
int main()
{
    int n,p;
    printf("enter the number of users\n");
    scanf("%d",&n);
    printf("choose one of the following options\n");
    scanf("%d",&p);
    if(p==1)
    {
        printf("enroll\n");
    }
    if(p==2)
    {
        printf("sign-in\n");
    }
    if(p==3)
    {
        printf("exit\n");
    }
    return 0;
}
