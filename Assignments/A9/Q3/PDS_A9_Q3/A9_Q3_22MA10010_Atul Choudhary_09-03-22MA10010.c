
#include<stdio.h>
#include<stdlib.h>


struct user
{
    char userID[30];
    char password[40];
}user[5];

 void enrollment(int r){

    char id,i, password;
    printf("\n Enter user ID:- ");
    scanf("%s", &user[i].userID);
    printf(" Enter password:-");
    scanf("%s", &user[i].password);



    printf("\n%s enrolled successfully", user[i].userID);





 }
void signin(int r)
{
    char id,i, password;
    printf("\nEnter user ID:- ");
    scanf("%s", &user[i].userID);

        printf(" %s is not enrolled",user[i].userID );

}








int main(){
    int n, i, ch;
    printf("Enter max number of users: ");
    scanf("%d", &n);

    for(i=0;i<n;i++)
    {
       /* printf("\nenter details of user %d", i+1);
        printf("\nEnter user ID:- ");
        scanf("%s", &user[i].userID);
        printf("\nEnter Password:- ");
        scanf("%s", &user[i].password);*/


    while(1)
{


    printf("\n1:Enroll");
    printf("\n2:Sign-in");
    printf("\n3:Exit");

    printf("\nChoose one of the options:");
    scanf("\n %d", &ch);
    switch(ch)
    {
        case 1: enrollment(n);
        break;
        case 2: signin(n);
        break;
        case 3: exit(0);


    }
}
}
return 0;
}
