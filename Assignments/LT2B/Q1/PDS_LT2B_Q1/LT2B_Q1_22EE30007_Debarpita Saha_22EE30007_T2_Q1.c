/*
* Section 14
* Roll No : 22EE30007
* Name : Debarpita Saha
* Test set: B
* Question 1
* Description : to define a single linked list structure to store a list of character strings
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define SIZE 25

typedef struct SET
{
  char data;
  SET *next;

}SET;

SET element;
SET l1, l2;
SET element *LINK;

LINK StrtoList(char s1[])
{
  LINK head= NULL, tail;
  int i;
  if(s1[0]!='\0')
  {
    head= (LINK)malloc(sizeof(element));
    head->data = s1[0];
    tail = head;
    for(i=1; s1[i]= '\0' ; i++){
    tail->next = (LINK)malloc(sizeof(element));
    tail= tail->next;
    tail->data= s1[i];
    }
   tail->next= NULL;
  }
 return head;
}
LINK StrtoLists(char s2[])
{
  LINK head= NULL, tail;
  int i;
  if(s2[0]!='\0')
  {
    head= (LINK)malloc(sizeof(element));
    head->data = s2[0];
    tail = head;
    for(i=1; s2[i]= '\0' ; i++){
    tail->next = (LINK)malloc(sizeof(element));
    tail= tail->next;
    tail->data= s2[i];
    }
   tail->next= NULL;
  }
 return head;
}
 
LINK operation(LINK head1,LINK head2 )
{
  LINk temp1, temp2, prev, first;
  temp1=head1;
  temp2=head2;
  while(temp1!=NULL){
   first= temp1;
  if(temp1->data==temp2->data){
     temp1= temp1->next;
     first->next= NULL;
     free(first);
     return temp1;
     
    printf("%d", temp1->data);
    temp1 = temp1->next;
  }
 }
}  
int main()
{
 
  char s1[SIZE];
  char s2[SIZE];
  scanf("%s", s1);
  printf("Enter string= %s \n", s1);
  scanf("%s", s2);
  printf("Enter string= %s \n", s2);
  LINK StrtoList(s1);
  LINK StrtoLists(s2);
  LINK operation(head1, head2);
  return 0;
}
