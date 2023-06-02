#include <stdio.h>
#include <string.h>

struct user{

    char userid[100];
    char password[100];
};

    void enrolment(char userid);
    void signin(char password);


int main(){

    struct user n;

    printf("Enter your user ID : ");
    scanf("%s", &n.userid);

    enrolment(n.userid);


    printf("Enter your password");





    return 0;
}

    void enrolment(char userid){

        printf("Enter user id : ");
        scanf("%s", &n.userid);

        printf("User id already exist");


}

void password(char password){



}
