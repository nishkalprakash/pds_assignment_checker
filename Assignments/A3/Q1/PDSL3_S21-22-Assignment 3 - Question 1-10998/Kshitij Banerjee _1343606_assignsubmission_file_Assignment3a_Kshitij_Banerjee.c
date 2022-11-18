// Name: Kshitij Banerjee
// Roll No: 21CH10035
// Section: 3
// Department: Chemical
// Package: Codeblocks

#include <stdio.h>

int length(char str[])
{
    int len = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        len++;
    }
    return len;
}

int main()
{
    char name[20], pass[40];

    printf("username: ");
    scanf("%s", name);

    printf("password: ");
    scanf("%s", pass);

    int len = length(pass), upper = 0, lower = 0, digit = 0, special = 0, conse = 0, repeat = 0;
    int flagc = 1, flagl = 1, flagr = 1;

    if (length(pass) < 8 || length(pass) > 15)
    {
        flagl = 0;
    }
    if (flagl == 0)
    {
        printf("Not acceptable\n");
        return 0;
    }

    for (int i = 0; i < len; i++)
    {
        if (pass[i] >= 'A' && pass[i] <= 'Z')
        {
            flagr = 0;
            upper++;
            for (int j = i; j < i + 5; j++)
            {
                if (i + 5 >= len)
                {
                    flagr = 1;
                    break;
                }
                if (pass[j] != pass[i])
                {
                    flagr = 1;
                    break;
                }
            }
        }
        else if (pass[i] >= 'a' && pass[i] <= 'z')
        {
            flagr = 0;
            lower++;
            for (int j = i; j < i + 5; j++)
            {
                if (i + 5 >= len)
                {
                    flagr = 1;
                    break;
                }
                if (pass[j] != pass[i])
                {
                    flagr = 1;
                    break;
                }
            }
        }
        else if (pass[i] == '$' || pass[i] == '*' || pass[i] == '+' || pass[i] == '/' || pass[i] == '#' || pass[i] == '@' || pass[i] == '<' || pass[i] == '>' || pass[i] == '?' || pass[i] == '_' || pass[i] == '!')
        {
            special++;
        }
        else if (pass[i] >= '0' && pass[i] <= '9')
        {
            flagc = 1;
            digit++;
            for (int j = i; j < i + 5; j++)
            {
                if (i + 5 >= len)
                {
                    break;
                }
                if (pass[j] >= '0' && pass[j] <= '9')
                {
                    conse++;
                }
                if (conse == 5)
                {
                    flagc = 0;
                    break;
                }
            }
        }
        if (flagc == 0 || flagr == 0)
        {
            printf("Not acceptable\n");
            return 0;
        }
    }
    if (upper >= 1 && lower >= 1 && special >= 2)
    {
        printf("Acceptable\n");
    }
    else
    {
        printf("Not acceptable\n");
    }
    return 0;
}
