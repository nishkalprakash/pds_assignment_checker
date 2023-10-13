// Roll No.: 23CS30049
// Name: Shikhar Burman

// Importing libraries
#include <stdio.h>
#include <stdlib.h>

void check(char str[])
{
    int count = 0;
    for (int i = 0; str[i + 2] != '\0'; i++)
    {
        if (str[i] == str[i + 2] - 1)
            count++;
    }
    printf("%d\n", count);
}

void encode1(char str[])
{
    char encoded1[21];
    int i;
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] < 'y')
        {
            encoded1[i] = str[i] + 2;
        }
        else
            encoded1[i] = str[i] - 'y' + 'a';
    }
    encoded1[i] = '\0';
    printf("encoded1: %s\n", encoded1);
}

void encode2(char str[])
{
    char encoded2[41];
    int i;
    for (i = 0; str[i] != '\0'; i++)
    {
        encoded2[i * 2] = 'a';
        encoded2[i * 2 + 1] = str[i];
    }
    encoded2[(i - 1) * 2 + 2] = '\0';
    printf("encoded2: %s\n", encoded2);
}

int main()
{
    char str[21];
    printf("enter string of atmost 20 characters: ");
    scanf("%s", str);
    check(str);
    encode1(str);
    encode2(str);
}