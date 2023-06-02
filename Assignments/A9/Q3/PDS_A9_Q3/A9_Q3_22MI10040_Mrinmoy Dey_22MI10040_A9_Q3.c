/*
Name :: Mrinmoy Dey
Roll :: 22MI10040
Section :: 2
Assignment :: 9
Question :: 3
*/
#include <stdio.h>
#include <string.h>

typedef struct user{
 char userID[100];
 char password[100];
}user;
int check(user users[],int n,char userid[]){
    for (int i=0;i<n;i++){
        if (strcmp(users[i].userID,userid)==0) return 1;
    }
    return 0;
}
void enrollment(user users[],int n){
    char userid[100];
    char password[100];
    int ctr=0;
    int ctr1=0;
    int c1=0,c2=0,c3=0,c4=0;
    int flag;
    printf("Enter User ID:- ");
    scanf("%s",userid);
    flag = check(users,n,userid);
    if (flag) printf("%s already exists",userid);
    else{
        for (int i=0;i<100;i++){
            if (userid[i]==" ") ctr++;
        }
        if (ctr>0) printf("Invalid userID");
        else{
            printf("Enter password:- ");
        scanf("%s",password);
        for (int i=0;i<100;i++){
            if (password[i]==" ") ctr1++;
            if (strlen(password)<12) ctr1++;
            if (password[i]>='A'&& password[i]<='Z') c1++;
            if (password[i]>='a' && password[i] <='z') c2++;
            if (password[i]>='0' && password[i] <='9') c3++;
            if (password[i] == '$' || password[i] == '#' || password[i] == '&' || password[i] == '%' || password[i] == '@' || password[i] == '~' || password[i] == '*') c4++;
        }
        if (ctr1>0) printf("Invalid Password\n");
        else{
            if(c1>0 && c2>0 && c3>0 &c4>0) {
                    strcpy(users[0].userID,userid);
                    strcpy(users[0].password,password);
                    printf("%s enrolled successfully",userid);
            }
            else printf("Invalid Password");
        }
        }

    }

}
void signin(user users[],int n){
    char userid;
    char password;
    int a;
    int ctr=0;
    printf("Enter UserID:- ");
    scanf("%s",userid);
    for (int i=0;i<n;i++){
        if (strcmp(users[i].userID,userid)==0){
            a=i;
            ctr++;
        }
    }
    if (ctr==0) printf("%s is not enrolled",userid);
    else{
        printf("Enter Password:- ");
        scanf("%s",password);
        if (strcmp(users[a].password,password)==0) printf("%s signed in successfully.\n",userid);
        else printf("Invalid Password.\n");
    }
}
int main(){
    int n,m;
    printf("Enter MAX no of users:-");
    scanf("%d",&n);
    user users[n];
    for (int i=0;i<n;i++){
        printf("Choose one of the options - \n\t\t 1. Enroll\n\t\t 2. Sign-in\n\t\t 3. Exit\n");
        scanf("%d",&m);
        if (m==1) enrollment(users,n);
        else if (m==2) signin(users,n);
        else printf("**EXITING**");
    }
    printf("**EXITING**");
}
