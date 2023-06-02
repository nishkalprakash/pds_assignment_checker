#include<stdio.h>
typedef struct user{
    char *userID;
    char *password;
    }user;

void enrolment(user *u,user *a,int n)
{
    int i=0;
    u->userID=(char*)malloc(100*sizeof(char));
    u->password=(char*)malloc(100*sizeof(char));
    printf("Enter user id: ");
    scanf("%s",u->userID);
    for(int i=0;i<n;i++)
     {
        if(strcmp(a[i].userID,u->userID)==0)
        {
            printf("user id already exists");
            exit(1);
        }
     }
    printf("enter password");
    scanf("%s",u->password);
    char ch;
    int c=0,flag=0,space=0,d=0,s=0,upp=0,l=0;
     /* flag for upper case, space for space character,d dor digit and s for special character*/

    while(i<strlen(u->password))
    {
        ch=u->password[i];
        if((ch>='A')&&(ch<='Z'))       //upper case letter check
            upp++;
        if((ch>='a')&&(ch<='z'))       //upper case letter check
            l++;
        if((ch>='0')&&(ch<='9'))      //digit check
            d++;
        if((ch=='$')||(ch=='#')||(ch=='&')||(ch=='%')||(ch=='@')||(ch=='~')||(ch=='!')||(ch=='@'))
            s++;
        i++;
    }


    if(upp==0)
    {
        printf("Invalid password");
        exit(1);
    }
    else if(d==0)
    {
        printf("invalid password");
        printf("\n Password must have atleast one digit");
        exit(1);
    }
    else if(l==0)
    {
        printf("Invalid password");
        printf("\n Password must have atleast one lower case");
        exit(1);
    }

    else if(strlen(u->password)==0)       /* limit is shifted by 1 because the loop is
                                        executed one time extra*/
    {
        printf("Invalid password");
        printf("\n Password must be atleast 12 characters long");
        exit(1);
    }
    else if(s==0)
    {
        printf("Invalid password");
        printf("\n Password must have atleast one lower case");
        exit(1);
    }

 }

 void signIn(user *a,int n)
 {

    user u;
    int flag=0,i;
    u.userID=(char*)malloc(100*sizeof(char));
    u.password=(char*)malloc(100*sizeof(char));
    printf("Enter user id: ");
    scanf("%s",u.userID);
    for(i=0;i<n;i++)
        if(strcmp(a[i].userID,u.userID)==0)
            {
                flag=1;
                break;
            }

    if(flag==1)
    {
        printf("enter password");
        scanf("%s",u.password);
        if(strcmp(a[i].password,u.password)==0)
            {
                printf("successfully logged in ");
                exit(1);
            }
        else
        {
            ("invalid password");
            exit(1);
        }
    }
 }


void main()
{
    user *a;
    int n,ch,i=0;
    printf("Enter max number of users: ");
    scanf("%d",&n);
    a=(user*)malloc(n*sizeof(user));
    while(1)
    {
        printf("choose: 1- enroll    2- sign-in    3- exit");
        scanf("%d",&ch);
        if(ch==1)
            {
                enrolment(&a[i],a,i);
                i++;
            }
        if(ch==2)
            signIn(a,i);
        if(ch==3)
        {
            printf("exiting");
            exit(1);
        }
    }
}
