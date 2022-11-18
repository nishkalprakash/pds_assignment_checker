/*
Name: Sadique Amin
Roll Number: 21CE30027
Department: Civil Engineering
Package used: <stdio.h>
Assignment Class: 6
*/
#include <stdio.h>
#define MAX 10000

int len(char str[]);
int open(char str[], int n);
int close(char str[], int n);
int check_next_same_brac(char str[], int n);
int brac_check_within(char str[], int a, int b);
int length;
int main()
{
    char str[MAX];
    printf("Enter expression: ");
    gets(str);
    int flag = 0; // If flag gets the value 1 the expression is unmatched
    length = len(str);
    int n = 0;
    for (int j = 0; j < length; j++)
    {
        if (open(str, j))
        {
            int x = check_next_same_brac(str, j);
            if (brac_check_within(str, j, x)) // If everything is OK within those brackets it will not enter this block
            {
                flag = 1;
            }
        }
    }
    if (flag == 1)
    {
        printf("Result: Unmatched parenthesis");
    }
    else
    {
        printf("Result: Matched parenthesis");
    }
}

int check_next_same_brac(char str[], int n)
{
    if (str[n] == '{')
    {
        for (int i = n + 1; i < length; i++)
        {
            if (str[i] == '}')
            {
                return i;
            }
        }
    }
    if (str[n] == '(')
    {
        for (int i = n + 1; i < length; i++)
        {
            if (str[i] == ')')
            {
                return i;
            }
        }
    }
    if (str[n] == '[')
    {
        for (int i = n + 1; i < length; i++)
        {
            if (str[i] == ']')
            {
                return i;
            }
        }
    }
    return -1;
}

int brac_check_within(char str[], int a, int b) // Returns 0 when there is no problem within the brackets
{
    int n = 0;
    for (int i = a; i < b + 1; i++)
    {
        if (open(str, i))
        {
            n++;
        }
        if (close(str, i))
        {
            n--;
        }
    }
    if (n == 0)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

int open(char str[], int n)
{
    if (str[n] == '{' || str[n] == '[' || str[n] == '(')
    {
        return 1;
    }
    return 0;
}

int close(char str[], int n)
{
    if (str[n] == '}' || str[n] == ']' || str[n] == ')')
    {
        return 1;
    }
    return 0;
}

int len(char str[])
{
    int length = 0;
    while (str[length] != '\0')
    {
        length++;
    }
    return length;
}