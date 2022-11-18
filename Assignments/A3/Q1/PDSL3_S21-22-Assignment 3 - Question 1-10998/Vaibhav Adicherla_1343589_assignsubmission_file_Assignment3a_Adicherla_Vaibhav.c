/* name: Adicherla Vaibhav
Roll no.:21BT10002
Department: Biotechnology and Biochemistry Btech4yrs
Package:code blocks
Operating system: Windows*/
#include <stdio.h>


int main()
{
    int l;
    char username[100]; // username declaration
    printf("enter the username:");
    scanf("%s", username);// reading username as string
    char pass[100];

    printf("Enter the password: ");

    scanf("%s", pass);// reading password as string variable
    l >= 8;// minimum length of password is 8

   int i;
    for ( i= 0 ;i<=l ;i++)
    {
        if (username[i]== password[i])++i;
        printf("username and password can not be same");
    }

    {
        for ( i = 0; i <=l; i++)
        {

             if ((pass[i] >= 'A' && pass[i] <= 'Z'))// password should contain upper case letters
                printf(" password should contain minimum 1 Uppercase letters");

            else if ((pass[i] >= '0' && pass[i] <= '9'))// password should contain numbers

                 printf("password should contain at least one number");
                else if ((pass[i] >= 'a' && pass[i] <= 'z'))// password should contain small case letters


                    printf("passwordshould contain at least one small case letter");
        }



    }


    return 0;
}
