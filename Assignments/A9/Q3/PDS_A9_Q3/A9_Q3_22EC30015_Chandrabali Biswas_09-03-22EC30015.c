/*
Name:Chandrabali Biswas
Roll No:22EC30015
Section:2
Problem 3
Description:Login and Enrolment
*/
#include <stdio.h>   //Header files
#include <string.h>
#include <stdlib.h>

typedef struct User{  //structure User
    char* userID;
    char* password;
}User;
int current=0;

void enrolment(User* a)  //enrolls user
{
   printf("Enter User ID:-\n");
               char s[100],pwd[100]; int l=0,u=0,dig=0,sp=0;
               int flag_user_wrong=0,flag_exists=0;
               scanf("%s",&s);
               char ch;
               for(int i=0; s[i]!='\0';i++)
               {
                  ch = s[i];
                  if(ch==' ' || ch<48 || (ch>57 && ch<65) || (ch>90 && ch<97) || ch>122)  //checks for incorrect character
                  {
                      flag_user_wrong = 1;
                      printf("%s is not enrolled.\n",s);
                      break;
                  }

               }
               if(flag_user_wrong!=1)
               {
                   for(int i=0;i<current;i++)
                   {
                   if(strcmp(s,a[i].userID)==0)
                     {
                       printf("%s already exists.\n");
                       flag_exists = 1;
                       break;
                     }
                   }
               }
               if(flag_user_wrong!=1 && flag_exists!=1) //if user ID is correct
               {


                   printf("Enter password:\n");
                   scanf("%s",&pwd);
                   if(strlen(pwd)<12)      //checks for incorrect password
                   {
                       printf("Invalid password\n");
                       return;
                   }
                   for(int i=0;i<strlen(pwd);i++)
                   {
                       if(pwd[i]==' ')
                       {
                           printf("Invalid password\n");
                           return;
                       }
                       if(pwd[i]>=65 && pwd[i]<=90)
                       {
                           u++;
                           continue;
                       }
                       if(pwd[i]>=97 && pwd[i]<=122)
                       {
                           l++;
                           continue;
                       }
                       if(pwd[i]>=48 && pwd[i]<=57)
                       {
                           dig++;
                           continue;
                       }
                       if(pwd[i]=='~'||pwd[i]=='!'||pwd[i]=='@'||pwd[i]=='#'||pwd[i]=='$'||pwd[i]=='%'||pwd[i]=='&'||pwd[i]=='*')
                       {
                           sp++;
                           continue;
                       }
                   }
                   if(l==0||u==0||dig==0||sp==0)
                   {
                       printf("Invalid password\n");
                       return;
                   }

                   printf("%s enrolled successfully\n",s);
                   strcpy(a[current].userID,s);
                   strcpy(a[current].password,pwd);
                   current++;  //increments for the next user

               }

}

void signIn(User* a)  //signs in user
{
    char s[100];
    char pwd[100];
    printf("Enter user ID:-\n");
    scanf("%s",&s);
    for(int i=0;i<current;i++)
    {
        if(strcmp(s,a[i].userID)==0)  //when userID matches
        {
            printf("Enter password:\n");
            scanf("%s",&pwd);
            if(strcmp(pwd,a[i].password)==0)
            {
                printf("%s signed in successfully.\n",a[i].userID); //for correct password
                return;
            }
            else
            {
                printf("Wrong password\n"); //Incorrect password
                return;
            }
        }
    }
    printf("%s is not enrolled.\n",s); //not enrolled before
}

int main()
{
    int n,choice;
    printf("Enter MAX number of users:- \n");
    scanf("%d",&n);
    User* a = (User*)malloc(n*sizeof(User));
    for(int i=0;i<n;i++)
    {
        a[i].userID = (char*)malloc(100*sizeof(char)); //allocates memory
        a[i].password = (char*)malloc(100*sizeof(char));
    }
    for(int i=0;i<n;i++)
    {

    printf("Choose one of the options_\n1.Enroll\n2.Sign-in\n3.Exit\n");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1: enrolment(a);
        break;
        case 2: signIn(a);
        break;
        case 3: break;

    }
    }
    printf("\n\n\n****EXITING****");
    return 0; //end
}
