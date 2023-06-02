/*
Section 2
Roll No : 22CS30036
Name : Lakshya Agrawal
Assignment No : 9
Description : User log-in and enrolment
*/

#include<stdio.h>
#include<stdlib.h>

typedef struct User{
  char *userID;
  char *password;
}User;

int strcmp(char *str1,char *str2)
{
    for(int i=0;str1[i]!='\0';i++)
    {
        if(str1[i]!=str2[i]) return 0;
    }
    return 1;
}

void strcpy(char *str1,char *str2)
{
    int i;
    for(i=0;str1[i]!='\0';i++)
    {
        str2[i] = str1[i];
    }
    str2[i] = '\0';
}

int strsize(char *str)
{
    int i=0;
    while(str[i]!='\0') i++;
    return i;
}

int lower_case(char*str)
{
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i] >= 'a' && str[i] <= 'z')
         return 1;
    }
    return 0;
}

int upper_case(char*str)
{
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i] >= 'A' && str[i] <= 'Z')
         return 1;
    }
    return 0;
}

int number(char*str)
{
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i] >= '0' && str[i] <= '9')
         return 1;
    }
    return 0;
}

int sp_symbol(char*str)
{
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i] == '~' || str[i] == '!' || str[i] == '@' || str[i] == '#' ||
           str[i] == '$' || str[i] == '%' || str[i] == '&' || str[i] == '*')
         return 1;
    }
    return 0;
}

int is_password_valid(char* str)
{
    if(strsize(str)<12)
        return 0;
    if(lower_case(str)==0)
        return 0;
    if(upper_case(str)==0)
        return 0;
    if(number(str)==0)
        return 0;
    if(sp_symbol(str)==0)
        return 0;
    return 1;
}

void enrolment(User *arr,int n,int k)
{
    char *str;
    printf("Enter User ID:- ");
    scanf("%s",str);
    for(int i=0;i<k;i++)
    {
        if(strcmp(str,arr[i].userID))
        {
            printf("%s already exists.",str);
            exit(1);
        }
    }
    arr[k].userID = (char*)malloc((strsize(str)+1)*sizeof(char));
    strcpy(str,(arr[k].userID));

    char *str1;
    printf("Enter password:- ");
    scanf("%s",str1);
    if(is_password_valid(str1))
    {
        arr[k].password = (char*)malloc((strsize(str1)+1)*sizeof(char));
        strcpy(str1,(arr[k].password));
        printf("%s enrolled successfully.",arr[k].userID);
    }
    else
    {
        printf("\nInvalid Password.\n");
        exit(1);
    }
}

void signin(User *arr,int n,int k)
{
   char*str;
   printf("Enter User ID:- ");
   scanf("%s",str);
   int flag = -1;
   for(int i=0;i<k;i++)
    {
        if(strcmp(str,arr[i].userID))
        {
            flag = i;
            break;
        }
    }
    if(flag==-1)
    {
        printf("%s is not enrolled.",str);
        exit(1);
    }

    char *str1;
    printf("Enter password:- ");
    scanf("%s",str1);
    if(is_password_valid(str1)==0)
    {
        printf("Invalid Password");
        exit(1);
    }
    else if(strcmp(str1,arr[flag].password))
    {
        printf("%s successfully logged in.",arr[flag].userID);
        exit(1);
    }else
    {
        printf("Wrong password.");
        exit(1);
    }
}

int main()
{
    int n;
    printf("Enter MAX no of users:- ");
    scanf("%d",&n);

    User *u_arr = (User*)malloc(n*sizeof(User));
    int op;
    for(int i=0;i<n;i++)
    {
      printf("\nChoose one of the options-\n");
      printf("           1- Enroll\n");
      printf("           2- Sign-in\n");
      printf("           3- Exit\n");
      scanf("%d",&op);
      if(op==1)
        enrolment(u_arr,n,i);
      else if(op==2)
        signin(u_arr,n,i);
      else
        exit(1);
    }
    return 0;
}
