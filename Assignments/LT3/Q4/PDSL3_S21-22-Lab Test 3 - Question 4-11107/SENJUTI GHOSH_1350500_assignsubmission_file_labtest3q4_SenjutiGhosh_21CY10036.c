/*
name:SENJUTI GHOSH
ROLL:21CY10036
DEPT:Chemistry
Package:CODEBLOCKS
*/
#include<stdio.h>
#include<stdlib.h>
struct stack{
       char data;
       struct stack *next;
};
/*this will push the element to the stack*/
void push(struct stack **top1,int newelement);
/*this will delete element from the stack*/
int pop(struct stack **top1);
/*this function will return 1 only if the character c1 and character c2 are matching with the left and right parantheses*/
int checkmatch(char c1,char c2){
               if ((c1=='(')&&(c2==')')){
                   return 1;
               }
               else if ((c1=='{')&&(c2=='}')){
                        return 1;
               }
               else if ((c1=='[')&&(c2==']')){
                        return 1;
               }
               else{
                    return 0;
               }

}
/*this function will return 1 if the parantheses are balanced*/
int checkbalance(char expression[]){
    int i=0;
    /*a NULL stack is initialised*/
    struct stack *sptr=NULL;
    /*checking the balance*/
    while (expression[i]){
           /*parantheses is pushed to stack at start*/
           if ((expression[i]=='}')||(expression[i]==')')||(expression[i]==']')){

                push(&sptr,expression[i]);
               }
               /*checking match for ending parantheses*/
               if ((expression[i]=='}')||(expression[i]==')')||(expression[i]==']')){
                   if (sptr==NULL){
                       return 0;
                       /*ending parantheses with no match*/
                   }
                   else if (!checkmatch(pop(&sptr),expression[i])){
                            return 0;
                   }
                   i++;
           }}
    /*only a stating parantheses without an ending can be left in the expression*/
    if (sptr==NULL){
        return 1;/*balanced case*/
    }
    else{
         return 0;/*unbalanced case*/
    }
}
/*MAIN FUNCTION BEGINS HERE!!*/
int main(){
char expression[100];
printf("Enter the test expression\n");
scanf("%s",expression);
if (checkbalance(expression)==1){
    printf("Matched Parantheses");
}
else{
     printf("Unmatched parantheses");

}
return 0;
}
/*this will push the element to the stack*/
void push(struct stack **top1,int newelement){
          /*dynamically allocating memory to the stack*/
          struct stack *new=(struct stack *)malloc(sizeof(struct stack));
          if (new==NULL){
             printf("Stack overflow \n");
             getchar();
             exit(0);
          }
          /*entering data*/
          new->data=newelement;
          new->next=(*top1);
          (*top1)=new;
}
/*this will delete element from the stack*/
int pop(struct stack **top1){
        char rem;
        struct stack *top;
        /*generate error if stack is empty*/
        if (*top1==NULL){
            printf("Stack Overflow\n");
            getchar();
            exit(0);
        }
        else{
             top=*top1;
             rem=top->data;
             *top1=top->next;
             free(top);
             return (rem);
        }
}
