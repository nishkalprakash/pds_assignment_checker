#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct user{
    char userID[100];
    char password[100];
} *u;
void enrollment(struct user* u,int t){
    char c[100];
    int flag=0,i;
    printf("Enter user id");
    scanf("\n%[^\n]*c",c);
    for (i=0;i<t;i++){
        if (strcmp(c,u[i].userID)==0) flag=1;
    }
    if (flag==0){
    strcpy(u[t].userID,c);
    printf("Enter password");
    scanf("\n%[^\n]*c",u[t].password);
    printf("%s enrolled successfully\n",u[t].userID);
    }
    else if (flag==1) printf("%s,already exists",u[t].userID);
}
void signin(struct user *x,int t){
    char c[100];
    scanf("\n%[^\n]*c",c);
    int flag=0,i;
    for (i=0;i<t;i++){
        if (strcmp(c,x[i].userID)==0) flag=1;
    }
    if (flag==1){
    printf("Enter password");
    scanf("\n%[^\n]*c",x[t].password);
    printf("%s,successfully logged in",x[t].userID);
    }
    else if (flag==0) printf("%s,not enrolled yet",x[t].userID);
}
int main(){
    int n,t,a=0,i;
    printf("enter max number of users\n");
    scanf("%d",&t);
    u=(struct user *)malloc(t*sizeof(struct user));
    for (i=0;i<t;i++){
        printf("choose one of the options\n");
        printf("(1) Enroll\n");
        printf("(2) Sign in\n");
        printf("(3)Exit");
        scanf("%d",&n);
        if (n==1){
            enrollment(u,a);
            a=a+1;
        }
        else if (n==2){
            signin(u,t);
        }
        else if(n==3){
        break;
        }
        else {
            printf("Enter correct number");
            i=i-1;
        }
    }



}