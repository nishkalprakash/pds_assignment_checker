/*
Name -Sumedh Deshkar
Roll no.: 21MI33023
Section - 3
*/



#include <ctype.h>

#include <stdio.h>


int  length(char s[]);
int main()
{
    char b[30],a[30];
    int v = length(b[30]);
    int u = length(a[30]);
    printf("username: ");
    for (int i = 0; i < u; i++)
    {scanf("%c",&a[i]);}
    printf("password: ");
    for (int i = 0; i < v; i++)
    {scanf("%c",&b);}


    int countlo = 0;
    int countup = 0;
    int countchar = 0;

    if (v < 8 || v > 15)
    {
        printf("Password not valid.");
    }
    else
    {
        for (int i = 0; i < v; i++)
        {
            if (islower(b[i]))
            {
                countlo++;
            }
            else if (isupper(b[i]))
                {
                    countup++;
                }
            else if (b[i] == '$' || b[i] == '*' || b[i] == '+'
                      || b[i] == '#' || b[i] == '@' || b[i] == '<' || b[i] == '>' || b[i] == '?' || b[i] ==  '_' || b == '!' || b == '/')
            {
                     countchar++;
            }
            else
            {
                printf("Invalid Password\n");
            }

            if(countlo < 1 || countup < 1 || countchar < 2)
            {
               printf("Invalid Password\n");
            }
            else
            {
                printf("Valid Password\n");
            }

        }
    }
}

int  length(char s[])
{
    int count = 0;
    for(int i = 0; s[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}
