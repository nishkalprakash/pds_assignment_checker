#include<stdio.h>
struct user{
 char* userID;
 char* password;
};

int main(){
    int n, i;
    char a[50], b[50];
    printf("enter max no of users:-");
    scanf("%d", &n);
    printf("Choose one of the options.\n");
    printf("         1. Enroll\n");
    printf("         2. Sign-in\n");
    printf("         3. Exit\n");
    scanf("%d",&i);
    printf("Enter user ID:- ");
    scanf("%s",a);
    printf("Enter password:- ");
    scanf("%s",b);


    printf("Choose one of the options.\n");
    printf("         1. Enroll\n");
    printf("         2. Sign-in\n");
    printf("         3. Exit\n");
    scanf("%d",&i);
    printf("Enter user ID:- ");
    scanf("%s",a);
    printf("Enter password:- ");
    scanf("%s",b);

    return 0;



}
