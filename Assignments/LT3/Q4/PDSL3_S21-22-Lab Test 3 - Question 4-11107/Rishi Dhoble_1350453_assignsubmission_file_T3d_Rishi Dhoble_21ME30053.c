/*
Name- Rishi Dhoble
Roll no- 21ME30053
Sec-3
Package- Code blocks
T3d*/


#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int indx = -1;
int stack[100];

void push_into_stack(char);
char pop();
int check_if_same(char a, char b);
int check(char[]);

int main()
{
    char string[100];                            //main string
    int flag;
    printf("Enter an algebraic expression : ");
    scanf("%s", string);
    flag = check(string);
    if (flag == 1)
        printf("Matched parenthesis\n");
    else
        printf("Unmatched parenthesis\n");
    return 0;
}

int check(char string[])                     //defined function
{
    int i;
    char temp;
    for (i = 0; i < strlen(string); i++)
    {
        if (string[i] == '(' || string[i] == '{' || string[i] == '[')            //starting
            push_into_stack(string[i]);
        if (string[i] == ')' || string[i] == '}' || string[i] == ']')            //ending
            if (indx == -1)                                                      //checking in stack
            {
                printf("Right parenthesis are more than left parenthesis\n");
                return 0;
            }
            else
            {
                temp = pop();
                if (!check_if_same(temp, string[i]))
                {
                    return 0;
                }
            }
    }
    if (indx == -1)
    {
        return 1;
    }
    else
    {
        printf("Left parenthesis more than right parenthesis\n");
        return 0;
    }
}

//stack definitions

int check_if_same(char ch1, char ch2)
{
    if (ch1 == '[' && ch2 == ']')
        return 1;
    if (ch1 == '{' && ch2 == '}')
        return 1;
    if (ch1 == '(' && ch2 == ')')
        return 1;
    return 0;
}

void push_into_stack(char element)
{
    if (indx == (100 - 1))
    {
        printf("Stack Overflow\n");
        return;
    }
    indx = indx + 1;
    stack[indx] = element;
}

char pop()                                      //stack definitions
{
    if (indx == -1)
    {
        printf("Stack Underflow\n");
        exit(1);
    }
    return (stack[indx--]);
}
