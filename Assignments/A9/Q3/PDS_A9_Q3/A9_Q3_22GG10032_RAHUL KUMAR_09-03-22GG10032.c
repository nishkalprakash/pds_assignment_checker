/*
* Section- 02
* Name - Rahul kumar
* Roll no. - 22GG10032
* Assignment - 09
* Question Number - 03
*/
#include<stdio.h>
typedef struct user{
    char userID[100];
    char password[100];
}user;

int main(){
    int n,m;
    printf("Enter the MAX no. of users\n");
    scanf("%d",&n);
    printf("Choose one of the options :\n");
    printf("1.Enroll\n");
    printf("2.Sign-in\n");
    printf("3.Exit\n");
    scanf("%d",&m);
     return 0;
}
