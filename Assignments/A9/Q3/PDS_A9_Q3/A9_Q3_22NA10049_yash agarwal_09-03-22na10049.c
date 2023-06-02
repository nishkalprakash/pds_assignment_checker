#include <stdio.h>
#include <stdlib.h>


struct User
{
    char userId[100];
    char password[100];
}user[50];

void enrollment()
{
      int n=0;
      static int i=0;

      printf("Enter User id:-");
      scanf("%[^\n]s",user[i].userId);
       printf("Enter Password:-");
      scanf("%[^\n]s",user[i].password);
      i++;
printf("fjkdbvkfjd");
      for(int j=0;j<10;j++)//checking
      {

          if(user[i].userId==' ')
            printf("Invalid userId");

          if(user[i].password==' ')
            printf("Invalid password");
          else if(user[11].password==NULL)
             printf("Invalid password");
      }
printf("here ");
    do{

    printf("Choose one of the options.\n");
    printf("         1.Enroll\n");
    printf("         2.Sign-in\n");
    printf("         3.Exit\n");
    scanf("%d",&n);
    if(n==1)
       enrollment();
    else if(n==2)
        signin();
    else if(n==3)
       return ;
    }while(n!=3);

}

void signin()
{
        int n=0;

    do{

    printf("Choose one of the options.\n");
    printf("         1.Enroll\n");
    printf("         2.Sign-in\n");
    printf("         3.Exit\n");
    scanf("%d",&n);
    if(n==1)
       enrollment();
    else if(n==2)
        signin();
    else if(n==3)
        return;
    }while(n!=3);

}


int main()
{
    int n=0;

    do{

    printf("Choose one of the options.\n");
    printf("         1.Enroll\n");
    printf("         2.Sign-in\n");
    printf("         3.Exit\n");
    scanf("%d",&n);
    if(n==1)
       enrollment();
    else if(n==2)
        signin();
    else if(n==3)
        return 0;
    }while(n!=3);

}
