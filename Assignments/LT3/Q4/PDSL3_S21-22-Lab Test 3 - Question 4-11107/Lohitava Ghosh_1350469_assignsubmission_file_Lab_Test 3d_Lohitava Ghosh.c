/*
Name:Lohitava Ghosh
Roll no.:21AE10023
Department:Aerospace Engg Btech.
Package:code blocks
Operating system: Windows
*/

#include <stdio.h>
#include <stdlib.h>

struct Stack //structure for stack
{
    int top;
    int cap;
    char *c;
};

struct Stack* create(int n)
{
    struct Stack* p=(struct Stack*)malloc(sizeof(struct Stack));
    p->top=-1;
    p->cap=n;
    p->c=(char*)malloc(p->cap*sizeof(char));
}

int isEmpty(struct Stack* p)
{
    if(p->top==-1)
    return(1);
    return(0);
}

void push(char x,struct Stack* p)
{
    p->top++;
    *(p->c+p->top)=x;
}

char pop(struct Stack* p)
{
    p->top--;
    return(*(p->c+p->top+1));
}

int main()
{
    char *s=malloc(1);
    printf("Enter the sequence: ");
    scanf("%s",s);
    int i=0;
    while(*(s+i)!='\0')
    {
        i++;
    }
    struct Stack* st=create(i);
    i=0;
    int flag=0;
    char x;
    char t;
    while(*(s+i)!='\0')
    {
        x=*(s+i);
        if(x=='['||x=='{'||x=='(')
        push(x,st);
        else
        {
            if(isEmpty(st))
            {
                flag=1;
                break;
            }
            t=pop(st);
            if(x==')'&&t!='(')
            {
                printf("%d",i);
                flag=1;
                break;
            }
            if(x=='}'&&t!='{')
            {
            printf("%d",i);
            flag=1;
            break;
            }
            if(x==']'&&t!='[')
            {
                printf("%d",i);
                flag=1;
                break;
            }
        }
        i++;
    }
    if(flag==1)
    printf("Result: Unmatched parenthesis");
    else
    printf("Result: Matched parenthesis");

    return 0;
}
