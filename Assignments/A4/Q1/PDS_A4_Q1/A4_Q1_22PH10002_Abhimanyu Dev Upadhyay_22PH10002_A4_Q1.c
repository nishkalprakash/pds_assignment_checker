/*
* Section 2
* Roll No : 22PH1002
* Name : Abhimanyu Dev Upadhyay
* Assignment No : 1
* Description : Program to check if password is valid  or not
*/

#include <stdio.h>

int main()
{
    char c;                                 // Defining character input c, we don't have to store c anywhere hence directly using that into the loop
    int r1=0, r2=0, r3=0, r4=0, r5=0;       // The logic here is that each of these variables represent rules and whenever something related to the rule (maybe violation or
    // desired input) occurs, the rule pointer goes up and we can use that to find any and all violations.

    // The index goes as follows
    // r1 checks  whether the first input is capital or not
    // r2 stores the number of digits in the number
    // r3 checks  if a space is being used
    // r4 checks  for the valid special characters
    // r5 just counts the number of digits

    // Using a do while loop because we need atleast one input
    do
    {
        // Scanning for input
        scanf("%c",&c);

        // Condition to check whether ENTER is pressed (ASCII value for ENTER is 10)
        if(c==10)
        {
            break;
        }

        // Condition to check the first character. We do this because only the first letter needs to be capital hence r5 (letter counter) must be 0
        if(r5==0)
        {
            // Checking if the letter is capital, if r1 == 1 then the first letter is capital (ASCII value of uppercase letters is from 65 to 90)
            if(c>65 && c<90)
            {
                r1++;
            }
        }

        //Condition to check for digits, if r2 > 0 then there is at least one (ASCII value of digits is from 48 to 57)
        if(c>48 && c<57)
        {
            r2++;
        }

        // Condition to check for space character, if r3 > 0 then there is at least one (ASCII value of ' ' is 32)
        if(c == 32)
        {
            r3++;
        }

        // Conditions to check special characters $,%,#,@,&, if r4 > 0 then there is  at least one (ASCII values of characters are $=36, #=35, &=38, %=37, @=64)
        if(c == 35||c == 36||c == 37||c == 38||c == 64)
        {
            r4++;
        }

        // r5 just counts the number of times the loop runs hence counting number of characters
        r5++;

    }
    while(c!=10);

    // Prints output corresponding to error found
    if(r1 != 1)
    {
        printf("Invalid password:\nPassword must start with an uppercase letter.\n");
    }
    else if(r2 == 0)
    {
        printf("Invalid password:\nPassword must have at least one digit.\n");
    }
    else if(r3 != 0)
    {
        printf("Invalid password:\nSpaces are not allowed in the password.\n");
    }
    else if(r4 == 0)
    {
        printf("Invalid password:\nPassword must contain at least one special character.\n");
    }
    else if(r5 < 8 || r5 > 12)
    {
        printf("Invalid password:\nPassword must be between 8 and 12 characters long.\n");
    }
    else
    {
        printf("Password is valid.\n");
    }

    return 0;
}
