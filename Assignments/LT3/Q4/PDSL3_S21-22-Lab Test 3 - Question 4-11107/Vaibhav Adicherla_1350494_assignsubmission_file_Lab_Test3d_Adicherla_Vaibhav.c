/* name: Adicherla Vaibhav
Roll no.:21BT10002
Department: Biotechnology and Biochemistry Btech4yrs
Package:code blocks
Operating system: Windows
Date : 16/06/2022  */

#include<stdio.h>
#define bool int
#include<stdlib.h>


struct Node // stack node structure
{   char data;
    struct Node*next;
};

void ent(struct Node** tref, int ndata); // void function to enter new items into stack

int out(struct Node** tref);// function to get an item from stack

bool matchingexp(char charac1 , char charac2)// boolian function which returns 1 when matching and 0 when not
{
    if (charac1 == '(' && charac2 == ')')
        return 1;
    else if (charac1 == '['&& charac2== ']')
        return 1;
    else if (charac1 == '{' && charac2 == '}')
        return 1;
        return 0;

}
 bool exp_check(char exp[])
 {
     int i = 0;
     struct Node*stack = NULL;
     while (exp[i])
     {
         if (exp[i] == '{' || exp[i] =='('  || exp[i]=='[')
                ent(&stack, exp[i]);
         if (exp[i] == '}' || exp[i] ==')'  || exp[i]==']')
         {
             if (stack == NULL)
                return 0;
             else if (! matchingexp(out(&stack),exp[i]) )
                return 0;

         }
         i++;
     }
     if ( stack== NULL)
        return 1;
     else
        return 0;


 }

 int main()
 {
     char exp[100] ="[()}" ;
     if (exp_check(exp))
        printf("Matched Parenthesis");
  else
    printf("Unmatched Parenthesis");
  return 0;
}


void ent(struct Node** tref, int ndata)// void function to enter new items into stack

{
  /* allocate node */
  struct Node* n_node =
            (struct Node*) malloc(sizeof(struct Node));

  if (n_node == NULL)
  {
     printf("Stack overflow n");
     getchar();
     exit(0);
  }


  n_node->data  = ndata;// assigning the newdata

  //link the old list off the new node
  n_node->next = (*tref);

  // assigning the head to the new node begining
  (*tref) = n_node;
}

// Function to get an item from stack
int out(struct Node** tref)
{
  char a;
  struct Node *top;

  //If stack is empty then exit
  if (*tref == NULL)
  {
     getchar();
     exit(0);
  }
  else
  {
     top = *tref;
     a = top->data;
     *tref = top->next;
     free(top);
     return a;
  }
 }

