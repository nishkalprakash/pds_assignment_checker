/*
Section 2
Roll No. - 22CS30016
Name - Omkar Vijay Bhandare
Assignment No. - 04
Description - Code for checking the right password
*/
#include<stdio.h>
int main()
{
    char c;
    int i=0,count=0,count1=0,lak=0;
    do
    {
        scanf("%c", &c);
        i++;
        if(i==1 && (c<'A' || c>'Z')) //condition for first character to be uppercase
        {
            lak++;
            printf("First character must be uppercase \n");
        }
        if(c>'0' && c<'9') //condition so as to check presence of a digit
        {
            count++;
        }
        if(c==' ') //condition to check if there is any spaces
        {
            lak++;
            printf("Spaces are not allowed\n");
        }
        if(c=='$' || c=='#' || c=='&' || c=='%' || c=='@') //condition to check presence of special characters
        {
            count1++;
        }

    }
    while(c!='\n');

    if((i-1)>12 || (i-1)<8) //condition on number of characters
    {
        lak++;
        printf("Password must be between 8 and 12 characters long\n");
    }
    if(count==0)
    {
        lak++;
        printf("Password must have at least one digit \n");
    }
    if(count1==0)
    {
        lak++;
        printf("Password must have at least one special character \n");
    }
    if(lak==0)
    {
        //lak has been used so as to detect flaws in password, if none it will print "Valid Password"
        printf("Valid Password\n");
    }
    return 0;
}
