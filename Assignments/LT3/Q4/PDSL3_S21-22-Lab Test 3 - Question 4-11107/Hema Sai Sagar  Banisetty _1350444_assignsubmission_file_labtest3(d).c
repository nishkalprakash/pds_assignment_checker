/*
Name            : Banisetty Hema Sai Sagar
Roll            : 21EC10011
Dept            : E&ECE
Package         : Code Blocks
Assignment Class: 6
*/
#include <stdio.h>
#include <stdlib.h>
#define bool int
struct sNode {
    char data;
    struct sNode* next;
};

void push(struct sNode** TopRef, int NewData);
int pop(struct sNode** TopRef);
bool MatchingPair(char character1, char character2)
{
    if (character1 == '(' && character2 == ')')
        return 1;
    else if (character1 == '{' && character2 == '}')
        return 1;
    else if (character1 == '[' && character2 == ']')
        return 1;
    else
        return 0;
}

bool BracketsBalanced(char exp[])
{
    int i = 0;
    struct sNode* stack = NULL;
    while (exp[i]){
        if (exp[i] == '{' || exp[i] == '(' || exp[i] == '[')
            push(&stack, exp[i]);
        if (exp[i] == '}' || exp[i] == ')'
            || exp[i] == ']') {
            if (stack == NULL)
                return 0;
            else if (!MatchingPair(pop(&stack), exp[i]))
                return 0;
        }
        i++;
    }
    if (stack == NULL)
        return 1;
    else
        return 0;
}

// Code for User
int main()
{
    char exp[100] = " [()]{}{[()()]()}";
    if (BracketsBalanced(exp))
        printf("Matched Parenthesis \n");
    else
        printf("Unmatched Parenthesis \n");
    return 0;
}

void push(struct sNode** TopRef, int NewData)
{
    struct sNode* NewNode
        = (struct sNode*)malloc(sizeof(struct sNode));
    if (NewNode == NULL) {
        printf("Stack overflow n");
        getchar();
        exit(0);
    }
    NewNode->data = NewData;
    NewNode->next = (*TopRef);
    (*TopRef) = NewNode;
}

int pop(struct sNode** TopRef)
{
    char res;
    struct sNode* top;
    if (*TopRef == NULL) {
        printf("Stack overflow n");
        getchar();
        exit(0);
    }
    else {
        top = *TopRef;
        res = top->data;
        *TopRef = top->next;
        free(top);
        return res;
    }
}
