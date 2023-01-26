#include<stdio.h>
#include<stdlib.h>


struct node
{
  int data;
 struct node *link;
};


 struct node *createlist(int n)
{
struct node*head=malloc(sizeof(struct node));
struct node*ptr=malloc(sizeof(struct node));
struct node*ptr1;



printf("enter the no of values:-");
scanf("%d",&n);
printf("Enter the number:-");




for(int i=0;i<n;i++)
{

  printf("Enter the element %d:",i+1);
 if(i==0)
{
  scanf("%d",&(head->data));
 head->link=NULL;
  ptr=head;
}

else
{
  ptr1=malloc(sizeof(struct node));
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
int n,t,r=0;
 struct node *head1= malloc(sizeof(struct node));
 struct node *head2= malloc(sizeof(struct node));
struct node *ptr1;
struct node *ptr2;

  printf("Creating List 1:-");
  printf("Enter the size of list :-");
  scanf("%d",&n);
  head1=createlist(n);
  printf("Creating List 2:-");
  printf("Enter the size of list :-");
  scanf("%d",&t);
  head2=createlist(t);

ptr1=head1;
ptr2=head2;

printf("L(Intersection)=");

while(ptr2->link!=NULL)

{


 while(ptr1->link!=NULL)
{

 
  if(ptr1->data==ptr2->data)
{
   printf("%d  ",ptr->data);
}
ptr1=ptr1->link;


}


if(ptr1->link==NULL)
{
 
while(ptr1->link!=NULL)
{

 
  if(ptr1->data==ptr2->data)
{
   printf("%d  ",ptr->data);
}
ptr1=ptr1->link;


}
} 



ptr1=ptr1->link;

ptr2= head2;
}


return 0;
}






















