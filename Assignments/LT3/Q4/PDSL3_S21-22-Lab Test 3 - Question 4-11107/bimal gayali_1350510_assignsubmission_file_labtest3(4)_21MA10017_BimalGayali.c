/*************************
*Section:3
*Roll No:21MA10017
*Name:Bimal Gayali
*Lab test No:3(4)
***************/
#include<stdio.h>
#include<stdlib.h>
#define MAX_SIZE 100
char c[MAX_SIZE] ;
struct Node {
char data;
struct Node * next;
};
struct Node * top = NULL ;
void Push(int data){
struct Node * temp = (struct Node *)malloc(sizeof(struct Node));
temp->data = data;
temp->next = top ;
top = temp ;
}

void Pop(){
if(top == NULL){
printf("There are no items in the stack to pop\n");
return;
}
struct Node * temp = top;
top = top->next ;
free(temp);
}

void Print(){
if(top == NULL){
printf("Stack is empty\n");
}
struct Node * temp = top ;
printf("\nThe current stack is: ");
while(temp != NULL){
printf(" %c",temp->data);
temp = temp->next ;
}
printf("\n");
}

void CheckforBalancedparanthesis(char c[], int length){
//now as we scan the expression push the character into the stack
int i;
for(i=0;i<length;i++){
if((c[i] == '(' ) || (c[i] == '{' ) || (c[i] == '[' ))
{
Push(c[i]);
}
else if((c[i] == ')' ) || (c[i] == '}' ) || (c[i] == ']' ))
{
if((top == NULL) || (c[i] != top->data))
{
printf("Paranthesis don't match \n");
return ;
}
else{
Pop();
}
}
printf(" %c",top->data);
}
return (top == NULL)?("Paranthesis match"):("Parenthesis don't match") ;
}
int main(){
int length;
printf("Enter a string of paranthesis: ");
scanf("%s",c);
//printf("%s",c);
length = strlen(c);
CheckforBalancedparanthesis(c,length);
Print(top);
//Pop();Print(top);Pop();Print(top);
//Push(3);Push(4);Push(1);Push(7);Print(top);Pop();Print(top);Pop();Print(top);
}
