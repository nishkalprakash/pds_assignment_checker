/*
Rishabh Bhardwaj
21CE10052
Civil
sec-3
CodeBlock
windows
*/
#include <stdio.h>

int main(void)
{
    int i, length, len=0, special, special1, repeat1 = 0, repeatspecial1 = 0, repeat = 0, repeatspecial = 0, upper = 0, lower = 0;
    char name[25], password[25];
    printf("Enter the username: ");
    scanf("%s", name);
    printf("Enter the password: ");
    scanf("%s", password);

    for (int i = 0; password[i]!='\0'; i++)
    {
        length++;
        if(password[i]== '!' || password[i]== '@' || password[i]== '#' || password[i]== '$' || password[i]== '+' || password[i]== '?' || password[i]== '<' || password[i]== '>' || password[i]== '*' || password[i]== '_' ||password[i]== '/' )
        {
            special++;
        }
        else if (password[i] == password[i+1] && password[i+1] == password[i+2] && password[i+2] == password[i+3] && password[i+3] == password[i+4] && password[i+4] == password[i+5] && password[i+5] == password[i+6] )
        {
            if (password[i]>='48' && password[i]<='57')
            {
               repeat = 1;
            }
            else if (password[i]== '!' || password[i]== '@' || password[i]== '#' || password[i]== '$' || password[i]== '+' || password[i]== '?' || password[i]== '<' || password[i]== '>' || password[i]== '*' || password[i]== '_' ||password[i]== '/')
            {
                repeatspecial = 1;
            }
        }
        else if(password[i] >= '60' && password[i]<= '90')
        {
            upper = 1;
        }
        else if (password[i] >= '97' && password[i]<= '122')
        {
            lower = 1;
        }
            else if (password[i]>='48' && password[i]<='57')
            {
               repeat1 = 1;
            }
            else if (password[i]== '!' || password[i]== '@' || password[i]== '#' || password[i]== '$' || password[i]== '+' || password[i]== '?' || password[i]== '<' || password[i]== '>' || password[i]== '*' || password[i]== '_' ||password[i]== '/')
            {
                repeatspecial1 = 1;
            }
    }
    if (length>= 8 && length <= 15)
    {
        len= 1;
    }
    else if ( special >= 2);
    {
        special1 = 1;
    }

    if (len==1 && special1==1 && upper==1 && lower==1 && repeatspecial==0 && repeat==0 && repeat1 == 01 && repeatspecial1 == 1)
    {
        printf("Acceptable");
        return 0;
    }
    else
    {
        printf("Not Acceptable");
        return 1;
    }


}

