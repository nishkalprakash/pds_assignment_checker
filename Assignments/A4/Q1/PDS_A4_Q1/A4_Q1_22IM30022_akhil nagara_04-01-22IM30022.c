/*
  section-2
  roll no : 22IM30022
  name : nagara akhil
  assignment-o4
  */
#include<stdio.h>
#include<ctype.h>

int main()
{
    char C;
    int length = 0, has_uppercase=0, has_lowercase=0, has_digit=0, has_special=0;
    printf("Enter the password:");
    while((C=getchar())!='\n');
    {
        length ++;
        if(isupper(C))
        {
            has_uppercase=1;
        }
        else if(islower(C))
        {
            has_lowercase=1;
        }
        else if(isdigit(C))
        {
            has_digit=1;
        }
        else
       {
            has_special=1;
        }
    }
    if(length < 8)
    {
        printf("Invalid password: Password length must be at least characters\n ");
    }
    else if(!has_uppercase)
    {
       printf("Invalid password: Password must contain at least one uppercase letter\n");
    }
    else if(!has_lowercase)
    {
        printf("Invalid password: Password must contain at least one lowercase letter\n");
    }
    else if(!has_digit)
    {
        printf("Invalid password: Password must contain at least one digit\n");
    }
    else if(!has_special)
    {
        printf("Invalid password: Password must contain at least one special character\n");
    }
    else
    {
        printf("Valid password");
    }
    return 0;
}
