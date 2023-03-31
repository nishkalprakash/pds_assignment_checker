/*
* Section 2
* Roll No : 22HS10038
* Name : Nayan Chauhan
* Assignment No : 1
* Description : Program to read Password
*/
#include <stdio.h>
int main()
{
    int counter = 0, flag1 = 1, flag2 = 1, flag3=0, flag4=1;
    char s='A';
    printf("Enter a password : ");
    while(s!='\n')
    {
       ++counter;
       scanf("%c", &s);
       if(counter==1)
       {
            if((65<=s && s<=90))
            {
                flag1 = 0;
            }
       }
       if((48<=s && s<=57))
       {
          flag2 = 0;
       }
       if(s==' ')
       {
           flag3 = 1;
       }
       if(s==4 || ((35<=s)&&(s<=38)))
          {
              flag4 = 0;
          }
       }
       if((flag1==1||flag2==1)||(flag3==1||flag4==1))
       {
           printf("Invalid Password: \n");
       }
       else
       {
           printf("Password is valid. ");
       }
       if(flag1==1)
        {
            printf("Password must start with an upper case letter. ");
        }
        if(flag2==1)
        {
            printf("\nPassword must have at least one digit. ");
        }
        if(flag3==1)
        {
            printf("\nSpaces are not allowed in password. ");
        }
        if(flag4==1)
        {
            printf("\nPassword must have at least one special character. ");
        }
        if(!(counter>=9 && counter<=13))
        {
            printf("\nPassword must be between 8 and 12 characters long. ");
        }

    }
