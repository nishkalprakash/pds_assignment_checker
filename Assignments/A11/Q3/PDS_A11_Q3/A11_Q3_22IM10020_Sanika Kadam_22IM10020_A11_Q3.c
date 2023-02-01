//Assignment 11
//Section 14
//Name:Sanika Kadam
//Question 3


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


 
node *create_node(int val)
{
  node *newp;
  newp=(node*)malloc(sizeof(node));
  newp->data=val;
  return newp;
}

//function to insert new value
node *insert(node *head,int value)
{
  node *newp,*prev,*first;
  newp=create_node(value);
  if(head==NULL || value<=head->data)
  {
    newp->next=head;
    return newp;
  }
  else
  {
    first=head;
    prev=head;
    head=head->next;
    while(head!=NULL && value>(head->data))
    {
      prev=head;
      head=head->next;
    }
    prev->next=newp;
    newp->next=head;
    return first;
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
   
   printf("Enter number you want to insert:");
   scanf("%d",&value);
 
   head=createlist(N,arr);
   first=insert(head,value);
   printlist(first);
   
   return 0;
}
