/*
* Section 2
* Roll No : 22MT10012
* Name : Krishna Chaudhari
* Assignment No : 4
* Description :
*/
#include<stdio.h>
int main()
{
    char c='A';
    printf("Enter the password : \n");
    while(c!='\n')     //when we press enter loop stop as c cant be equal to \n
    {
        scanf("%c",&c);
        if('a'<=c && c<='b'){
            printf("Invalid password");
            printf("Password must start with uppercase");
        }
        else
            printf("%c\n",c);    //take input from user back to back until user press enter
    }
    return 0;
}


