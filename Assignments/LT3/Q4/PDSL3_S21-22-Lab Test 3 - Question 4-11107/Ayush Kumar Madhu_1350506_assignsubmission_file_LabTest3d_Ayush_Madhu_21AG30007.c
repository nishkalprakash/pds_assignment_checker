// NAME- AYUSH KUMAR MADHU
// ROLL NO. - 21AG30007
// DEPT. - AGRICULTURE AND FOOD ENGINEERING
// SECTION - 03

// Including libraries
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LENGTH 30
int x = -1;  // Global variable
int stack[LENGTH];

// Defining functions
int same(char a, char b);
char pop();
int check(char[]);
void send(char);

// Maching of opening and closing brackets
int same(char a, char b)
{
    if (a == '[' && b == ']')
        return 1;
    if (a == '{' && b == '}')
        return 1;
    if (a == '(' && b == ')')
        return 1;
    return 0;
}

// It will pop the stack
char pop()
{
    if (x == -1)
        exit(1);
    return (stack[x--]);
}

// It will push the stack
void send(char t)
{
    if (x == (LENGTH - 1))
        return;
    x = x + 1;
    stack[x] = t;
}

// Check whether valid expression or not
int check(char str[])
{
    int i;
    char a;
    for (i = 0; i < strlen(str); i++)
    {
        if (str[i] == '(' || str[i] == '{' || str[i] == '[')
            send(str[i]);
        if (str[i] == ')' || str[i] == '}' || str[i] == ']')
            if (x == -1)
                return 0;
            else
            {
                a = pop();
                if (!same(a, str[i]))
                    return 0;
            }
    }
    if (x == -1)
        return 1;
    else
        return 0;
}

// Main function - The program starts from here
int main()
{
    // Defining variables and taking inputs
    char str[LENGTH];
    int temp;
    printf("Enter an algebraic expression : ");
    gets(str);

    // Calling function
    temp = check(str);

    if (temp == 1)
        printf("Matched parenthesis");
    else
        printf("Unmatched parenthesis");

    return 0;
}