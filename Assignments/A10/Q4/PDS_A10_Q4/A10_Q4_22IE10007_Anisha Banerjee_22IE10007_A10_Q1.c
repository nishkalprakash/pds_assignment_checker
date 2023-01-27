/*
Section 14
Roll no - 22IE10007
Name - Anisha Banerjee
Assignment 10
Program to maintain bank balance
*/
#include<stdio.h>
#include<stdlib.h>
typedef struct
  {
    int accno;
    char name[50];
    int bal;
  }coustomer;
int main()
  {
    int val;
    student *head=NULL,*tmp;
    printf("Enter balance  as 0 to stop\n");
    scanf("%d %s %d",&head->accno,&head->name,&head->bal);
    tmp=head;
    if(head->bal!=0)
      {
        while(1)
          {
            scanf("%d %s %d",&tmp->accno,&tmp->name,&tmp->bal);
            if(tmp->bal==0)
              break;
            tmp=tmp->next;
          }
       }
     temp->next=NULL;
   printf("Enter data to be inserted\n");
   scanf("%d",&val);
   return 0;
  }
   
