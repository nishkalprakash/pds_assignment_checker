/*
* Section 2
* Roll no : 22GG10052
* Name : Vedant Thakare
* Assignment : 5
* Description : Program to read a password
*/
#include<stdio.h>
int main ()
{   int n,count;
    char x;
    x='A';
    count = 0;
    while(x!='\n')
    {
        count++;
        scanf("%c",&x);
        printf("%c",x);
        if (count==1&&x<'A'&&x>'z')
        {
            printf("Password must start with an upper case letter");
        }
        else if (x==' ')
        {
            printf("Blank space is not allowed between the characters");

        }


    }

    return 0;
}
