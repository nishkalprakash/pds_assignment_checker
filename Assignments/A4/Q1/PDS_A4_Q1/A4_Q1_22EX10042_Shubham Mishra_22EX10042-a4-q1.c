/*
section 2
shubham mishra
22EX10042
program to find valid or invalid password
*/
#include<stdio.h>
int main()
{
char c;
printf("enter the password");
scanf("%c",&c);
if(!(c>='A' && c<='Z'))
{
    printf("invalid password , first letter is not uppercase");
}
int x=1,d=0,s=0,y=0;

while(c!='\n')
{
    scanf("%c",&c);
    x+=1;
    if(c>='0'&& c<='9')
    {
        d+=1;
    }
    if(c==' ')
    {
        s+=1;
    }
    if(c=='@'|| c=='#'|| c=='$'|| c=='%'|| c=='&')
    {
        y+=1;
    }
    if (x>12)
    {
        printf("invalid password \n the password must be between 8 and 12 characters long");
    }
}
if(x<8)
{
    printf("invalid password \n the password must be between 8 and 12 characters long");

}
else if(s!=0)
{
    printf("invalid password \n the password should not contain space char ");

}
else if(d==0)
{
    printf("invalid password \n the password should contain at least one digit");

}
else if(y==0)
{
    printf("invalid password \n the password must contain any one special char from  ");

}
else
{
    printf("valid password");
}


return 0;

}
