/*
Section 14
Roll no - 22IE10007
Name - Anisha Banerjee
Assignment 10
Program to check whether the list is in ascending or descending order
*/
#include<stdio.h>
#include<stdlib.h>
struct list{
   int data;
   struct list *next;
 };

 int main()
    {
     int i,c;
     
     printf("Enter the size\n")
    scanf("%d",&n);
     struct node *head=NULL,*tmp,*newnode;
    
    
    newnode = (struct node*) malloc (sizeof(struct node));
    scanf("%d",&newnode->data);
    newnode->next=NULL;
     if(head==NULL){
        head=newnode;
       tmp=newnode;
     }

    for (i=1; i<n; i++)
     {
       newnode = (struct node*) malloc(sizeof(struct node));
       
       scanf("%d",&newnode->data);
       newnode->next= NULL;
       tmp->next=newnode;
       tmp=newnode;
     }
    c=check(head);
    if(c==1)
    	printf("The list is in descending order\n");
    if(c==2)
    	printf("The list is in ascending order\n");
    if(c==0)
    	printf("The list is not sorted\n");
   return 0;
    }
int check(struct list*l)
  {
    
    struct list *temp;
    int m,n;
    int dec=1,asc=2;
    while (temp != NULL) 
    {
       m=temp->data;
       n=temp->next->data;
       if(m<n)
       	 dec=0;
       temp = temp -> next;

     }
     while (temp->next!= NULL) 
     {
       m=temp->data;
       n=temp->next->data;
       if(m>n)
       	 asc=0;
       temp = temp -> next;

     }
     if(dec==1)
     	return 1;
     if(asc==2)
     	return 2;
     else
     	return 0;
 }
      
     
  
