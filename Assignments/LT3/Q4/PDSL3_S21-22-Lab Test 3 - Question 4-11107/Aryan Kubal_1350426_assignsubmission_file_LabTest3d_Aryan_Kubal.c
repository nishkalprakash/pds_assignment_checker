/***************************
 * Name : Aryan Kubal
 * Roll number : 21MT30012
 * Section : 3
***************************/

#include <stdio.h>
#include <stdlib.h>
//Stack
struct stack
{
    int size;
    int top;
    char *arr;
};

//function to check whether stack is full
int isFull(struct stack *ptr)
{
    if (ptr->top == ptr->size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
//function to check whether stack is empty
int isEmpty(struct stack *ptr)
{
    if (ptr->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
//function to pop out a element out of stack

char pop(struct stack* ptr){
    if(isEmpty(ptr))
    {
        printf("Stack Underflow! Cannot pop from the stack\n");
        return -1;
    }
    else
    {
        char val = ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}

//function to push a element into stack
void push(struct stack* ptr, char val){
    if(isFull(ptr))
    {
        printf("Stack Overflow! Cannot push %d to the stack\n", val);
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top] = val;
    }
}

char stackTop(struct stack* sp);

int match(char a, char b);

int parenthesMatch(char * exp)
{

    struct stack* sp;
    sp->size = 100;
    sp->top = -1;
    sp->arr = (char *)malloc(sp->size * sizeof(char));
    char popped_ch;

    for (int i = 0; exp[i]!='\0'; i++)
    {
        if(exp[i]=='(' || exp[i]=='{' || exp[i]=='[')
        {
            push(sp, exp[i]);
        }
        else if(exp[i]==')'|| exp[i]=='}' || exp[i]==']')
        {
            if(isEmpty(sp))
            {
                return 0;
            }
            popped_ch = pop(sp);
            if(!match(popped_ch, exp[i]))
            {
              return 0;
            }
        }
    }

    if(isEmpty(sp))
    {
        return 1;
    }
    else
    {
        return 0;
    }

}

int main()
{
    char *s;
    s=(char*)malloc(100*sizeof(char));
    printf("Enter the expression\n");
    scanf("%s",s);
    printf("%s\n",s);
    if(parenthesMatch(s))
    {
        printf("Matched Parenthesis\n");
    }
    else
    {
        printf("Unmatched Parenthesis\n");
    }
    free(s);
    return 0;
}

char stackTop(struct stack* sp)
{
    return sp->arr[sp->top];
}

int match(char a, char b)
{
    if(a=='{' && b=='}')
    {
        return 1;
    }
    if(a=='[' && b==']')
    {
        return 1;
    }
    if(a=='(' && b==')')
    {
        return 1;
    }
  return 0;
}