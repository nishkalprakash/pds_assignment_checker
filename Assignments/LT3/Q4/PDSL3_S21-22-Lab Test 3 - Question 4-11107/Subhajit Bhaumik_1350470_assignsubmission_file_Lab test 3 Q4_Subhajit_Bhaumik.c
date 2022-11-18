#include <stdio.h>
#include <stdlib.h>
#define bool int

//writing the structure of a stack node
struct sNode
{
    char d;
    struct sNode* next;
};

// Function for pushing an item to stack
void push(struct sNode** topr, int newdata);

// Function for popping an item from stack
int pop(struct sNode** topr);

bool isMatching(char charact1, char charact2)
{
    if (charact1 == '(' && charact2 == ')')
        return 1;
    else if (charact1 == '{' && charact2 == '}')
        return 1;
    else if (charact1 == '[' && charact2 == ']')
        return 1;
    else
        return 0;
}
bool BracketsBalanced(char ex[])
{
    int i = 0;

    // Declaring an empty character stack
    struct sNode* stack = NULL;


    while (ex[i])
    {
        if (ex[i] == '{' || ex[i] == '(' || ex[i] == '[')
            push(&stack, ex[i]);


        if (ex[i] == '}' || ex[i] == ')'
                || ex[i] == ']')
        {

            if (stack == NULL)
                return 0;
            else if (!isMatching(pop(&stack), ex[i]))
                return 0;
        }
        i++;
    }

    if (stack == NULL)
        return 1; //means balanced
    else
        return 0; //means not balanced
}

//main function
int main()
{
    char ex[100] ;
    printf("Enter expression: \n");
    gets(ex);

    // Function calling
    if (BracketsBalanced(ex))
        printf("Result: Matched parenthesis\n");
    else
        printf("Result: Unmatched parenthesis\n");
    return 0;
}

void push(struct sNode** topr, int newdata)
{
   struct sNode*newnode
        = (struct sNode*)malloc(sizeof(struct sNode));

    if (newnode == NULL)
    {
        printf("Stack overflow n");
        getchar();
        exit(0);
    }

    // putting the data
    newnode->d = newdata;
    newnode->next = (*topr);

    (*topr) = newnode;
}
//Function for popping an item from stack
int pop(struct sNode** topr)
{
    char c;
    struct sNode* top;
    if (*topr == NULL)
    {
        printf("Stack overflow n");
        getchar();
        exit(0);
    }
    else
    {
        top = *topr;
        c = top->d;
        *topr = top->next;
        free(top);
        return c;
    }
}
