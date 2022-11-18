/*
Name - Harish Takri
Dept - Chemistry
Roll no - 21CY10016
Package - Code Blocks
Operating System - Windows
*/

#include <stdio.h>
#include <stdlib.h>

#define MAX 50

int stack[MAX];
int top=-1;
// stack
void push(char val){
    if(top==MAX-1){
        printf("stack is already full,error\n"); // if stack is full

    }else{
        top++;
        stack[top]=val;
    }
}
// common method to solve the problem
char pop(){
    if(top==-1){
        printf("not enough elements,error\n");
        exit(1);
    }else{
        top--;
        return stack[top];
    }
}
// checking the matching paranthesis
int isMatching(char c1, char c2){
    if(c1=='{' && c2=='}')
        return 1;

    else if(c1 =='(' && c2==')')
        return 1;

    else if(c1=='[' && c2==']')
        return 1;

    return 0;
}
// cheching the string is balanced or not
int isBalanced(char str[]){
    int i=0;

    while(str[i]!='\0'){
        if(str[i]=='{' || str[i]=='[' || str[i]=='('){
            push(str[i]);
        }
        if(str[i]==')' || str[i] == ']' || str[i]=='}'){
            if(stack==NULL){
                return 0;
            }
            if(!isMatching(pop(), str[i])){
                return 0;
            }
        }
        i++;

    }// end of while looop

    if(stack==NULL){
        return 1; // balanced parenthesis
    }else{
        return 0; // not balanced parenthesis
    }
}
// main function
int main(){
    char str[MAX]; // defining a farible for string
    int flag;
    printf("Enter the string with the brackets and etc.\n"); // taking the input of string...
    fgets(str, sizeof(str),stdin);
    flag=isBalanced(str);
    if(flag==1){
        printf(" Balanced\n");   //printing  if  balanced
    }
    else{
        printf(" NOT Balanced\n"); // printin if not balanced
    }

    return 0;
}
