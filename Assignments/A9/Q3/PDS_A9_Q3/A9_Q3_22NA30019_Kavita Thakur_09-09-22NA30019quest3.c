/*
* Section 2
* Roll No.: 22NA30019
* Name : Kavita Thakur
* Assignment No.: 9
* Description :
*/
#include<stdio.h>
#include<stdlib.h>

struct user{
 char* userID[100];
 char* password[100];

};

void enrollment();
int checkpassword(struct user u);

int main(){
  int n,choice;
  printf("Enter maximum number of user\n");
  printf("Choose one of the following\n 1.Enroll\n 2.Sign-in\n 3.Exit\n");
  printf("Enter your choice : ");
  scanf("%d",&choice);

  if(choice==1){
    enrollment();
  }


return 0;
}

void enrollment(){
   printf("enter userID");


}

