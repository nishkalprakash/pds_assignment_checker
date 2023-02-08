//Class test 2
//Name:Sanika Kadam
//Roll no:22IM10020

//Question 1


#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 100

typedef struct set
             {
               char data;
               struct set *next;
             }set;

//Function to create linked list

set *create_list(int L,char A[])
{
   set *head,*ptr;
   head=(set *)malloc(sizeof(set));
   ptr=head;

 for(int i=0;i<L-1;i++)
  {
   ptr->data=A[i];
   ptr->next=(set*)malloc(sizeof(set));
   ptr=ptr->next;
  }
  ptr->data=A[L-1];
  ptr->next=NULL;
  return head; 
}

//Function to print list 

void print_list(set *S)
{
   if(S == NULL)
   {
      printf("List is empty");
   }
   while(S != NULL)
   {
      printf("%c ",S->data);
      S=S->next;
   }
   printf("\n");
} 


//Function to find length of string

int string_length(char A[])
{
   int len;
   len=strlen(A);
   return len;
}


//Function to find duplicate elements in set

char duplicate(set *S,char data)
{
  if(S==NULL)
    return 0;
  if(S->data == data)
    return 1;
  return duplicate(S->next,data);
}

//Function to delete element from list

set *delete(set *head,char value)
{
  set *prev,*first;
  first=head;
  if(head==NULL)
    return NULL;
  else if(value==(head->data))
  {
   head=head->next;
   first->next=NULL;
   free(first);
   return head;
  }
  else
  {
    prev=head;
    head=head->next;

    while(head != NULL && value >head->data)
    {
      prev=head;
      head=head->next;
    }
    if(head==NULL || value!=head->data)
    {
      return first;
    }
    else
    {
      prev->next=head->next;
      head->next=NULL;
      free(head);
      return first;
    }
   }
}

//Function to get difference of sets

set *differ(set *head1,set *head2)
{
   set *L1 = head1, *L2 = head2;
  

   for(; L1 != NULL;L1=L1->next)
    { 
     for(; L2 != NULL;L2=L2->next) 
      {
       if(duplicate(head1,L2->data))
         head1=delete(head1,L2->data);
         
      }

    }
   return head1;
}



int main()
{
   char L1[MAX],L2[MAX],L[MAX];
   int len1,len2;
   set *head1,*head2,*head;
   
   printf("Enter string 1: ");
   scanf("%s",L1);

   printf("Enter string 2: ");
   scanf("%s",L2);

   len1=string_length(L1);
   
   len2=string_length(L2);
   

   head1 = create_list(len1,L1);
   printf("L1= ");
   print_list(head1);

   head2 = create_list(len2,L2);
   printf("L2= ");
   print_list(head2);

   head=differ(head1,head2);
   printf("L= ");
   print_list(head);

  

   


return 0;
}


