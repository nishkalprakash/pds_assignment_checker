/*
* Section 2
* Roll No : 22BT10027
* Name : Shashank Shekhar
* Assignment No : 4
* Description : Program to check validity of password
*/
#include<stdio.h>
int main()
{
    int i=1,c=1,d=0,s=0,sc=0;
    char ch;
    printf("Enter the password \n");
    do
    {
        scanf("%c",&ch);
        if(i==1)
        {
            if(ch<'A'||ch>'Z')
                c = 0;
        }
        if(ch>='0'&&ch<='9')
            d=1;
        if(ch==' ')
            s=1;
        if(ch=='#'||ch=='$'||ch=='@'||ch=='%'||ch=='&')
            sc = 1;
        i++;
    }while(ch!='\n');
    if(i>=8&&1<=12&&c==1&&d==1&&s==0&&sc==1)
        printf("Password is valid \n");
    else
        printf("invalid password \n");
    if(i<8||i>12)
        printf("Password must be between 8 to 12 characters long \n");
    else if(c==0)
        printf("Password must start with an upper case character \n");
    else if(d==0)
        printf("Password must contain at least one digit \n");
    else if(s==1)
        printf("Spaces are not allowed in password \n");
    else if(sc==0)
        printf("Password must have at least one special character \n");
    return 0;
}
