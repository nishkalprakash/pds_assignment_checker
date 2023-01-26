/*
Dhavale Surabhi Prakash
22ME10026
Section 14
lab 10
Question 3
*/
#include<stdio.h>
#include<stdlib.h>

typedef struct node_
{
int data ;
struct node_ *next;
}n;
int main (){
n*head=(n*)malloc(sizeof(n));
n*second=(n*)malloc(sizeof(n));
n*third=(n*)malloc(sizeof(n));
n*fourth=(n*)malloc(sizeof(n));
n*fifth=(n*)malloc(sizeof(n));
printf("enter first number:");
scanf("%d",&head->data);
printf("enter second number:");
scanf("%d",&second->data);
printf("enter third number:");
scanf("%d",&third->data);
printf("enter fourth number:");
scanf("%d",&fourth->data);
printf("enter fifth number:");
scanf("%d",&fifth->data);
head->next=second;
second->next=third;
third->next=fourth;
fourth->next=fifth;
fifth->next=NULL;
if (head->data > second->data){
  if(second->data > third->data){
    if(third->data > fourth->data){
      if(fourth->data > fifth->data){
           printf("the input list L is in decreasing order \n");
}
  else printf("the input list L is not sorted order \n");
}
    else printf("the input list L is not sorted order \n");
}
        else printf("the input list L is not sorted order \n");
}            
           else printf("the input list L is not sorted order \n");

if (head->data < second->data){
     if(second->data < third->data){
         if(third->data < fourth->data){
            if(fourth->data < fifth->data){
printf("the input list L is in ascending order\n");
}
  else printf("the input list L is in sorted order\n");
}
     else printf("the input list L is in sorted order\n");
}
       else printf("the input list L is in sorted order\n");
}
          else printf("the input list l is in sorted order\n");
return 0;
}
