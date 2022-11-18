// Name: Kshitij Banerjee
// Roll No: 21CH10035
// Section: 3
// Department: Chemical
// Package: Codeblocks


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct Stack
{
    char top;
    int size;
    char *array;
} Stack;
struct Stack *createStack(int size)
{
    Stack *stack = (Stack *)malloc(sizeof(Stack));
    stack->size = size;
    stack->top = -1;
    stack->array = (char *)malloc(stack->size * sizeof(char));
    return stack;
}
int isFull(Stack* stack)
{
    return stack->top == stack->size - 1;
}
int isEmpty(Stack *stack)
{
    return stack->top == -1;
}
void push(Stack *stack, char item)
{
    if (isFull(stack))
        return;
    stack->array[++stack->top] = item;
}
void pop(Stack *stack)
{
    if (isEmpty(stack))
        return;
    stack->array[stack->top--];
}
int main()
{
    Stack *stack = createStack(100);
    char string[100];
    printf("Enter the expression :  ");
    gets(string);
    for (int i = 0; i < strlen(string); i++)
    {
        if (string[i] == '(' || string[i] == '{' || string[i] == '[')
        {
            push(stack, string[i]);
        }
        else if (string[i] == ')')
        {
            if (stack->array[stack->top] != '(')
            {
                printf("The expression is not balanced \n");
                return 0;
            }
            else
            {
                pop(stack);
            }
        }
        else if (string[i] == '}')
        {
            if (stack->array[stack->top] != '{')
            {
                printf("The expression is not balanced \n");
                return 0;
            }
            else
            {
                pop(stack);
            }
        }
        else if (string[i] == ']')
        {
            if (stack->array[stack->top] != '[')
            {
                printf("The expression is not balanced \n");
                return 0;
            }
            else
            {
                pop(stack);
            }
        }
    }
    if (isEmpty(stack))
    {
        printf("The Expression is completely balanced \n");
    }
    else
    {
        printf("The expression is not balanced\n");
    }
    return 0;
}
