/*
*Section 2
*Roll no- 22AE10042
*Name- Ullash Chandra Modi
*Assignment no- 3
*/
#include <stdio.h>
#include <math.h>
#include <string.h>

typedef struct User{
char userID[100];
char password[100];}u;

void enrollment(u *u1);

int main()
{
    u u1;
    int n;
    printf("enter max numbers of users : ");
    scanf("%d",&n);
    printf("choose one of the option : ");
    printf("1-enroll\n");
    printf("2-sign in\n");
    printf("3-exit\n");
    scanf("%d",&n);
    if (n==1)
    {
        enrollment(&u1);
    }

    else if (n===3)
    {
        break;
    }
    return 0;
}

void enrollment(u *u1)
{
    int n1,n2,i,a=0,b=0,c=0,d=0,e=0,f=0,j;
    char A[]={'~','!','@','#','$','%','&','*'};
    gets((*u1).userID);
    gets((*u1).password);
    n1=strlen((*u1).userID);
    n2=strlen((*u1).password);

    for (i=0;i<n1;i++)
    {
        if ((*u1).userID[i]==' ')
            f++;
    }
    if (f>1)
        printf("invalid userID");

    for (i=0;i<n2;i++)
    {
        if ((((*u1).password[i]>=65)&&(((*u1).password[i]65)<=90)))
            a++;
        else if (((*u1).password[i]>=97)&&(((*u1).password[i]65)<=122))
            b++;
        else if (((*u1).password[i]>=48)&&(((*u1).password[i]65)<=57))
            c++;
        else if ((*u1).password[i]==' ')
            d++;
        else
        {
            for (j=0;j<8;i++)
            {
                if ((*u1).password[i]==A[j])
                    e++;
            }
        }

    }
    if (d>0)
        printf("invalid password");
    else if((a+b+c+d+e)<12)
        printf("invalid password");
    else if (a==0)
        printf("invalid password");
    else if (b==0)
        printf("invalid password");
    else if (c==0)
        printf("invalid password");


}
