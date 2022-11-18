/* Name   : Pasupulety Chethan Krishna Venkat
   Dept   : Computer science
   Roll no: 21CS30036
   Package: Code blocks
   Os     : windows
*/


#include<stdio.h>
#include<stdlib.h>
#define max 100000

//struct for stack
typedef struct stack{
    char *arr;
    int top;
}stack;

//initializing stack
void init(stack* a){
    a->arr = (char *)malloc(max*sizeof(char));
    a->top = -1;
}

//Function to pop char from stack and return the popped value
char pop(stack *a){
    a->top--;
    return a->arr[a->top + 1];
}

//Function to check if stack is empty or not
int isempty(stack a){
    if(a.top == -1){
        return 1;
    }
    return 0;
}

//Function to push new character into the stack
void push(stack *a, char c){
    if(a->top + 1 >= max){
        printf("Change the defined max value as stack size isnt enough for given input\n");
    }
    a->top++;
    a->arr[a->top] = c;
}

int main(){
    char ch[max];
    stack a;
    init(&a);
    //Taking input
    printf("Enter expression: ");
    scanf("%s", ch);
    int i = 0;
    //Looping over the expression
    while(ch[i] != '\0'){
        //If the character is an opening bracket we push it into the stack
        if(ch[i] == '{' || ch[i] == '(' || ch[i] == '['){
            push(&a, ch[i]);
        }
        else{
            //If we encounter a closing bracket and the stack is already empty we print unmatched
            if(isempty(a)){
                printf("Result: Unmatched parenthesis");
                return 0;
            }
            //If the character is a closing bracket we pop the top element from stack
            //If the element is the matching opening bracket then we continue or else we print unmatched
            char temp = pop(&a);
            if(ch[i] == '}' && temp != '{' || ch[i] == ')' && temp != '(' || ch[i] == ']' && temp != '['){
                printf("Result: Unmatched parenthesis");
                return 0;
            }
        }
        i++;
    }
    printf("Result: Matched parenthesis");
    return 0;
}
