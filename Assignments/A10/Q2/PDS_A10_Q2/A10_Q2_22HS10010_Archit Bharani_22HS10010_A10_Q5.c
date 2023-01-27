
#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node *link;
};


struct node *createlist(int n, int A[])
 {
 
  struct node *head,*ptr; 
  head=(struct node *)malloc(sizeof(struct node));
  head->data =A[0];
  ptr=head;
  head->link=NULL;
  for(int i=1;i<n;i++)
  {
    ptr->link=(struct node*)malloc(sizeof(struct node));
    ptr=ptr->link;
    ptr->data=A[i];
  }
 ptr->link=NULL;
return head;
}


int main()
{
int n,count=0,A[100];

printf("Enter number of integers ");        
scanf("%d",&n);
printf("Enter the integers ");
for(int i=0;i<n;i++)
 {
   scanf("%d",&A[i]);
 }
struct node *head=createlist(n,A);

struct node *ptr;
struct node *cur;
ptr=(struct node*)malloc(sizeof(struct node));      //Assigning Dynamic memory
cur=(struct node*)malloc(sizeof(struct node));      //Assigning Dynamic memory
  
cur=head;
ptr=head;

ptr=ptr->link;                 //ascending ptr to next node
while(ptr->link!=NULL)
{
if(cur->data < ptr->data)
  {
  count++;
  }
 ptr=ptr->link;                   
 cur=cur->link;
}
if(count==n-2)
printf("Ascending order");
int count1=0;

cur=head;
ptr=head;

ptr=ptr->link;
while(ptr->link!=NULL)                 //ascending ptr to next node
{
if(cur->data > ptr->data)
  {
  count1++;
  }
 ptr=ptr->link;
 cur=cur->link;
}

if(count1==n-2)
printf("Descending Order");

if(count1!= n-2 && count!=n-2)
printf("Not sorted");

return 0;
}
