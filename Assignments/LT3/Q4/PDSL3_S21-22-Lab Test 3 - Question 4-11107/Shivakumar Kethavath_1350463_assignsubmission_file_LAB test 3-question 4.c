/* kethavath shivakumar
   21MI31013 */

#include <stdio.h>
#include <stdlib.h>
#define bool int

// structure of stack
typedef struct
{
    char data;
    struct Node *next;
} Node;

// function prototyped
void push(Node **top_ref, int new);
int pop(Node **top_ref);
bool isMatchingPair(char character1, char character2);
bool isBalanced(char string[]);

int main()
{
    char string[100];
    printf("Enter parenthesis: ");
    scanf("%s", string);

    // Function call
    if (isBalanced(string))
    {

        printf("Brackets are Balanced \n");
    }
    else
    {

        printf("Brackets are Not Balanced \n");
    }
    return 0;
}

// Function to push an item to stack
void push(Node **top_ref, int new)
{
    Node *n_node = (Node *)malloc(sizeof(Node));

    if (n_node == NULL)
    {
        exit(0);
    }

    // put in the data
    n_node->data = new;

    // link the old list off the new node
    n_node->next = (*top_ref);

    // move the head to point to the new node
    (*top_ref) = n_node;
}

// Function to pop the item from stack
int pop(Node **top_ref)
{
    char res;
    Node *top;

    // If memory not available then exit program
    if (*top_ref == NULL)
    {
        exit(0);
    }
    else
    {
        top = *top_ref;
        res = top->data;
        *top_ref = top->next;
        free(top); // memory free
        return res;
    }
}

bool isMatchingPair(char char1, char char2)
{
    if (char1 == '(' && char2 == ')')
        return 1;
    else if (char1 == '{' && char2 == '}')
        return 1;
    else if (char1 == '[' && char2 == ']')
        return 1;
    else
        return 0;
}

bool isBalanced(char exp[])
{
    int i = 0;

    //  empty character stack
    Node *stack = NULL;

    while (exp[i])
    {

        if (exp[i] == '{' || exp[i] == '(' || exp[i] == '[')
            push(&stack, exp[i]);

        if (exp[i] == '}' || exp[i] == ')' || exp[i] == ']')
        {

            if (stack == NULL)
                return 0;

            else if (!isMatchingPair(pop(&stack), exp[i]))
                return 0;
        }
        i++;
    }

    if (stack == NULL)
        return 1; // when balanced
    else
        return 0; // when not balanced
}
