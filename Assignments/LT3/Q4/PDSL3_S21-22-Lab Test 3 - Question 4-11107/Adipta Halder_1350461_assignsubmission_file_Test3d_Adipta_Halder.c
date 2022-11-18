/*
Name: Adipta Halder
Roll Number: 21EC30003
Department: EC
Package: CODEBLOCKS
O.S: Windows 10
Assignment Class: 3
Test number: 3d
*/
#include<stdio.h>
/*we have not been taught stack in theory but I use the concept here in my way*/
//this match function checks if a pair matches or not
int match(char c1,char c2){
    if(c1=='('&&c2==')'){
        return 1;
    }
    else if(c1=='{'&&c2=='}'){
        return 1;
    }
    else if(c1=='['&&c2==']'){
        return 1;
    }
    else
        return 0;
}
int main(){
    char s[200],ins[100];//ins is input string , s is an array which acts as a kind of stack,I assume 200 to be sufficient space
    int i,k=0,out=0,f=0;//out and f are indicators of match and unmatch
    /*initialising array to be 0 which can be thought of as empty*/
    for(i=0;i<200;i++){
        s[i]='0';
    }
    printf("Enter expression: ");
    scanf("%s",ins);
    printf("Result: ");
    /*traversing array:
    if opening bracket is present we put in s
        if closing bracket is present we check if s is empty or not
        if empty then mismatch as it cannot happen
        if last entry and this closing bracket match then we pop the last opening one out by assigning 0(last in first out)
        if last entry and this closing bracket do not match then mismatch*/
    for(i=0;ins[i]!='\0';i++){

        if(ins[i]=='('||ins[i]=='{'||ins[i]=='['){
            s[k]=ins[i];
            k++;
        }
        if(ins[i]==')'||ins[i]=='}'||ins[i]==']'){
            if(s[0]=='0'){
                out=1;
            }
            else if(match(s[k-1],ins[i])==0){
                out=1;
            }
            else if(match(s[k-1],ins[i])==1){
                s[k-1]='0';
                k--;
            }
        }
    }
    s[k]='\0';
    /*at last if whole s is empty i.e 0 then matched*/
    if(out==1){
        printf("Unmatched parenthesis");
    }
    for(i=0;s[i]!='\0';i++){
        if(s[i]!='0'){
                f=1;
        }
    }
    if(f==0){
        printf("Matched parenthesis");
    }
 return 0;
}
