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
int n,count=0,A[100],count1=0;

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

int max=0;
while(ptr!=NULL)
{
if(ptr->data>max)
{
max=ptr->data;
}
ptr=ptr->link;
}
printf("Max is %d\n",max);

int min=999999;
while(cur!=NULL)
{
if(cur->data<min)
min=cur->data;

cur=cur->link;
}
printf("Min is %d",min);
return 0;
}


 

