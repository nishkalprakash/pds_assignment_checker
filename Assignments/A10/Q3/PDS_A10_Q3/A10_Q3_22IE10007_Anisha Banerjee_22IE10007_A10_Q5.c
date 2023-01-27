/*
Section 14
Roll no - 22IE10007
Name - Anisha Banerjee
Assignment 10
Program to check maximum and minimum
*/
#include<stdio.h>
#include<stdlib.h>
struct list{
   int data;
   struct list *next;
 };

 int main()
    {
     int i,n,max,min;
     
     printf("Enter the size\n");
    scanf("%d",&n);
     struct list *head=NULL,*tmp,*newnode;
    
    printf("Enter the elements\n");
    newnode = (struct list*) malloc (sizeof(struct list));
    scanf("%d",&newnode->data);
    newnode->next=NULL;
     if(head==NULL){
        head=newnode;
       tmp=newnode;
     }

    for (i=1; i<n; i++)
     {
       newnode = (struct list*) malloc(sizeof(struct list));
       
       scanf("%d",&newnode->data);
       newnode->next= NULL;
       tmp->next=newnode;
       tmp=newnode;
    }
 max=min=head->data;
tmp=head;
while(tmp!=NULL)
  {
    if(tmp->data>max)
       max=tmp->data;
    if(tmp->data<min)
       min=tmp->data;
    tmp=tmp->next;
}
printf("Max: %d",max);
printf("Min: %d",min);
return 0;
}
    
   
