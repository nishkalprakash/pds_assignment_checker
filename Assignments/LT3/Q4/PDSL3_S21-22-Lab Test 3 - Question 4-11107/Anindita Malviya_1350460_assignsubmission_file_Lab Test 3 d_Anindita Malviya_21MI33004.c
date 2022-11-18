/*
Anindita Malviya
21MI33004
Section3
Code blocks
Question 4
*/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define MAX 50
int top=-1;

int stack[50];

void fill(char);
char pop();
int matchit(char a,char b);
int checking(char []);

int main()
{
        char A[50];
        printf("Enter expression: ");                        //Prompting user for the brackets
        scanf("%s",A);
        int checker = checking(A);
        if(checker == 1)                                     // checking for all the conditions...calling the checking function
        {
                printf("Valid Expression\n");
        }
        else
        {
                printf("Invalid Expression\n");
        }

}


void fill(char item)                                            //stacking
{
        if(top == (MAX-1))
        {
                printf("Overflow\n");
                return;
        }
        top++;
        stack[top]=item;
}
char pop()
{
        if(top==-1)
        {
                printf("Underflow\n");
                exit(1);
        }
        return(stack[top--]);
}

int checking(char A[] )                                       //checking order of the brackets
{
        char T;
        int len = strlen(A);
        for(int i = 0; i < len;i++)
        {
                if(A[i]=='(' || A[i]=='{' || A[i]=='[')
                    {
                          fill(A[i]);
                    }

                if(A[i]==')' || A[i]=='}' || A[i]==']')
                {
                        if(top==-1)
                        {
                                printf("Right brackets are more than left brackets\n");
                                return 0;
                        }
                        else
                        {
                                T = pop();
                                if(matchit(T, A[i]))
                                {
                                        printf("Mismatched brackets are : ");
                                        printf("%c and %c\n",T,A[i]);
                                        return 0;
                                }
                        }
                }
        }

        if(top == -1)
        {
                printf("Balanced brackets\n");
                return 1;
        }
        else
        {
                printf("Left brackets more than right brackets\n");
                return 0;
        }
}


int matchit(char a,char b)                              //function to check if a and b are same
{
        if(a=='[' && b==']')
        {
                return 0;
        }
        if(a=='{' && b=='}')
            {
                 return 0;
            }

        if(a=='(' && b==')')
        {
              return 0;
        }

        return 1;
}
