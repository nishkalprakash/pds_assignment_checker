/*
Name:Biswaranjan Samal
Roll no: 21IM10011
Dept: Industrial and Systems Engineering
Package: Codeblocks
Assignment: lab test 3,Question 4
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct _node     //declaration of node  structure for linked list
{
    char data;
    struct _node *next;
} node;

typedef struct _stack    //declaration of stack structure
{
    int size;
    node* top;
} stack;

void print(stack* S)     //function which prints
{
    if(S->size == 0)
        return;
    node* head = S->top;
    while(head)
    {
        printf("%d ",head->data);
        head = head->next;
    }
}

stack* createStack()     //pointer to stack and allocation of memory to it
{
    stack* S;
    S = (stack*)malloc(sizeof(stack));
    S->size = 0;
    S->top = NULL;
    return S;
}

int isEmpty(stack* S)      //creation of isemoty function in
{
    if(S->size == 0)
        return 1;
    else
        return 0;
}

char peek(stack* S)
{
    return S->top->data;
}

char pop(stack* S)
{
    char topData = S->top->data;
    node* presentTop = S->top;
    (S->size)--;
    S->top = S->top->next;
    free(presentTop);
    return topData;
}
//function to push an item to stack
void push(stack* S,char data)        //function  to push an item in stack
{

    node* topp;
    topp = (node*)malloc(sizeof(node));
    topp->data = data;
    topp->next = S->top;
    S->top = topp;
    (S->size)++;
}



int main()
{
    stack* S = createStack();
    char parenthesis[1000];
    printf("Enter the Parenthesis:");
    scanf("%s",parenthesis);

    int i;
    for(i = 0; parenthesis[i] != '\0'; i++) //checks till end of character string array
    {
        if(parenthesis[i] == '(' || parenthesis[i] == '{' || parenthesis[i] == '[') //checks the allowed simble started
            push(S,parenthesis[i]); //pushes stack
        else
        {
            if(parenthesis[i] == ')')
            {
                if(peek(S) == '(')
                    pop(S);
                else
                {
                    printf("Result: Unmatched parenthesis"); //if unmatched in any of the allowed charactr,shows message not allowed
                    return 0;
                }
            }
            if(parenthesis[i] == '}')
            {
                if(peek(S) == '{')
                    pop(S);                   //similarly check for {} character
                else
                {
                    printf("Result: Unmatched parenthesis");
                    return 0;
                }
            }
            if(parenthesis[i] == ']')
            {
                if(peek(S) == '[')
                    pop(S); //similarly checks for []
                else
                {
                    printf("Result: Unmatched parenthesis");
                    return 0;
                }
            }
        }
    }
    if(isEmpty(S))
    {
        printf("Result: Matched parenthesis");   //function call
    }
    else
    {
        printf("Result: Unmatched parenthesis");
    }
}

