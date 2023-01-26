/*
Section 14
Roll no - 22IE10007
Name - Anisha Banerjee
Assignment 10
Program to print even elements of a list
*/
#include<stdio.h>
#include<stdlib.h>
struct node{
   int data;
   struct node *next;
 };

struct node *createlist(int n,int A[])
{
    
    struct node *head=NULL,*tmp,*newnode;
    
    int i;
    newnode = (struct node*) malloc (sizeof(struct node));
    newnode->data = A[0];
    newnode->next=NULL;
     if(head==NULL){
        head=newnode;
       tmp=newnode;
     }

    for (i=1; i<n; i++)
     {
       newnode = (struct node*) malloc(sizeof(struct node));
       
       newnode->data = A[i];
       newnode->next= NULL;
       tmp->next=newnode;
       tmp=newnode;
     }
   return head;
}
void printlist(struct node *l1)
{
   struct node *tmp=l1;
   while(tmp!=NULL){
      printf("%d ",tmp->data);
      tmp=tmp->next;
    }
  }
  
void even(struct node *I)
  {
    struct node *head;
    struct node *ptr;
    struct node *prev;
    head=I;
    if((head->data)%2!=0)
      head=I->next;
      free(I);
    ptr=head;
    while((ptr->next)!=NULL)
     {
       prev=ptr;
       ptr=ptr->next;
       if((ptr->data)%2!=0)
         {
           prev->next=ptr->next;
           free(ptr);
         }
     }
}
int main()
  {
    int n,i;
    struct node *I;
    int a[10];
    printf("Enter the number of elements\n");
    scanf("%d",&n);
    printf("Enter the elements\n");
    for(i=0;i<n;i++)
       scanf("%d",&a[i]);
    I=createlist(n,a);
    printlist(I);
   //even(I);
    //printlist(I);
    return 0;  
  }      
    
