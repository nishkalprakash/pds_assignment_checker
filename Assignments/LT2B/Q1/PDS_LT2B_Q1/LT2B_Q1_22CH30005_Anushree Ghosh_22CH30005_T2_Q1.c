/*
section 14
name:ANUSHREE GHOSH
roll no:22CH30005
LAB TEST 2
description:subtracting characters of a string from the other using linked list
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

 //defining the structure SET

typedef struct SET{
             char data;
             SET *next;
      }SET;

//creating the node createlist
 
SET *createlist(int I,char str[])
{
          SET *head,*ptr;
          head=(SET *)malloc(sizeof(SET));
          ptr->head;
  for(int i=0;i<I;i++)
  {
   ptr->head(I);
   ptr->next=(SET *)malloc(sizeof(SET));
   ptr=ptr->next;
  }
   ptr->next=NULL;
   return head;
   
}
 //defining a function strlength which returns the length of string

int strlength(char str[])
{
  int length;
  length=strlen(str);
  return length;
}

void printlist(SET *S)
{
  if(S==NULL)
  {
    printf("the list is empty");
  }
  while(S!=NULL)
  {
    printf("%c",S->data);
    S=S->next;
  }
  printf("\n");
}

//linklist is not storing duplicate elements

char duplicate(SET *I,char data)
{
  if(S==NULL)
    return 0;
  if(S->data==data)
    return 1;
  return duplicate(S->next,data);
}
 
SET *difference(SET *L1,SET *L2)
{ 
  SET *L1=length1,*L2=length2;
  SET *head=NULL;
  
  for(;L1!=NULL;length1->next)
   {
     for(;L2!=NULL;length2->next)
      {
        if(duplicate(length1,L1->data))
       {
         strlength(length1,L1->data)
       }
      }

   }
    return head;
}

int main()
{ 
  char L1[20],L2[20],L[20]; //declaring the two strings as well as the final string
  SET *head=NULL;
  
  printf("enter 1st string: ");
  scanf("%s",L1[i]);  //taking input of L1
    

  printf("enter 2nd string: ");
  scanf("%s",L2[i]);  //taking input of L2
  
  printf("L1:");
  for(int i=0;L1[i]!='\0';i++)
    {
      printf("%c",L1);
    }
    
  printf("L2:");
  for(int i=0;L2[i]!='\0';i++)
    {
      printf("%c",L2);
    }
  length1=strlength[L1];
  printf("length is %d",length1);
  
  length2=strlength[L2];
  printf("length is %d",length2);

  head=createlist(length1,L1);
  printf("L1 :");
  printlist(length1);
  
  
  head=createlist(length2,L2);
  printf("L2 :");
  printlist(length2);
  
 return 0;
}
