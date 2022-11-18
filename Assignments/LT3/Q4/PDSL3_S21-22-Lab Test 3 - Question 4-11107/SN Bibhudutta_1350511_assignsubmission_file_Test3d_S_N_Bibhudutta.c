// S N Bibhudutta
// 21EC30043
// E&ECE Department 
// Package: Codeblocks
// Test 3

#include<stdio.h>
typedef struct
{
    int key;
}element;

typedef struct stack
{
    element list[100];
    int top;
}stack;

int isfull(stack *s)
{
    if(s->top>=100)
      return 1;

    return 0;

}

int empty(stack *s)
{
    if(s->top==-1)
     return 1;

     return 0;
}
void push(stack*s,element e)
{
    s->top++;
    s->list[s->top]=e;
}
void pop(stack*s)
{
    s->top--;
}
element top(stack *s)
{
    return s->list[s->top];
}




int main()
{
    stack z;
    z.top=-1;


    char A[100];
    printf("\nENTER THE EXPRESSION\n");
    scanf("%s",A);
    int i=0,flag=1;
    for(i=0;A[i]!='\0';i++)
    {
        if(A[i]==40||A[i]==123||A[i]==91)
        {
            element e;
            e.key=A[i];
            push(&z,e);
        }
        if(A[i]==41)
        {
           element e;
           e=top(&z);
           if(e.key!=40)
           {
               flag=0;
               break;
           }
           pop(&z);

        }
         if(A[i]==93)
        {
           element e;
           e=top(&z);
           if(e.key!=91)
           {
               flag=0;
               break;
           }
           pop(&z);

        }
         if(A[i]==125)
        {
           element e;
           e=top(&z);
           if(e.key!=123)
           {
               flag=0;
               break;
           }
           pop(&z);

        }


    }
    if(z.top!=-1)
     flag=0;
    if(flag==1)
    printf("\nResult:Matched parenthesis");
    else
    printf("\nResult:UnMatched parenthesis");
    return 0;
}