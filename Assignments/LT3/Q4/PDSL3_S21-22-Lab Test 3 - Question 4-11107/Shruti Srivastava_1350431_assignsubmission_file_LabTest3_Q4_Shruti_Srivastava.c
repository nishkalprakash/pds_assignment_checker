/* Shruti Srivastava
   21EE30025
   Electrical Engg Dual Degree
   Codeblocks
   Windows 10 */


#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 100


int front = -1;
char stack[MAX];

void insert(char);
char remove();
int check(char,char);
int matching(char[]);


int main()
{
    int p;
    char C[MAX];

    printf("Enter the given sequence of brackets\n"); // taking the sequence as input
    scanf("%s",C);

    p = matching(C); /calling the matching function

    if(p==1)
     {
        printf("Result : Matched Parenthesis");
     }

    else
     {
       printf("Result  : Unmatched Parenthesis");
     }

} // end of main function

void insert(char a) // inserts an element in a stack
{
   if(front == MAX-1) // checks the overflown condition of stack
     {
        printf("Stack Overflown");
        return;
     }

    else
     {
       front++;
       stack[front] = a; // if the stack is not overflown then inserts the given element in the stack
     }
}// end of insert function

char remove() // removes an element out of the stack
{
   if(front == -1) // checks the underflown condition of the stack
     {
        exit (1);
     }

    else
     return(stack[front--]); // if the stack is not underflown then returns the required element out of the stack
}

int check(char p,char q) // checks the mismatched or match sequence of the parenthesis
{
  if(p== '(' && q == ')')
    {
       return (1);
    }
  if(p== '[' && q == ']')
    {
      return (1);
    }
  if(p== '{' && q == '}')
    {
      return (1);
    }

   else
    {
      return (0);
    }
}

int matching(char A[]) // checks the matching condition and returns the checked condition to the main function
{
    int i,j= strlen(A),k;
    char var;

    for(i=0; i<j; i++)
     {
        if(A[i]== '(' || A[i]== '{' || A[i]=='[')
          {
              insert(A[i]); // for left parenthesis stack gets filled
          }
        if(A[i]== ')' || A[i]== '}' || A[i]==']')
          {
             if(front == -1) // checks whether stack is filled or empty
              {
                return (0);
              }

             else
              {
                var = remove();

                k = check(var,A[i]); //calling of check function

                if(k==1)
                 {
                   return (1);
                 }

                else
                 {
                   return (0);
                 }
               }
            }
        }
}// end of the matching function

