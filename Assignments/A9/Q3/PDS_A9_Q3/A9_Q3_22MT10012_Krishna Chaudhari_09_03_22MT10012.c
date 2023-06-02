#include<stdio.h>

typedef struct user{
    char userid[100];
    char password[100];
};
int main()
{
    int n,i;
    printf("Enter MAX number of User : ");
    scanf("%d",&n);
    printf("Choose one of the option :\n 1. Enroll \n 2. sign in \n 3. Exit \n");
    scanf("%d",&i);
}
