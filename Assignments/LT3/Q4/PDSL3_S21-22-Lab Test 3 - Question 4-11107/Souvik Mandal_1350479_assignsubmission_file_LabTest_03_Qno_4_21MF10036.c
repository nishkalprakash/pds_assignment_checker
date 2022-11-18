/*
Name : Souvik Mandal
Roll No. : 21MF10036
Section : 3 
Group : 5
Department : Manufacturing Science And ENGG.
Package : VS Code
Operating System : Windows
*/



#include <stdio.h>
#include <string.h>

#define MAX 50
char top = -1, stack[MAX];

int full()
{
    if (top == MAX - 1)
        return 1;
    return 0;
}

int empty()
{
    if (top == -1)
        return 1;
    return 0;
}

void push(char item)
{
    if (full())
    {
        printf("Stack is full\n");
        return;
    }
    else
    {
        stack[++top] = item;
    }
}

char pop()
{
    if (empty())
    {
        printf("Stack is empty\n");
        return -1;
    }
    return stack[top--];
}

void display()
{
    if (empty())
    {
        printf("Stack is empty\n");
        return;
    }
    else
    {
        while (!empty())
        {
            printf("%c ", pop());
        }
    }
}

void peek()
{
    if (empty())
    {
        printf("Stack is empty\n");
        return;
    }
    else
        printf("%c", stack[top]);
}

char pair(char c)
{
    if (c == ')')
        return '(';
    else if (c == '}')
        return '{';
    else
        return '[';
}
int main()
{
    int i;
    char ch, x;
    char exp[50];
    gets(exp);
    for (i = 0; i < strlen(exp); i++)
    {
        if (exp[i] == '(' || exp[i] == '[' || exp[i] == '{')
        {
            push(exp[i]);
        }
        
        else if (exp[i] == ')' || exp[i] == '}' || exp[i] == ']')
        {
            if (empty())
            {
                printf("NO OPENING BRACKET...INVALID EXPRESSION\n");
                return -1;
            }
            else
            {
                x = pair(exp[i]);
                if (pop() != x)
                {
                    printf("NO MATCHING..INVALID EXPRESSION\n");
                    return -1;
                }
            }
        }
    }
    if (!empty())
    {
        printf("LEFT PARENTHESIS ARE MORE THAN RIGHT....INVALID EXPRESSION\n");
    }
    return 0;
}