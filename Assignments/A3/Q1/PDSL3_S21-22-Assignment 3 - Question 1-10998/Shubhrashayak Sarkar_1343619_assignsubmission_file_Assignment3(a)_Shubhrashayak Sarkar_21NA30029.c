/*Name:- Shubhrashayak Sarkar;
Roll No:- 21NA30029
Package:- Visual Studio Code 
Assignment class:- 6
*/
#include <stdio.h>


int spcCh, upcCh, lowcCh, digit;

void checkPass(char a)
{
    if ((48 <= a)&& (a<= 57))
    {
        digit++;
    }
    else if ((65 <= a) && ( a <= 90))
    {
        upcCh++;
    }
    else if ((97 <= a) && ( a <= 122))
    {
        lowcCh++;
    }
    else
    {
        spcCh++;
    }
    
}
int strlength(char a[])
{
    int count=0;
    for (int i = 0; a[i]!='\0'; i++)
    {
        count++;
    }
    return count;
}
int main()
{
    char pass[16];
    char username[20];
    printf("Enter the user name\n");
    scanf("%s", username);
    printf("Enter the password\n");
    scanf("%s", pass);
    if ((strlength(pass) < 8) || (strlength(pass) > 15))
    {
        printf("Your password is invalid because it does not have character between 8 to 15\n");
    }
    else
    {
        for (int i = 0; i < strlength(pass); i++)
        {
            checkPass(pass[i]);
        }
        if (spcCh < 2)
        {
            printf("Your password is invalid because it does not have at least 2 special character\n");
        }
        else if (digit == 0)
        {
            printf("Your password is invalid because it does not have any digit\n");
        }
        else if (lowcCh == 0)
        {
            printf("Your password is invalid because it does not have any lower case character\n");
        }
        else if (upcCh == 0)
        {
            printf("Your password is invalid because it does not have any uppercase character\n");
        }
        else
        {
            printf("Your password is valid\n");
        }
    }
    return 0;
}