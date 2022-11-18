#include<stdio.h>
#include<stdlib.h>

/*Name-Chetna
  roll no.-21CS10019
  dep-CSE
  package-code blocks*/

#define bool int
struct snew
{
   char data;
   struct snew *next;
};

void put(struct snew** highref, int newdata);

int pop(struct snew** highref);

/* Checks if character1 and character2 are matching left
   and right Parenthesis */
bool match(char char1, char char2)
{
   if (char1 == '(' && char2 == ')')
     return 1;
   else if (char1 == '{' && char2 == '}')
     return 1;
   else if (char1 == '[' && char2 == ']')
     return 1;
   else
     return 0;
}

/*Returns 1 if expression has balanced Parenthesis */
bool areParenBalanced(char exp[])
{
   int i = 0;

   /* Declaring an empty character stack */
   struct snew *stack = NULL;
   while (exp[i])
   {
      if (exp[i] == '{' || exp[i] == '(' || exp[i] == '[')
        put(&stack, exp[i]);

      if (exp[i] == '}' || exp[i] == ')' || exp[i] == ']')
      {
         if (stack == NULL)
           return 0;

         else if ( !match(pop(&stack), exp[i]) )
           return 0;
      }
      i++;
   }

   if (stack == NULL)
     return 1; //balanced
   else
     return 0;  //not balanced
}
  /* program to test above functions*/
int main()
{
  char exp[100];
  printf("Enter the expression:");
  scanf("%s",&exp);

  if (areParenBalanced(exp))
    printf("Matched Parenthesis");
  else
    printf("Unmatched Parenthesis");
  return 0;
}

/* push an item to stack*/
void push(struct snew** highref, int newdata)
{
  /* allocating the node */
  struct snew* new_node =
            (struct snew*) malloc(sizeof(struct snew));

  if (new_node == NULL)
  {
     printf("Stack overflow n");
     getchar();
     exit(0);
  }


  new_node->data  = newdata;

  new_node->next = (*highref);

  (*highref)  = new_node;
}

/*  will pop an item from stack*/
int pop(struct snew** highref)
{
  char res;
  struct snew *high;

  /*error if the stack is empty */
  if (*highref == NULL)
  {
     printf("Stack overflow n");
     getchar();
     exit(0);
  }
  else
  {
     high = *highref;
     res = high->data;
     *highref = high->next;
     free(high);
     return res;
  }
}
