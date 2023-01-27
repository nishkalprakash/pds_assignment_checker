#include<stdio.h>
#include<stdlib.h>
struct node
{
 int data;
 struct node* link;
};
struct node* createList(int n)
{
 struct node*head=malloc(sizeof(struct node));
 struct node*ptr=malloc(sizeof(struct node));
 printf("Start entering the numbers:\n");
 for(int i=0;i<n;i++)
 {
     printf("Enter the element %d: ",i+1);
     if(i==0)
     {
      scanf("%d",&(head->data));
      head->link=NULL;
      ptr=head;
     }
     else
     {
      struct node*ptr1=malloc(sizeof(struct node));
      scanf("%d",&(ptr1->data));
      ptr1->link=NULL;
      ptr->link=ptr1;
      ptr=ptr->link;
     }
 }
 return head;
}
int main()
{
  int n1,n2,m;
  struct node*head1=malloc(sizeof(struct node));
  struct node*head2=malloc(sizeof(struct node));
  struct node*ptr1;
  struct node*ptr2;
  printf("Create a List L1:\n");
  printf("Enter the size of the List L1:\n");
  scanf("%d",&n1);
  head1=createList(n1);
  printf("Create a List L2:\n");
  printf("Enter the size of the List L2:\n");
  scanf("%d",&n2);
  head2=createList(n2);
  ptr1=head1;
  ptr2=head2;
  printf("Intersection:{");
  do
 {
   m=ptr1->data;
   do
   {
     if(m==ptr2->data)
     printf("%d ",m);
     ptr2=ptr2->link; 
   }
   while(ptr2->link!=NULL);
   if(ptr2->link==NULL)
   {
     if(m==ptr2->data)
     printf("%d ",m);
   }
   ptr2=head2;
  ptr1=ptr1->link;
 }
 while(ptr1->link!=NULL);
 m=ptr1->data;
 do
   {
     if(m==ptr2->data)
     printf("%d ",m);
     ptr2=ptr2->link; 
   }
   while(ptr2->link!=NULL);
 printf("}");
 printf("Union:");
 
 
 
  
  return 0;
}
 
