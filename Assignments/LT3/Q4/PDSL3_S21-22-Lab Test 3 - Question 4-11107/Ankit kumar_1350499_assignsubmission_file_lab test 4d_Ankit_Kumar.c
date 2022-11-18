/*Name: Ankit Kumar
Roll no.21MI10010
Department: Mining Engineering*/

#include <stdio.h>
#include <stdlib.h>
#define bool int
 

struct sMode {
    char input;
    struct sMode* next;
};
 

void push(struct sMode** top_ref, int new_input);
 
int pop(struct sMode** top_ref);
 

bool isMatchingPair(char character4, char character5)
{
    if (character4 == '(' && character5 == ')')
        return 1;
    else if (character4 == '{' && character5 == '}')
        return 1;
    else if (character4 == '[' && character5 == ']')
        return 1;
    else
        return 0;
}
 
bool areBracketsBalanced(char exp[])
{
    int j = 0;
 
    
    struct sMode* stack = NULL;
 
    
    while (exp[j])
    {
        
        if (exp[j] == '{' || exp[j] == '(' || exp[j] == '[')
            push(&stack, exp[j]);
 
        if (exp[j] == '}' || exp[j] == ')'
            || exp[j] == ']') {
 
            
            if (stack == NULL)
                return 0;
            
            else if (!isMatchingPair(pop(&stack), exp[j]))
                return 0;
        }
        j++;
    }
 
    
    if (stack == NULL)
        return 1; 
    else
        return 0; 
}
 

int main()
{
    char exp[100] = "{()}[]";
 
    // Function call
    if (areBracketsBalanced(exp))
        printf("Matched parenthesis \n");
    else
        printf("Unmatched parenthesis \n");
    return 0;
}
 
void push(struct sMode** top_ref, int new_input)
{
    
    struct sMode* new_Mode
        = (struct sMode*)malloc(sizeof(struct sMode));
 
    if (new_Mode == NULL) {
        printf("overflow n");
        getchar();
        exit(0);
    }

    new_Mode->input = new_input;
 
    new_Mode->next = (*top_ref);
 
    (*top_ref) = new_Mode;
}

int pop(struct sMode** top_ref)
{
    char res;
    struct sMode* top;
 
    if (*top_ref == NULL) {
        printf("overflow n");
        getchar();
        exit(0);
    }
    else {
        top = *top_ref;
        res = top->input;
        *top_ref = top->next;
        free(top);
        return res;
    }
}