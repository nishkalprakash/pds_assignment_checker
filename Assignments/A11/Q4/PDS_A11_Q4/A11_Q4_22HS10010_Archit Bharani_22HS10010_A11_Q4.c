#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node *next;
};
typedef struct node ELEMENT;
typedef ELEMENT *LINK;

LINK createlist(int n, int A[])                          //Taking elements of array into linked list
 {
 
  LINK head,tail; 
  head=(LINK)malloc(sizeof(ELEMENT));                    //Allocating memory to first element
  head->data =A[0];
  tail=head;
  head->next=NULL;
  for(int i=1;i<n;i++)
  {
    tail->next=(LINK)malloc(sizeof(ELEMENT));   
    tail=tail->next;
    tail->data=A[i];
  }
 tail->next=NULL;
return head;
}


LINK del(int val, LINK ptr)                      //Deleting a element in list
{
LINK prev,first;
first=ptr;
if(ptr==NULL)
return NULL;
else if(val==ptr->data)                   //Finding the value provided
{
return ptr->next;
}

else{
prev=ptr;
LINK x=0;
while(prev!=NULL)            
{                                         
if(prev->data==val)
{
break;
}
x=prev ;
prev=prev->next;
}
x->next=prev->next;
return ptr;
}
}


void printlist(LINK head)                       //Printing elements of list
{
LINK ptr;
ptr=(LINK)malloc(sizeof(ELEMENT));
ptr=head;
while(ptr->next!=NULL)
{
printf("%d ",ptr->data);
ptr=ptr->next;
}
printf("%d",ptr->data);
}


int main()
{
int n,A[100],m;
printf("Enter number of integers ");
scanf("%d",&n);
printf("Enter the integers ");
for(int i=0;i<n;i++)
 {
   scanf("%d",&A[i]);
 }
printf("Enter the value which you want to delete ");
scanf("%d",&m);
LINK head=createlist(n,A);
head=del(m,head);
printf("New Linked List is ");
printlist(head);
return 0;
}
