#include <stdio.h>
typedef struct User {
    char *userID;
    char *password;
    } User;
void enrolment(User *ptr, int n)
{
    static int i = 0;
    ++i;
    printf(" ");
    scanf("%s", ptr[i]);

}
void signIn()
{

}
int main()
{
    int n, opt;
    printf("Max no of users :");
    scanf("%d", &n);
    User *ptr;
    ptr = (int *) malloc((n)*sizeof(User));
    printf("Menu Choose : ");
    scanf("%d", &opt);
    if(opt==1) enrolment(ptr, n);
    else if(opt==2) signIn();
    else if(opt==3){
        printf(" **Exiting **");
        _Exit;
    }
}
