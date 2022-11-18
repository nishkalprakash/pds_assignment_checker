#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node
{
    char data;
    struct node *next;
};
typedef struct node *stack;

void push(stack *st, char c);
void pop(stack *st);
char top(stack st);
int check_Balanced_Parenthesis(char *str, int n);

int main()
{

    char *str;
    // For the input string
    str = (char *)malloc(1000 * sizeof(char));
    // Allocate memory to the pointer
    printf("Enter the string:\n");
    scanf("%s", str); // Taking input of the string
    printf("%s\n", str);

    stack st;                                // Declaring stack
    st = (stack)malloc(sizeof(struct node)); // Allocating a node to the stack
    st = NULL;                               // initialising st with NULL

    if (check_Balanced_Parenthesis(str, strlen(str)))
    {
        printf("Matched\n");
    }
    else
    { // If the parentheses aren't balanced
        printf("Not Matched\n");
    }
    return 0;
}
void push(stack *st, char c)
{ // push function
    stack n = (stack)malloc(sizeof(struct node));
    // creating a node, stack is called by reference
    n->data = c;
    n->next = NULL;
    if (*st == NULL)
    { // if the stack is empty
        *st = n;
        // head is assigned to the new node
        return;
    }
    n->next = *st; // creating the link
    *st = n;       // updating the head
}

int empty(stack st)
{ // returns true if the stack is empty or the head is NULL
    if (st == NULL)
    { // Condition that the stack is empty
        return 1;
    }
    else
    {
        return 0;
        // Not empty
    }
}

void pop(stack *st)
{ // pop function(remove the head) calling stack by reference
    if (empty(*st))
    { // If the stack is empty
        *st = NULL;
        return;
    }
    stack temp = *st;
    *st = (*st)->next;
    // assign head to the next element
    free(temp);
    // deleting the node
    return;
}

char top(stack st)
{ // access the top element or returns the data stored in the head of the linked list
    return st->data;
}

int check_Balanced_Parenthesis(char *str, int n)
{
    stack st;
    // Declaring a stack
    st = (stack)malloc(sizeof(struct node));
    // Allocating a node to the stack
    st = NULL;
    // initialising st with NULL
    for (int i = 0; i < n; i++)
    {
        if (str[i] == '(')
        {
            push(&st, str[i]);
        }
        if (str[i] == ')')
        {
            if (empty(st))
            {
                return 0;
            }
            if (!empty(st) && top(st) == '(')
            {
                pop(&st);
            }
        }
    }
    return empty(st);
}
