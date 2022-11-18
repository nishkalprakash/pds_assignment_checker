/*Soumojit Bhattacharya 
21EC10071 
macos visual studio code*/
#include <stdio.h>
#include <stdlib.h>

struct stack//structure stack
{
    int top;
    int* array;
};

void add(struct stack* exp,int val)//function to add to stack
{
    if(exp->top==0)
    {
        exp->array=(int*)malloc(sizeof(int));//allocate memory the first time and reallocate from next time to increase size of stack
    }
    else
    exp->array=(int*)realloc(exp->array,(exp->top+1)*sizeof(int));
    exp->array[exp->top]=val;
    exp->top++;
}

int pop(struct stack* exp)//function to pop and return last value of stack
{
    exp->top--;
    int val=exp->array[exp->top];
    if(exp->top>0)
    exp->array=(int*)realloc(exp->array,(exp->top)*sizeof(int));//decrease size of stack
    else
    if(exp->top>0)
    free(exp->array);//free to decrease size of stack
    return val;
}

int main()
{
    printf("Enter expression: ");//take input
    char s[100];
    scanf("%s",s);
    struct stack* exp=(struct stack*)malloc(sizeof(struct stack));//allocate memory
    printf("Result: ");
    exp->top=0;//initialize size of stack
    int chk=0;
    for(int i=0;s[i]!='\0';i++)
    {
        if(s[i]=='(')   //encode (,{,[ to values 0,1,2
        add(exp,0);
        if(s[i]=='{')
        add(exp,1);
        if(s[i]=='[')
        add(exp,2);
        if(s[i]==')')     //check brackets
        {
            if(pop(exp)!=0)//check last opened brackets
            {
                chk=1;
                break;
            }
        }
        if(s[i]=='}')
        {
            if(pop(exp)!=1)
            {
                chk=1;
                break;
            }
        }
        if(s[i]==']')
        {
            if(pop(exp)!=2)
            {
                chk=1;
                break;
            }
        }
    }
    if(exp->top!=0)
    free(exp->array);//free pointer if not freed already
    if(exp->top==0&&chk==0)//if all brackets closed properly matched parenthesis
    printf("Matched parenthesis");//output
    else
    printf("Unmatched parenthesis");
    free(exp);
    printf("\n");
    return 0;
}