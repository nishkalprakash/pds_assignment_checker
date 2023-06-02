/*
*Section 2
*Name: Sagarneel Ghoshal
*Roll No.:22PH10040
*Assignment-9
*Description- Fibonacci Number
*/


#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct User{
    char userID[100];
    char password[100];

};

int j=0;

void enrolment(struct User *data[],int n){
    //struct User data[10];
    int valid=0;
    printf("\nEnter UsedID: ");
    scanf("%s",data[j]->userID);
    if(j>0){
        for(int k=0;k<j;k++){
            if(strcmp(data[k]->userID,data[j]->userID)==1){
                printf("\n%s already exists",data[j]->userID);
                valid=0;
                break;
            }
        }
    }
    if(valid!=0){
        printf("\nEnter password: ");
        scanf("%s",data[j]->password);
        for(int k=0;)
    }

}

int signin(struct User *data[],int n){
    printf("")
}

int main(){
    struct User *data[10];
    int n,option,i=0;
    printf("Enter MAX no. of users:- ");
    scanf("%d",&n);

    while(i<n){
        printf("\n\nChoose on of the following options: ");
        printf("\n1. Enroll");
        printf("\n2. Sign-in");
        printf("\n3. Exit");

        printf("\nEnter your choice: ");
        scanf("%d",&option);


        if(option==1){
                enrolment(data,n);
                j++;
        }
        else if(option==2){
            int k=signin(data,n);
            if(k==1){
                printf("\nInvalid password");
                j++;
                break;
            }
            else if(k==2){
                printf("\n%s is not enrolled",data[j]->userID);
                j++;
                break;
            }
        }
        else break;

    }

    printf("\n*EXITING**");

    return 0;

}
