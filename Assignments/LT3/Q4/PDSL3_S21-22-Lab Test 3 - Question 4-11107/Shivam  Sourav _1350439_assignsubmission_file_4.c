#include <stdio.h>
#include <stdlib.h>
#include<string.h>
 
struct paranthesis{
    char data;
    struct paranthesis* next;
};
void push(struct paranthesis** top_ref, int new_data);
int pop(struct paranthesis** top_ref);
int isMatchingPair(char character1, char character2)
{
    if (character1 == '(' && character2 == ')')
        return (1);
    else if (character1 == '{' && character2 == '}')
        return (1);
    else if (character1 == '[' && character2 == ']')
        return (1);
    else
        return (0);
}
int areBracketsBalanced(char exp[])
{
    int i = 0;
    struct paranthesis* stack = NULL;
    while (exp[i])
    {
        if (exp[i] == '{' || exp[i] == '(' || exp[i] == '[')
            push(&stack, exp[i]);
        if (exp[i] == '}' || exp[i] == ')'
            || exp[i] == ']') {
            if (stack == NULL)
                return (0);
            else if (!isMatchingPair(pop(&stack), exp[i]))
                return (0);
        }
        i++;
    }
    if (stack == NULL)
        return 1; 
        return 0; 
}
 
int main()
{
    char exp[100] ;
    printf("enter expression");
    scanf("%s",exp);
 
    if (areBracketsBalanced(exp))
        printf("Matched paranthesis \n");
    else
        printf("Unmatched paranthesis\n");
    return 0;
}
 
void push(struct paranthesis** top_ref, int new_data)
{
    struct paranthesis* new_node
        = (struct paranthesis*)malloc(sizeof(struct paranthesis));
 
    if (new_node == NULL) {
        printf("Stack overflow n");
        getchar();
        exit(0);
    }
 
    new_node->data = new_data;
 
    new_node->next = (*top_ref);
    (*top_ref) = new_node;
}
 
int pop(struct paranthesis** top_ref)
{
    char res;
    struct paranthesis* top;
    if (*top_ref == NULL) {
        printf("Stack overflow n");
        getchar();
        exit(0);
    }
    else {
        top = *top_ref;
        res = top->data;
        *top_ref = top->next;
        free(top);
        return res;
    }
}