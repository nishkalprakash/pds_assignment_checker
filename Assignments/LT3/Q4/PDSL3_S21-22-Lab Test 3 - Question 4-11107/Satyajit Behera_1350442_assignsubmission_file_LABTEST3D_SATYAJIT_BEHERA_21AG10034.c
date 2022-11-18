// NAME- SATYAJIT BEHERA
//  ROLL NO-21AG10034
// DEPT- AGRICULTURE AND FOOD ENGINEERING
// SECTION-03
// SOFTWARE- code block
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
// mcaro definition
#define MAXIMUM 30
// gobal variable
int t = -1;
int stack[MAXIMUM];
void push(char);
char p();
int match_the_expresion(char a,char b);
int check(char []);

// to check the expresion 
int check_expresion(char expresion[])
{
    int i;
    char temp;
    for (i = 0; i < strlen(expresion); i++)
    {
        if (expresion[i] == '(' || expresion[i] == '{' || expresion[i] == '[')
            push(expresion[i]);
        if (expresion[i] == ')' || expresion[i] == '}' || expresion[i] == ']')
            if (t == -1)

            {

                return 0;
            }
            else
            {
                temp = p();
                if (! match_the_expresion(temp, expresion[i]))
                {

                    return 0;
                }
            }
    }
    if (t == -1)

    {

        return 1;
    }
    else
    {
        return 0;
    }
}
// to check the parenthesis
int match_the_expresion(char a, char b)
{
    if (a == '[' && b == ']')
        return 1;
    if (a == '{' && b == '}')
        return 1;
    if (a == '(' && b == ')')
        return 1;
    return 0;
}
// /End of match()/

void push(char item)
{
    if (t == (MAXIMUM - 1))
    {

        return;
    }
    t = t + 1;
    stack[t] = item;
}
// /End of push()/

char p()
{
    if (t == -1)
    {

        exit(1);
    }
    return (stack[t--]);
}
// /End of p()/
int main()
{
    char expresion[MAXIMUM];
    int valid;
    // taking the input from the user
    printf("Enter an algebraic expression : ");
    scanf("%s", expresion);
    // calling the function 
    valid = check_expresion(expresion);
//    checking the validity of the statement 
    if (valid == 1)
        printf("matched parenthesis\n");
    else
        printf("unmatched parenthesis\n");

    return 0;
}
