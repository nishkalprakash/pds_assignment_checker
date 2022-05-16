//gunnu hemanth
//21BT30006
//SEC-3

#include <stdio.h>

int length(char *password) // compiler will return length of string
{
    int j;

    for (j = 0; password[j] != '\0'; j++);

    return j;
}

int main()
{
    char password[16]; // it will store as string

    printf("Enter the password: \n");

    scanf("%s", password); // compiler will read the string

    int l, a, b, c;
    l = length(password);
    a = 0, b = 0, c = 0;
    if (l >= 8)
    {
        for (int j = 0; j < l; j++)
        {
            if ((password[j] >= 'a' && password[j] <= 'z'))
                a++; // to find no .oflower case letters

            else if ((password[j] >= 'A' && password[j] <= 'Z'))

                b++; // to find no. of upper case letters
            else if ((password[j] >= '0' && password[j] <= '9'))

                c++; // for integers
        }

        if ( b >= 1 && c >= 1) //  for valid password
        {
            printf("valid Password");
        }
        else
        {
            printf("invalid Password");
        }
    }

    else // when no. of digits are less than 8
    {
        printf("enter a valid password \n");
    }


    return 0;
}
