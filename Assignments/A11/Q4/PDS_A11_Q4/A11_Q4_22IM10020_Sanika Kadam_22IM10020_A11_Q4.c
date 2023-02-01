//Assignment 11
//Section 14
//Name:Sanika Kadam
//Question 4



#include<stdio.h>
#include<stdlib.h>
#define MAX 10

typedef struct node{
              int data;
              struct node *next;
              }node;

//function to create linked list

node *createlist(int N,int A[])
{
  node *head,*ptr;
  head=(node*)malloc(sizeof(node));
  ptr=head;

  for(int i=0;i<N-1;i++)
  {
   ptr->data=A[i];
   ptr->next=(node*)malloc(sizeof(node));
   ptr=ptr->next;
  }
  ptr->data=A[N-1];
  ptr->next=NULL;
  return head;
}

//function to print linked list

void printlist(node * I)
{
	if(I==NULL){
		printf("\nEMPTY LIST\n");
	}
	while(I!=NULL){
		printf("%d ",I->data);
		I=I->next;
	}
	printf("\n");
}

//function to delete value from list

node *delete(node *head,int value)
{
  node *prev,*first;
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
  
int main()
{
   int N,value;
   int arr[MAX];
   node *head,*first;

   printf("Enter size of array: ");
   scanf("%d",&N);

   printf("Enter elements of array: ");
   for(int i=0;i<N;i++)
   {
     scanf("%d",&arr[i]);
   }
   
   printf("Enter number you want to delete:");
   scanf("%d",&value);
 
   head=createlist(N,arr);
   for(int i=0;i<N;i++)
   {
    if(value==arr[i])
    {
     first=delete(head,value);
     printlist(first);
     break;
    }
    else
     printf("%d does not exist in list\n",value);
     break;
   }
   return 0;

}
