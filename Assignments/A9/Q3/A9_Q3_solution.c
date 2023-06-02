#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct User
{
   char *userId, *password;
} User;

int checkSpaces(char *str)
{
   int i;
   for (i = 0; i < strlen(str); i++)
   {
       if (str[i] == 32)
           return 1;
   }
   return 0;
}

int validatePassword(char *password)
{
   int hasLower = 0;
   int hasUpper = 0;
   int hasDigit = 0;
   int hasSpecial = 0;
   for (size_t i = 0; i < strlen(password); i++)
   {
       if (password[i] >= 97 && password[i] <= 122)
           hasLower = 1;
       else if (password[i] >= 65 && password[i] <= 90)
           hasUpper = 1;
       else if (password[i] >= 49 && password[i] <= 57)
           hasDigit = 1;
       else if (password[i] == 126 || password[i] == 33 || password[i] == 64 ||
                password[i] == 35 || password[i] == 36 || password[i] == 37 || password[i] == 38 ||
                password[i] == 42)
           hasSpecial = 1;
   }
   return hasLower && hasUpper && hasDigit && hasSpecial;
}

int checkDuplicate(User *users, int index, char *userId)
{
   int hasDuplicate = 0;
   for (int i = 0; i < index; i++)
   {
       if (strcmp(users[i].userId, userId) == 0)
       {
           hasDuplicate = 1;
           break;
       }
   }
   return hasDuplicate;
}

void enrollment(User *u_list, int index)
{
   char temp[100];
   int l;
   printf("Enter User ID:- ");
   fgets(temp, 100, stdin);
   l = strlen(temp);
   temp[l - 1] = '\0';
   l = l - 1;
   if (checkSpaces(temp) == 1)
   {
       printf("Invalid UserID.\n");
       printf("** EXITING **\n");
       exit(0);
   }
   if (checkDuplicate(u_list, index, temp) == 1)
   {
       printf("%s already exists.\n", temp);
       printf("** EXITING **\n");
       exit(0);
   }
   u_list[index].userId = (char *)calloc(l, sizeof(char));
   strncpy(u_list[index].userId, temp, l);
   printf("Enter Password:- ");
   fgets(temp, 100, stdin);
   l = strlen(temp);
   temp[l - 1] = '\0';
   l = l - 1;
   if (l < 12 || validatePassword(temp) == 0 || checkSpaces(temp) == 1)
   {
       printf("Invalid password.\n");
       printf("** EXITING **\n");
       exit(0);
   }
   u_list[index].password = (char *)calloc(l, sizeof(char));
   strncpy(u_list[index].password, temp, l);
   printf("%s enrolled successfully.\n", u_list[index].userId);
}

int signIn(User *users, int index)
{
   char temp[100];
   int length = 0, i = 0, flag = 0;

   printf("Enter User ID:- ");
   fgets(temp, 100, stdin);
   length = strlen(temp);
   temp[length - 1] = '\0';
   length = length - 1;
   for (i = 0; i < index; i++)
   {
       if (strcmp(temp, users[i].userId) == 0)
       {
           flag = 1;
           break;
       }
   }
   if (flag == 0)
   {
       printf("%s is not enrolled.\n", temp);
       printf("** EXITING **\n");
       exit(0);
   }
   printf("Enter Password:- ");
   fgets(temp, 100, stdin);
   length = strlen(temp);
   temp[length - 1] = '\0';
   length = length - 1;
   if (length < 12 || validatePassword(temp) == 0 || checkSpaces(temp) == 1)
   {
       printf("Invalid password.\n");
       printf("** EXITING **\n");
       exit(0);
   }
   if (strcmp(users[i].password, temp) == 0)
   {
       printf("%s successfully logged in.\n", users[i].userId);
       return 0;
   }
   else
   {
       printf("Wrong password.\n");
       printf("** EXITING **\n");
       exit(0);
   }
}

int main()
{
   int n, i = 0;
   int choice = 0;
   printf("Enter MAX no of users:- ");
   scanf("%d", &n);
   fflush(stdin);
   User *users = (User *)calloc(n, sizeof(User));
   do
   {
       printf("Choose one of the options.\n");
       printf("\t 1. Enroll \n");
       printf("\t 2. Sign-in \n");
       printf("\t 3. Exit \n");
       scanf("%d", &choice);
       fflush(stdin);
       if (choice == 1)
       {
           if (i == n)
               printf("Cannot enroll any other user.\n");
           else
           {
               enrollment(users, i);
               i++;
           }
       }
       else if (choice == 2)
       {
           signIn(users, i);
       }
       else if (choice != 3)
           printf("Invalid Choice.\n");
   } while (choice != 3);
   printf("** EXITING **\n");
   return 0;
}
