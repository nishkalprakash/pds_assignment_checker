/*
 *Section 2
 *Roll No:22IM10028
 *Name:Piyush Kumar Burnwal
 *Assignment No:04
 *Description:>Taking a set of characters until user presses the enter key
              >Checking whether the password is a valid password or not,if not valid checking the rule which it violates.
*/
#include <stdio.h>
int main()
{
    /*a is used for tracking each character
      digit will be used for checking whether the password is vcontaining atleast one digit or not.
      err is used such that the "Invalid Password would be printed only once no matter how many errors are there in the password
      special is used to count the no. of special characters in the password
      sp is used to check whether our password contains space or not
      flag is used to evaluate whether our password is valid or not if its value has become 0 even once,"THE PASSWORD IS INVALID" else "Our PASSWORD IS VALID".
      */
    char a;
    int counter=0;
    int flag=1,digit=0,err=0,special=0,sp;
    printf("Enter a password:");
    while (a!='\n')//accepting characters unless user enters the ENTER key.
    {
        scanf("%c",&a);
        counter++;//counter is used to track the position of the character of our password and at last the total no. of characters
        if (counter==1)//counter=1 checks for the first character of our password
        {
            if (!((a>='A')&& (a<='Z')))
            {
                if (err==0)
                {
                    printf("Invalid Password:\n");
                }
                err++;
                flag=0;

                printf("Password must start with an uppercase letter\n");
            }



        }
        if ((a>='0')&&(a<='9'))
        {
            digit++;//counting the number of digits in our password
        }
        if (a==' ')
        {
            sp=1;
            flag=0;

        }
        if ((a=='$')||(a=='#')||(a=='&')||(a=='%')&&(a=='@'))
        {
            special++;//counting the no. of special characters in our password
        }
    }
    //checking whether our password has atleast one digit
    if (digit==0)
    {
        if (err==0)
        {
            printf("Invalid Password:\n");
        }
        printf("Password must have atleast one digit. \n");
        err++;
        flag=0;
    }
    //checking if our password has a space in it
    if (sp==1)
    {
        if (err==0)
        {
            printf("Invalid Password:\n");
        }
        printf("Spaces are not allowed in password. \n");
        err++;
        flag=0;

    }
    //checking for number of special characters
    if (special==0)
    {
        if (err==0)
        {
            printf("Invalid Password:\n");
        }
        printf("Password must have atleast one special character. \n");
        err++;
        flag=0;
    }
    //checking for number of characters in our password
    if ((counter<8) || (counter>12))
    {
        if (err==0)
        {
            printf("Invalid Password:\n");
        }
        printf("Password must be between 8 and 12 characters long.");
        err++;
        flag=0;
    }
    //checking if our password is valid or not
    if (flag==1)
    {
        printf("Password is valid. \n");
    }
    return 0;
}

