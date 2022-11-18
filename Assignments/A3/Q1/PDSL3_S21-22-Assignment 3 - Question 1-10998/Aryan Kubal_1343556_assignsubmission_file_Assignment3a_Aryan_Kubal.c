/***************************
 * Name : Aryan Kubal
 * Roll number : 21MT30012
 * Section : 3
***************************/

#include <stdio.h>
int maxfreq(char str[], int len) // function to check for maximum frequency of password 
{
    int temp[200], i, j, k = 0, count = 0, n;

    for (i = 0; i < len; i++)
    {
        temp[i] = 0;
        count = 1;
        if (str[i])
        {
            for (j = i + 1; j < len; j++)
            {
                if (str[i] == str[j])
                {
                    count++;
                    str[j] = '\0';
                }
            }
        }
        temp[i] = count;
        if (count >= k)
            k = count;
    }
    return k;
}
int consecutive_digits(char pass[], int l1) // function to check for consecutive digits in the password
{
    char c1[10] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
    int count = 0;
    char b = pass[0];
    for (int i = 1; i < l1; i++)
    {
        if (pass[i] == b)
        {
            for (int j = i; j < l1; j++)
            {
                if (pass[j] == b)
                    count++;
                else if (count > 5)
                {

                    return 0;
                }
                b = pass[j];
            }
        }
        b = pass[i];
    }
    count = 0;
    int count1 = 0;
    for (int i = 0; i < l1; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (pass[i] == c1[j])
                count = 1;
        }
        if (count == 1)
        {
            char d = pass[i];
            for (int j = i; j < l1; j++)
            {
                if (pass[j] == d)
                    count++;
                else if (count > 5)
                {

                    return 0;
                }
                d = pass[j];
            }
        }
    }
    return 1;
}
int main() 
{
    int validity = 1; // declaring variables
    char user_name[100], password[100];
    printf("enter username\n");
    scanf("%s", user_name);
    printf("enter password\n");
    scanf("%s", password);
    int l;
    for (l = 0; password[l] != '\0'; ++l)
        ;
    int l2;
    for (l2 = 0; user_name[l2] != '\0'; ++l2)
        ;

    int i;

    // checking for various conditions of the password
    if (l < 8 || l > 15)
    {
        validity = 0;
    }
    else
    {
        if (l2 <= l)
        {
            for (i = 0; i < l; i++)
            {
                if (password[i] == user_name[0])
                {
                    if (l - i >= l2)
                    {
                        int j;
                        int count = 0;
                        for (j = i; j < l2 + i; j++)
                        {
                            if (password[j] != user_name[count])
                            {
                                count = 0;
                                break;
                            }
                            count++;
                        }
                        if (count)
                        {
                            validity = 0;
                            break;
                        }
                    }
                }
            }
        }
        int lower = 0, upper = 0, special = 0;
        for (i = 0; i < l; i++)
        {
            if (password[i] >= 'a' && password[i] <= 'z')
            {
                lower++;
            }
            if (password[i] >= 'A' && password[i] <= 'Z')
            {
                upper++;
            }
            if (password[i] == '$' || password[i] == '*' || password[i] == '+' || password[i] == '/' || password[i] == '#' || password[i] == '@' || password[i] == '<' || password[i] == '>' || password[i] == '?' || password[i] == '_' || password[i] == '!')
            {
                special++;
            }
        }
        if (lower < 1 || upper < 1 || special < 2)
        {
            validity = 0;
        }
        if (maxfreq(password, l) > 5)
        {
            validity = 0;
        }
        if (consecutive_digits(password, l)==0)
        {
            validity = 0;
        }
    }

    if (validity)
    {
        printf("Acceptable\n");
    }
    else
    {
        printf("Not acceptable\n");
    }
}