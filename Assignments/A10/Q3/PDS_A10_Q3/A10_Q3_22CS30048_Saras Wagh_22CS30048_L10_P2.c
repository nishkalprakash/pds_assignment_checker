#include<stdio.h>
#include<stdlib.h>
struct node
{
 int data;
 struct node* link;
};
int main()
{
  int max,min,n,m,j=0,o=0;
  struct node*head=malloc(sizeof(struct node));
 struct node*ptr=malloc(sizeof(struct node));
 struct node*ptr1;
 printf("Enter the no. of values you wants to enter:\n");
 scanf("%d",&n);
 int a[n];
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
      ptr1=(struct node*)malloc(sizeof(struct node));
      scanf("%d",&(ptr1->data));
      ptr1->link=NULL;
      ptr->link=ptr1;
      ptr=ptr->link;
     }
 }
  ptr=head;
  max=ptr->data;
  min=ptr->data;
  while(ptr->link!=NULL)
 {
  if(  max<(ptr->link->data)  )
  max=ptr->link->data;
  if(  min>(ptr->link->data)  )
  min=(ptr->link->data);
  ptr=ptr->link;
 }
 ptr=head;
 ptr1=head;
 printf("Searching for duplicates:");
 do
 {
   m=ptr->data;
   do
   {
     if(m==ptr1->data)
     {j++;}
     ptr1=ptr1->link; 
   }
   while(ptr1->link!=NULL);
   if(ptr1->link==NULL)
   {
     if(m==ptr1->data)
     j++;
   }
   if(j==2)
   {
     printf("%d ",m);
     o++;
   }
   ptr1=ptr->link;
  ptr=ptr->link;
  
  j=0;
 }
 while(ptr->link!=NULL);
 printf("\n");
 if(o==0)
 printf("The Input list does not contain any duplicate\n");
 printf("Maximum number is:%d\n",max);
 printf("Minimum number is:%d\n",min);
return 0;
}
 
  


