/*
PRANJAL SINGH
Roll:21EC10051
Electronics and Electrical Communication engineering
codeblocks
Assignment class:6
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 30

struct stack
{
char ajj[MAX];
int up;
}d;

void push(char item)
{
if (d.up == (MAX - 1))
printf ("Stack is Full\n");
else
{
d.up = d.up + 1; // Push the char and increment top
d.ajj[d.up] = item;
}}

void down()
{
if (d.up == - 1)
{
printf ("Stack is Empty\n");
}
else
{
d.up = d.up - 1;
}}

int main()
{
char exp[MAX];
int i = 0;
d.up = -1;
printf("\n ENTER THE EXPRESSION : ");
scanf("%s", exp);
for(i = 0;i < strlen(exp);i++)
{
if(exp[i] == '(' || exp[i] == '[' || exp[i] == '{')
{
push(exp[i]); // Push the open bracket
continue;
}
else if(exp[i] == ')' || exp[i] == ']' || exp[i] == '}') // If a closed bracket is encountered
{
if(exp[i] == ')')
{
if(d.ajj[d.up] == '(')
{
down();
}
else
{
printf("\nResult:Unmatched Parenthesis\n");
break;
}}
if(exp[i] == ']')
{
if(d.ajj[d.up] == '[')
{
down();
}
else
{
printf("\nResult:Unmatched Parenthesis\n");
break;
}}
if(exp[i] == '}')
{
if(d.ajj[d.up] == '{')
{
down();
}
else
{
printf("\nResult:Unmatched Parenthesis\n");
break;
}}}}
if(d.up == -1)
{
printf("\n Result:Matched Parenthesis \n");
}}
