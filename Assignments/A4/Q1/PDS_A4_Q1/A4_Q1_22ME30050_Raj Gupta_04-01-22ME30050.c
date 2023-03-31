/*
* Section 2
* Roll No : 22ME30050
* Name : Raj Dineshkumar Gupta
* Assignment No : 4
* Description : read a set of characters and to see if they are a valid password according to the valid conditions
*/
#include<stdio.h>
#include<math.h>
int main()
{
    int i=0 ;
    char c;
    printf(" enter the password : ");
    do
    {
        i++;
        scanf("%c",&c);


        while (i=1)
        {
            if ('A'> c || c > 'Z')
            printf("\nthe password must start with a upper case letter\n");break;
        }
        while (i>0)
        {
            if (c=' ')
            printf("\nspaces are not allowed in password\n");break;
        }
    }
    while (c != '\n');
    if (i<8) printf("\n\npassword must be between 8 and 12 characters long\n");
    if (i>12) printf("\n\npassword must be between 8 and 12 characters long\n");






}
