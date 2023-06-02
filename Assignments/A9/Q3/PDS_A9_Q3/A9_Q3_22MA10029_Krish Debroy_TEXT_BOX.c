#include <stdio.h>
#include <string.h>

typedef struct
{
    char userID[100];
    char password[100];
} User ;

User record[100];
int n ;

int pass_chk(char pass[])/*int output for the program to exit itself , 1 for exit  */
{
    if(strlen(pass)<12)
    {
        printf("Invalid password.");
        return 1;
    }
    int lcase=0, ucase=0,num=0,sym=0 ,flag=0;
    for(int i=0;i<strlen(pass);i++)
    {
        if (pass[i]>='a' && pass[i]<='z' ) lcase++;
        else if (pass[i]>='A' && pass[i]<='Z' ) ucase++;
        else if (pass[i]>='0' && pass[i]<='9' ) num++;
        else if (pass[i]=='~' || pass[i]=='!' || pass[i]=='@' || pass[i]=='#' || pass[i]=='$' || pass[i]=='%' || pass[i]=='&' || pass[i]=='*') sym++;
        else
        {
            printf("Invalid Password.");
            flag=1;
        }
    }
    if (lcase==0 || ucase==0 || num==0 || sym==0 || flag==1)
    {
        printf("Invalid Password.");
        return 1;
    }
    return 0 ;
}


int enrolment()/*int output for the program to exit itself , 1 for exit .........n is the number of people already enrolled */
{
    int j=0;
    char c[100],t;
    printf("Enter User ID :- ");
    scanf("%s",record[n].userID);
    fflush(stdin);
    for(int i=0;i<n;i++)
    {
        if (strcmp(record[n].userID,record[i].userID)==0)
        {
            printf("%s already exists.",record[n].userID);
            return 1;
        }
    }
    printf("Enter Password : ");
    scanf("\n%c",&t);
    while(t!=' ' && t!='\n')
    {
        record[n].password[j]=t;
        j++;
        scanf("%c",&t);
    }
    record[n].password[j]='\0';
    if (pass_chk(record[n].password)) return 1;
    n++;
    printf("%s enrolled successfully.\n",record[n-1].userID);
    return 0;
}


int signIn()
{
    int ID,flag=0;
    char c[100],t[100];
    printf("Enter User ID :- ");
    scanf("%s ",c);
    //fflush(stdin);
    for(int i=0;i<n;i++)
    {
        printf("%s",record[i].userID);
        if (strcmp(c,record[i].userID)==0)
        {
            flag=1;
            ID=i;
            printf("%d",ID);
        }
    }
    if (flag==0)
    {
        printf("%s is not enrolled.",c);
        return 1;
    }

    printf("\nEnter Password :- ");
    scanf("/n%s",t);
    if (strcmp(t,record[ID].userID))
    {
        printf("Wrong Password.");
        return 1;
    }
    printf("%s successfully logged in.",c);
    fflush(stdin);

    return 0;
}

int main()
{
    int p,inp;
    n=0;
    printf("Enter MAX number of users :");
    scanf("%d",&p);
//    getchar();
    for(int k=0;k<p;k++)
    {
        printf("\nChoose one of the options :\n1-Enroll\n2-Sign-in\n3-Exit\n");
        scanf("%d",&inp);
        getchar();
        //fflush(stdin);
        if (inp==1)
        {
            if(enrolment()) break;
        }
        else if(inp==2)
        {
            if (signIn()) break;
        }
        else if(inp==3) break;
        else
        {
            printf("Invalid Input. Try again.");
            k--;
        }

    }
}