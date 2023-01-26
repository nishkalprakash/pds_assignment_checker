#include<stdio.h>
#include<stdlib.h>
struct node
{
 int data;
 struct node* link;
};
int main()
{
 int n,l=0,k=0;
 struct node*head=malloc(sizeof(struct node));
 struct node*ptr=malloc(sizeof(struct node));
 printf("Enter the no. of values you wants to enter:\n");
 scanf("%d",&n);
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
 while(head->link!=NULL)
 {
   if((head->data)<(head->link->data))
   l++;
   else if((head->data)>(head->link->data))
   k++;
   head=head->link;
 }
 if(l==n-1)
 printf("The input list L is in ascending order.\n");
 else if(k==n-1)
 printf("The input list L is in descending order.\n");
 else
 printf("Input list L is not in sorted order");
   
   
 return 0;
}
      
      
     
   
 
