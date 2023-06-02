/*
* Section 2
* Roll No : 22MA10067
* Name : Utkarsh
* Assignment No : 9
* Description : Program to check password.
*/
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>


typedef struct user{
    char userID[100];
}User;

typedef struct password{
    char p[100]
}Password;



int main()
{
    int n,c;
    char a[100],b[100];
    printf("Enter max numbers of users:- ");
    scanf("%d",&n);
    do{
        printf("Choose one of the options\n");
        printf("\t1. Enroll\n");
        printf("\t2. Sign-In\n");
        printf("\t3. Exit\n");
        printf("Choice(1/2/3): ");
        scanf("%d",&c);
        if (c==1){
            printf("Enter User ID:- ");
            scanf("%s",a);
            printf("Enter Password:- ");
            scanf("%s",b);
        if (c==2){
        if (c==3){
            printf("Exiting");
            break;
        }while(c != 3)


        return 0;

    }




    return 0;
}

