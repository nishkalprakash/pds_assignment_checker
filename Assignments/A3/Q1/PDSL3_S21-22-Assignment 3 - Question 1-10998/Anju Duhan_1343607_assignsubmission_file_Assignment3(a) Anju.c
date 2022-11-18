#include <stdio.h>

int length(char *pass) // to return length of string
{
    int i;
    for (i = 0; pass[i] != '\0'; i++)
        ;
    return i;
}

int main()
{
    char s[100]; // to store string

    printf("Enter a string: \n");

    scanf("%[^\n]s", s); // to read string

    int l, a, b, c;
    l = length(s);
    a = 0, b = 0, c = 0;
    if (l >= 8)
    {
        for (int i = 0; i < l; i++)
        {
            if ((s[i] >= 'a' && s[i] <= 'z'))
                a++; // no. of lower case alphabet
            else if ((s[i] >= 'A' && s[i] <= 'Z'))
                b++; // no. of upper case alphabet
            else if ((s[i] >= '0' && s[i] <= '9'))
                c++; // no. of numeral
        }

        if ( b >= 1 && c >= 1) // condition for strong password
        {
            printf("Valid password");
        }
        else
        {
            printf("Invalid password");
        }
    }

    else // when no. of digits are less than 8
    {
        printf("Try again \n");
    }

    return 0;
}
