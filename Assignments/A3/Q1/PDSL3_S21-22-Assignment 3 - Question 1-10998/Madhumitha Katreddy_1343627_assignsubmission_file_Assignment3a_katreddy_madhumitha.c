#include <stdio.h>
int strlen(char *str)
{
    int i = 0;
    for (i = 0; str[i] != '\0'; i++)
        ;
    return i;
}
int strcmp(char *s1, char *s2)
{
    int i, j = 0, flag;
    for (i = 0; s1[i] != '\0'; i++)
    {
        while (s1[i] == s2[j])
        {
            i++, j++;
            if (j == strlen(s2))
            {
                flag = 1;
                break;
            }
        }
    }
    return flag;
}
int main()
{
    char usr[100], pass[16];
    printf("Username:");
    scanf("%[^\n]%*c", usr);
    printf("Password:");
    scanf("%[^\n]%*c", pass);
    int length = strlen(pass);
    int cmp = strcmp(usr, pass);
    int number, small, capital, special;
    for (int i = 0; pass[i] != '\0'; i++)
    {
        if (pass[i] >= '0' && pass[i] <= '9')
            number = 1;
        if (pass[i] >= 'a' && pass[i] <= 'z')
            small = 1;
        if (pass[i] >= 'A' && pass[i] <= 'Z')
            capital = 1;
        if (pass[i] == '!' || pass[i] == '@' || pass[i] == '#' || pass[i] == '$' || pass[i] == '%' || pass[i] == '*' || pass[i] == '+' || pass[i] == '/' || pass[i] == '<' || pass[i] == '>' || pass[i] == '?' || pass[i] == '_')
            special = 1;
    }
    if (number == 0 || special == 0 || capital == 0 || small == 0 || length < 8 || length > 15 || cmp == 0)
        printf("Not acceptable");
    else
        printf("Acceptable");
    return 0;
}

