/* NAME: PRIYAM TARAFDER
ROLL NO.: 22EC10059
ASSIGNMENT NO.: 10
QUESTION NO.: 5
DESCRIPTION: finds minimum, maximum and duplicate elements 
*/

#include <stdio.h>
#include <stdlib.h>

struct node{
    int a;
    struct node *p;
};
struct node *createlist(int n, int *A){
    struct node *h=(struct node *)malloc(sizeof(struct node));
    h->a=A[0];
    struct node *ptr=h;
    for(int t=1;t<n;t++){       
        ptr->p=(struct node *)malloc(sizeof(struct node));
        ptr=ptr->p;
        ptr->a=A[t];
    }
    ptr=NULL;
    return h;
}
void max(struct node *h){
    int max=h->a;
    struct node *ptr=h->p;
    for(;ptr!=NULL;ptr=ptr->p)
        if(max<ptr->a)
            max=ptr->a;
    printf("\nMaximum number is: %d",max);   
    return;
}
void min(struct node *h){
    int min=h->a;
    struct node *ptr=h->p;
    for(;ptr!=NULL;ptr=ptr->p)
        if(min >ptr->a)
            min=ptr->a;
    printf("\nMinimum number is: %d" ,min);   
    return;
}
int traverse(int a, struct node *h){
    struct node *ptr=h;
    for(;ptr!=NULL;ptr=ptr->p)
        if(ptr->a==a)
            return 0;
    return 1;   
}
void duplicate(struct node *h){
    struct node *h2=(struct node *)malloc(sizeof(struct node));
    struct node *ptr=h->p;
    struct node *ptr2=h2;
    int c=0;
    for(;ptr!=NULL;ptr=ptr->p){
        struct node *ptr3=h;
        for(;ptr3!=ptr;ptr3=ptr3->p)
            if(ptr3->a==ptr->a && traverse(ptr3->a,h2)){
                ptr2->a=ptr3->a;
                ptr2->p=(struct node *)malloc(sizeof(struct node));
                ptr2=ptr2->p;c++;
                break;
            }
        ptr2->p=NULL;       
    }
    if(c==0)
        printf("The input does not contain any duplicate number");
    else{
        printf("The input list contains duplicate numbers of: ");
        for(struct node *ptr=h2;ptr->p!=NULL;ptr=ptr->p)
            printf("%d ",ptr->a);
    }   
}
int main(){
    int n;
    scanf("%d",&n);
    int *A=(int *)malloc(n*sizeof(int));
    for(int t=0;t<n;t++)
        scanf("%d",&A[t]);
    struct node *head=createlist(n,A);
    duplicate(head);
    min(head);
    max(head);
}