/*Section 2
Roll No:22CH10012
Name: Ashwini Raj
Assignment No: 4
*/




#include<stdio.h>
int main()
{
char a;
int b=0;
printf("Enter a password:");
while(a!='\n')
{
    scanf("%a, &a");
    if(a<'A')
    {
        printf( "Invalid Password:\n Password must start with an upper case letter.");}
       if(a=='\n')
       {printf("Invalid Password: \n spaces are not allowed in password \n.");break;

    }
    if(a!='#'|| a!='$' || a!= '%' || a!='@' || a!='&')
    {printf("Invalid Password :\n Password must have atleast one special character.\n");break;
    b=b+1;
    if(b<=8 || b>=12)
    {
        printf("Invalid Password :\n Password must be between 8 and 12 characters long. \n");break;
        else {printf("Valid password \n");break;
    }
    return 0;
}

