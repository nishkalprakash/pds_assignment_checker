#include<stdio.h>
#include<stdlib.h>

struct node
{
  int data;
 struct node *link;
};


int main()
{
  int n,l=0,p=0,min,max,Q[100],r=0,t=0;
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

ptr=head;

min=ptr->data;
max=ptr->data;

while(ptr->link!=NULL)
{
  if(max<(ptr->link->data))
{
  max=ptr->link->data;
}
else if(min>(ptr->link->data))
{
  min=ptr->link->data;
}
ptr= ptr->link;
}

ptr = head;
ptr1= head;
printf("Duplicates number are:-\n");
while(ptr->link!=NULL)

{


 while(ptr1->link!=NULL)
{

 
  if(ptr->data==ptr1->data)
{
  r++;
}
ptr1=ptr1->link;


}


if(ptr1->link==NULL)
{
  if(ptr->data==ptr1->data)
{
  r++;
}
} 
if(r==2)
{
  printf("%d  ",ptr->data);

   t++;
}


ptr1=ptr->link;

ptr= ptr->link;
r=0;
}

if(t==0)
{
  printf("List not containing any duplicate number:-\n");
}



printf("Maximum value is %d\n",max);
printf("Minimum value is %d\n",min);

return 0;
}


