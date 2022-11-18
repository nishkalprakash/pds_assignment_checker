#include<stdio.h>
#include<stdlib.h>
// NAME- ANMOL KUMAR MISHRA
// ROLL NO.-21EC30060
// SECTION-3
// PDS LAB TEST 3
//Q4
struct stack
{
    char arr[100];
    int n;
};

void insert(struct stack *st,char val)
{
    st->n=st->n + 1;
    st->arr[st->n] = val;
}

void del(struct stack *st)
{
    st->n = st->n - 1;
}

char top(struct stack *st)
{
    if(st->n==-1)
        return 'a';
    return st->arr[st->n];
}
int main()
{
     struct stack *st;
     char exp[50];
     st = (struct stack*)malloc(sizeof(struct stack));
     st->n = -1;
     printf("\nEnter expression: ");
     scanf("%s",exp);
     for(int i=0;exp[i]!='\0';i++)
     {
        if(exp[i]=='('||exp[i]=='['||exp[i]=='{')
        insert(st,exp[i]);
        else if(exp[i]==')')
        {
            char c = top(st);
            if(c=='(')
                del(st);
            else
            {
                printf("Unmatched Parenthesis.");
                return 0;
            }
        }
         else if(exp[i]=='}')
        {
            char c = top(st);
            if(c=='{')
                del(st);
            else
            {
                printf("Unmatched Parenthesis.");
                return 0;
            }
        }
         else if(exp[i]==']')
        {
            char c = top(st);
            if(c=='[')
                del(st);
            else
            {
                printf("Unmatched Parenthesis.");
                return 0;
            }
        }

     }

    printf("Matched Parenthesis.");

}
