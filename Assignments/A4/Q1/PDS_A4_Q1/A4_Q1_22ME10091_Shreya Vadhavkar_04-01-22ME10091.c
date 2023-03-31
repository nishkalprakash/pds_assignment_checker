/*Section 2
Roll no.: 22ME10091
Name: Shreya Vadhavkar
Assignment : 4
Description: Checking validity of password */
#include<stdio.h>
int main()
{
    char c;
    int numcount=0;//counts the number of digits in the password. It is initialized to 0.
    int spc=0;//Counts the number of special characters.
    int count=0;//counts the number of character in the password.
    printf("Enter the characters:");//request user for password
    scanf("%c", &c);//input password
            if( (c<='Z') && ('A'<=c) )//check if the first character is uppercase letter or not
            {
                 while(c!= '\n')//terminate the loop if 'enter'is pressed
                     {
                        scanf("%c", &c);//input the next character
                        if((c=='\t') || (c==' ') || (c=='\v'))//check for whitespaces
                        {
                        printf("\nInvalid password:\n Spaces are not allowed in password.");
                        goto line;
                        }
                        if((c>='0') && (c<='9'))//check for digits
                        {
                        ++numcount;//count digits
                        }
                        if((c=='&')||(c=='#')||(c=='$')||(c=='@')||(c=='%'))//check for special characters
                        {
                            ++spc;//count special characters
                        }
                        count++;//count number of characters in the password
                    }
                    if((count<8) || (count>12))//check if no. of characters in the password satisfies the given conditions
                    {
                        printf("\nInvalid password:\n Password must be between 8 and 12 characters long only.");
                        goto line;
                    }
                    else if(numcount==0)//if there no digits in the password
                    {
                        printf("\nInvalid password:\n Password must have at least one digit.");
                    }
                    else if(spc==0)//if there are no special characters in the password
                    {
                        printf("\nInvalid password:\n Password must have at least one special character.");
                        goto line;
                    }
                    else//valid password
                    {
                        printf("\nThe password is valid.");
                    }
            }

        else//first character is not an uppercase letter
            {
                        printf("Invalid password:\n Password should start with an uppercase letter.");
            }
    line : return 0;
}
