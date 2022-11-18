/*
Name : Divya Raj
Roll : 21MT10017
Dept : Metallurgy
Package : CodeBlocks
*/

#include<stdio.h>
#include<string.h>

int finding_match(char c1, char c2){
        if(c1 == '(' && c2 == ')') return 1;
        if(c1 == '[' && c2 == ']') return 1;
        if(c1 == '{' && c2 == '}') return 1;
        return 0;
}

int balance(char *s){
    int top = -1;
    for(int i =0;i<strlen(s);i++){
        //If top <0 or the current character is not matched
        //with the open bracket at the top index
        if(top<0 || !finding_match(s[top], s[i])){
            ++top;
            s[top] = s[i];
        }
        //current character is matched with the open bracket at the top index
        else{
            --top;
        }
    }
    return top == -1;
}

int main(){
    char inp[100];
    printf("Enter expression: ");
    scanf("%s", inp);

    printf("Result: ");
    if(balance(inp)){
        printf("Matched parenthesis\n");
    }
    else{
        printf("Unmatched parenthesis\n");
    }
}