/*
* Section 2
* Roll no : 22GG10052
* Name : Vedant Thakare
* Assignment : 9
* Description : Storing information(user ID etc)
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct Users{
char userID[100];
char password[100];
}Users;
int enrolment(Users *U,int j)
{
    int i,countA=0,counta=0,countt=0;
    printf("Enter User ID : ");
    scanf("%s",U[j].userID);
    for(i=0;i<j;i++)
    {
        if(strcmp(U[i].userID,U[j].userID)==0)
        {
        printf("User already exists\n");
        return 0;
        }
    }
    printf("Enter password :\n");
    scanf("%s",U[j].password);
    for(i=0;i<strlen(U[j].password);i++)
    {
        if((U[j].password[i]>='A')&&(U[j].password[i]<='Z'))
            countA++;
        if((U[j].password[i]>='a')&&(U[j].password[i]<='z'))
            counta++;
        if((U[j].password[i]=='~')||(U[j].password[i]=='@')||(U[j].password[i]=='#')||(U[j].password[i]=='$')||(U[j].password[i]=='%')||(U[j].password[i]=='^')||(U[j].password[i]=='&')||(U[j].password[i]=='*'))
            countt++;
    }
    if(counta&&countt&&countA&&strlen(U[j].password)>=12)
    {
        printf("%s enrolled successfully\n",U[j].userID);
    }
    else
    {
        printf("Invalid password\n");
        return 0;
    }
}
int main()
{
    int n,n1,i,t;
    printf("Enter MAX no of users :\n");
    scanf("%d",&n);
    Users U[n];
    for(i=0;i<n;i++)
  {
     printf("Choose one from the option :\n");
     printf("        1.Enrol\n");
     printf("        2.Sign-in\n");
     printf("        3.Exit\n");
     scanf("%d",&n1);
     if(n1==1)
     {
         if((enrolment(U,i))==0)
            t=1;
            i--;
     }
     if(n1==2)
     {


            i--;
     }
     if(t==1)
        break;
  }
  return 0;
}
