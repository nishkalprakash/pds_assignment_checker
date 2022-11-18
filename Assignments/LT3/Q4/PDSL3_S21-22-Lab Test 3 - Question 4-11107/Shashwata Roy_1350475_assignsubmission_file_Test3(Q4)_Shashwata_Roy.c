/*
Name: Shashwata Roy
Roll: 21MA10055
Dept: Maths and Computing
Package: Codeblocks
Test No: 3
*/

#include <stdio.h>
#include<stdlib.h>

struct s
{
    char data;
    struct s *next;
};

void ins(struct s** tr, int new1)   //For inserting elements in stack
{
    struct s* nn = (struct s*) malloc(sizeof(struct s));
    if (nn == NULL)
        printf("Error, stack overflowed \n");
    nn->data =new1;
    nn->next=(*tr);
    (*tr)=nn;
}

int del(struct s** tr)  //For deleting elements from stack
{
    char ans;
    struct s *ptr;
    if (*tr == NULL)
        printf("Error, stack overflowed \n");
    else
    {
        ptr = *tr;
        ans = ptr->data;
        *tr = ptr->next;
        free(ptr);
        return ans;
    }
}

int mp(char c1, char c2)
{
    if (c1=='('&&c2==')')
        return 1;
    else if (c1=='{'&&c2=='}')
        return 1;
    else if (c1=='['&&c2==']')
        return 1;                                       //We return 1(true) if the given expression is matched, otherwise return 0(false)
    else
        return 0;
}
int paren(char s[])
{
    int i = 0;
    struct s *stack = NULL;
    while (s[i])
    {
        if(s[i]=='{'||s[i]=='('||s[i]=='[')             //If the s[i] is a starting parenthesis then insert it into the stack
            ins(&stack, s[i]);

        if(s[i]=='}'||s[i]==')'||s[i]==']')             //If s[i] is an ending parenthesis then delete it from stack and check if the deleted parenthesis has a matching pair
        {
            if(stack==NULL)                             //If an ending parenthesis exists without a pair then return 0, i.e false
                return 0;

            else if(!mp(del(&stack),s[i]))              //Delete the top element from the stack, as if it is not a pair parenthesis of character then there must be a mismatch.
                return 0;
        }
        i++;
    }                                                   // If there is something left in expression, then there exists a starting parenthesis which has not been closed
    if (stack == NULL)
        return 1;
    else
        return 0;
}

int main()
{
    char s[100];
    printf("Enter the string: ");
    scanf("%s",s);
    if (paren(s))
        printf("Result: Matched parenthesis\n");
    else
        printf("\nResult: Unmatched parenthesis\n");
    return 0;
}
