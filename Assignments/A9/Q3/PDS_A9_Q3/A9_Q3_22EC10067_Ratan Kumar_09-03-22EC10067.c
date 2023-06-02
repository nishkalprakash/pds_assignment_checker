/* Name : Ratan Kumar
Roll No.: 22EC10067
sec: 2
problem no. :3*/
#include<stdio.h>
#include<string.h>
typedef struct User{
char userID[50];
char password[30];
}User;
User a;
//strcpy(a.userID,"22EC10067");
//strcpy(a.password,"ABcdef100@#");
/*void enrolment(int n){
User a
    scanf("%[^\n]s",)
}*/
int main(){
    int n,a;
    printf("Enter MAX no of users:-");
    scanf("%d",&n);
    printf("\nChoose one of the options\n");
    printf("1. Enroll\n");
     printf("2. Sign-in\n");
      printf("3. Exit\n");
    scanf("%d",&a);

return 0;
}
