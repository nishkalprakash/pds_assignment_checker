/*
Name- Krish Agarwal
Roll No.- 21NA10018
Department- Ocean Engineering and Naval Architecture
Section- 3
IDE-VS code
*/
#include<stdio.h>
#include<stdlib.h>
#include <string.h>
struct stack{
  char stck[100];
  int top;
}s;

void push(char item) {
  if (s.top == (99))
    printf("Stack is Full\n");

  else {
    s.top = s.top + 1;
    s.stck[s.top] = item;
  }
}

void pop() {
  if (s.top == -1)
    printf("Stack is Empty\n");

  else
    s.top = s.top - 1;
}

int checkPair(char val1,char val2){
    return (( val1=='(' && val2==')' )||( val1=='[' && val2==']' )||( val1=='{' && val2=='}' ));
}

int checkBalanced(char expr[], int len){
      
    for (int i = 0; i < len; i++)  
    { 
        if (expr[i] == '(' || expr[i] == '[' || expr[i] == '{')  
        {  
          push(expr[i]); 
        } 
        else
        {
        /* exp = {{}}}
        if you look closely above {{}} will be matched with pair, Thus, stack "Empty"
        but an extra closing parenthesis like '}' will never be matched so there is no 
        point looking forward*/
        if (s.top == -1) 
            return 0;
        else if(checkPair(s.stck[s.top],expr[i]))
        {
            pop();
            continue;
        }
        /*will only come here if stack is not empty
        pair wasn't found and it's some closing parenthesis
        Example : {{}}(]*/
        return 0;
        }
    }    
    return 1; 
}
int main() {
  char exp[100];
  int i = 0;
  s.top = -1;
  printf("Enter parenthesis: ");
  scanf("%s",&exp);

  int len = strlen(exp);
  checkBalanced(exp, len)?printf("Matched Parenthesis"): printf("UnMatched Parenthesis"); 

  return 0;
}