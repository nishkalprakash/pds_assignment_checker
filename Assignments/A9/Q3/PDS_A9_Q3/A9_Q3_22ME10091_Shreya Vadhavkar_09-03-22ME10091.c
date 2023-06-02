/*Shreya Vadhavkar
22ME10091
Lab 9
Section 2
question 3*/
#include<stdio.h>
#include<string.h>
struct User
{
    char userID[100];
    char password[100];
};
void enrolment(struct User *a[],int m)
{
    int k=0;
    for(k=0;k<m;++k)
    {

    printf("Choose one of the options.\n1. Enroll\n2. Sign-in\n3. Exit\n");
    int c;
    scanf("%d", &c);
    if(c==1)
    {
        printf("Enter User ID:-");
        scanf("%s",a[k]->userID);
        if(k!=0)
        {
            if(strcmp(a[k]->userID,a[k-1]->userID)==0)
            {
                printf("%s already exists.",a[k]->userID);
            }
        }
        printf("Enter Password:-");
        scanf("%s",a[k]->password);
        int flag=0;
        if(strlen(a[k]->password)<12)
        {
            printf("Invalid password");
            ++flag;
            return;
        }
        int i;
        int nc=0;
        int lc=0;
        int uc=0;
        int ss=0;
        for(i=0;i<100;++i)
        {
                if((a[k]->password[i]>='0') && (a[k]->password[i]<='9'))//check for digits
                        {
                        ++nc;//count digits
                        }
                        if((a[k]->password[i]=='&')||(a[k]->password[i]=='#')||(a[k]->password[i]=='$')||(a[k]->password[i]=='@')||(a[k]->password[i]=='%'))//check for special characters
                        {
                            ++ss;//count special characters
                        }
                        if( (a[k]->password[i]<='Z') && ('A'<=a[k]->password[i]) )
                        {
                            ++uc;
                        }
                        if( (a[k]->password[i]<='z') && ('a'<=a[k]->password[i]) )
                        {
                            ++lc;
                        }

        }
        if((lc==0)||(uc==0)||(ss==0)||(nc==0))
        {
            ++flag;
            printf("Invalid password");
            printf("%d %d %d %d",lc,uc,ss,nc);
            return;
        }
        else
        {
            printf("%s enrolled successfully.\n",a[k]->userID);
        }

    }
    if(c==2)
    {
        printf("Enter User ID:-");
        scanf("%s",a[k]->userID);
        if(strcmp(a[k]->userID,a[k-1]->userID)==0)
        {
            printf("Enter Password:-");
        scanf("%s",a[k]->password);
        if(strcmp(a[k]->userID,a[k-1]->userID)==0)
        {
            printf("%s signed in successfully.", a[k]->userID);
        }
        }
        else
        {
            printf("%s is not enrolled.",a[k]->userID);
        }

    }
    }

}
int main()
{
    printf("Enter MAX no of users:-");
    int m,c;
    scanf("%d",&m);
    int i;
    struct User a[m];
    enrolment(a,m);

}
