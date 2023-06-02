#include <stdio.h>
#include <string.h>

typedef struct Users{
    char userID[100];
    char password[100];
}User;

User list[100];
int n=0;

void enrolment()
{
    n=0;
    printf("Enter User ID:-");
    scanf("%s",&list[n].userID);
    printf("Enter Password :-");
    scanf("%s",&list[n].password);
    for(int i=0; i<n;i++)
    {
        if(list[i].userID==User1.userID)
        {
            printf("User exists");
        }
    }
    if(checkpass(list[n].password)==0)
    {   printf("Invalid Password");
        return;
    }
    else
    {
        printf("%s enrolled successfully",list[n].userID);
    }
    n++;
}

void signIn()
{
    User User1;
    int flag=0;
    printf("Enter userID:- ");
    scanf("%s",User1.userID);
    for(int i=0; i<n;i++)
    {
        if(list[i].userID==User1.userID)
        {
            flag++;
            printf("Enter Password :-");
            scanf("%s",User1.password);
            if(User1.password==list[i].password)
            {
                printf("%s signed in successfully",User1.userID);
                return;
            }
            else
            {
                printf("Wrong Password");
                return;
            }
        }
    }
    if(flag==0)
    {
        printf("%s is not enrolled",User1.userID);
        return;
    }
}
int checkID(char userID[100])
{
    int l;
    l=strlen(userID);
    for(int i=0;i<l;i++)
    {
        if(userID[i]==' ') return 0;
    }
    return 1;
}
int checkpass(char password[100])
{
    int flag=0,flag_low=0,flag_upp=0,flag_num=0,flag_spl=0,l;
    l=strlen(password);
    if(l>=12) flag++;
    for(int i=0;i<l;i++)
    {
        if(password[i]>'a' && password[i]<'z') flag_low++;
        if(password[i]>'A' && password[i]<'Z') flag_upp++;
        if(password[i]>'0' && password[i]<'9') flag_num++;
        if((password[i]=='~') || (password[i]='!') || (password[i]='@') || (password[i]='#') || (password[i]='$' )|| (password[i]='%') || (password[i]='&') || (password[i]='*')) flag_spl++;
    }
    if(flag>0 && flag_low>0 && flag_upp>0 && flag_num>0 && flag_spl>0) return 1;
    else return 0;

}
int main()
{
    int n2,choice;
    printf("Enter the Max no of users:- ");
    scanf("%d",&n2);
    for(int i=0;i<n2;i++)
    {

        printf("\nChoose one of the options:\n");
        printf("\t 1.Enroll\n");
        printf("\t 1.Sign-in\n");
        printf("\t 1.Exit\n");
        scanf("%d",&choice);

        if(choice==1)
        {
            enrolment();
        }
        else if(choice==2)
        {
            signIn();
        }
        else
        {
            printf("**EXITING**");
            break;
        }
    }
}

