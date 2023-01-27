

/*
 Section 14
 Roll No: 22AE10034
 Name: Shaon Malik
 Assignment No :10
 Question No :2
 
 */


#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node* next;
};


struct node* createlist(int n,int A[])
{
    struct node* head=(struct node*)malloc(sizeof(struct node)),*temp,*tail;
    temp=head;
    for(int i=0;i<n;i++){
        temp->data=A[i];
         tail=(struct node*)malloc(sizeof(struct node));
        temp->next=tail;
        temp=temp->next;   
    }
    temp->next=NULL;
    return head;
}

void printlist(struct node* l){
    struct node* temp = l;
    while(temp->next!=NULL){
        printf("%d",temp->data);
        temp=temp->next;
    }
}

void even(struct node* l){
    l=l->next;
   struct node* temp = l;
   struct node* temp2 = l->next->next;
 
    while(temp!=NULL){
        temp->next=temp2;  
        temp2=temp->next->next;
        temp=temp2;
    } 
}


int main(){
    int n;
    printf("enter number of elements");
    scanf("%d",&n);
    int A[n];
    printf("enter elements:");
    for(int i=0;i<n;i++){
        scanf("%d",&A[i]);
    }
    struct node* head= createlist(n,A);
    // even(head);
    printlist(head);
}



