//Gargi Gangwar
//21MF10017
//C program to to examine whether the pairs and the orders of parenthesis are correct in the expression

#include <stdio.h>
#include <stdlib.h>

//A function that uses stack
struct funcstack
{
    int size;
    int top;
    char *str;
};

//This function sees if stack is full or not
int CheckFull(struct funcstack *ptr)
{
    if (ptr->top == ptr->size - 1)
        return 1;
    else
        return 0;
}

//This function sees if stack is empty or not
int CheckEmpty(struct funcstack *ptr)
{
    if (ptr->top == -1)
        return 1;
    else
        return 0;
}

//This function extracts an element from the stack
char pop(struct funcstack* ptr)
{
    if(CheckEmpty(ptr))
    {
        printf("Underflow of stack! \n Can't pop element from stack\n");

        return -1;
    }
    else
    {
        char value = ptr->str[ptr->top];
        ptr->top--;

        return value;
    }
}

//Element put in the stack through this function
void pushele(struct funcstack* ptr, char value){
    if(CheckFull(ptr))
    {
        printf("Overflow in stack! \n Can't push %d into the stack\n", value);
    }
    else
    {
        ptr->top++;
        ptr->str[ptr->top] = value;
    }
}

//Function prototypes
int findmatch(char p, char q);
char Top_stack(struct funcstack* sp);

int MatchParenthesis(char * exp)
{

    struct funcstack* sp;
    sp->size = 100;
    sp->top = -1;

    //Dynamic memory allocation
    sp->str = (char *)malloc(sp->size * sizeof(char));
    char popchar;

    for (int i = 0; exp[i]!='\0'; i++)
    {
        if(exp[i]=='(' || exp[i]=='{' || exp[i]=='[')
            pushele(sp, exp[i]);

        else if(exp[i]==')'|| exp[i]=='}' || exp[i]==']')
        {
            if(CheckEmpty(sp))
                return 0;
            popchar = pop(sp);

            if(!findmatch(popchar, exp[i]))
              return 0;
        }
    }

    if(CheckEmpty(sp))
        return 1;
    else
        return 0;

}

//the main function
int main()
{
    char *express;

    //Dynamic memory allocation
    express=(char*)malloc(100*sizeof(char));
    printf("Enter expression of string of parenthesis\n");
    scanf("%s",express);   //Reading the expression
    printf("%s\n",express);

    if(MatchParenthesis(express))
        printf("Parenthesis Matched \n");
    else
        printf("Parenthesis unmatched \n");
    free(express);
    return 0;
}

char Top_stack(struct funcstack*sp)
{
    return sp->str[sp->top];
}

//function for matching
int findmatch(char p, char q)
{
    if(p=='{' && q=='}')
        return 1;
    if(p=='[' && q==']')
        return 1;
    if(p=='(' && q==')')
        return 1;
  return 0;
}
