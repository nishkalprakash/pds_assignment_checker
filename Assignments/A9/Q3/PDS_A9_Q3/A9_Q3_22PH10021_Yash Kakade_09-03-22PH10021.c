
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct User{
    char userID[100];
    char password[100];

};

int j=0;

void enrolment(struct User *data[]){
    //struct User data[10];
    printf("\nEnter userID: ");
    scanf("%s",data[j]->userID);
    if(j>0){
    for(int k=0;k<j;k++){
        if(strcmp(data[k]->userID,data[j]->userID)==1){
            printf("\n%s already exists",data[j]->userID)
        }
    }
    }
  int sign

}

int main(){
    struct User *data[10];
    int n,option,i=0;
    printf("Enter max no. of users: ");
    scanf("%d",&n);

    while(i<n){
    printf("3. Exit");

    printf("\nEnter your choice: ");
    scanf("%d",&option);

    if(option==1){
        enrolment(data,n);
    }
    else if(option==2){
        int k=signin(data,n);
        if(k=1){
            printf("\nInvalid password");
            break;

        }
        else if(k==2){
            printf("\n%s not enrolled",data[j]->userID);
            j++;
            break;
        }
    }
    else break;

    }


return 0;

}      printf("\n\nChoose one of the following options: ");
    printf("1. Enroll");
    printf("2. Sign-in");
    printf("3. Exit");

    printf("\nEnter your choice: ");
    scanf("%d",&option);

    if(option==1){
        enrolment(data,n);
    }
    else if(option==2){
        int k=signin(data,n);
        if(k=1){
            printf("\nInvalid password");
            break;

        }
        else if(k==2){
            printf("\n%s not enrolled",data[j]->userID);
            j++;
            break;
        }
    }
    else break;

    }


return 0;

}
