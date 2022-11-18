/*Name:Kondakindi Shreya Reddy
Roll number:21CE10032
Package:CodeBlocks
Operating System:Windows*/
#include<stdio.h>
#include<stdlib.h>
#define bool int
struct paren
{
    char data;
    struct paren* next;
};
void push(struct paren** top_ref,int new_data);
int pop(struct paren** top_ref);
bool isMatchingPair(char c1,char c2)
{
    if(c1=='(' && c2==')')
        return 1;
    else if(c1=='{' && c2=='}')
        return 1;
    else if(c1=='[' && c2==']')
        return 1;
    else
        return 0;
}
bool checkBracketsPaired(char s[])
{
    int i=0;
    struct paren*stack=NULL;
    while(s[i])
    {
        if(s[i]=='{' || s[i]=='(' || s[i]=='[')
            push(&stack,s[i]);
        if(s[i]=='}' || s[i]==')' || s[i]==']')
        {
            if(stack==NULL)
                return 0;
            else if(isMatchingPair(pop(&stack),s[i]))
                return 0;
        }
        i++;
    }
    if(stack==NULL)
        return 1;
    else
        return 0;
}
int main()
{
    char a[100];
    printf("enter the expression:");
    scanf("%s",a);
    if(checkBracketsPaired(a))
        printf("paired \n");
    else
        printf("Not Paired \n");
    return 0;
}
void push(struct paren** top_ref,int new_data)
{
    struct paren* new_node=(struct paren*)malloc(sizeof(struct paren));
    if(new_node==NULL)
    {
        printf("Oh No! n");
        getchar();
        exit(0);
    }
    new_node->data=new_data;
    new_node->next=(*top_ref);
    (*top_ref)=new_node;
}
int pop(struct paren** top_ref)
{
    char r;
    struct paren*top;
    if(*top_ref==NULL)
    {
        printf("Oh No n");
        getchar();
        exit(0);
    }
    else
    {
        top=*top_ref;
        r=top->data;
        *top_ref=top->next;
        free(top);
        return r;
    }
}
