#include<stdio.h>
#include<stdlib.h>
struct node
{
int a;
struct node *next;
};
int main()
{

struct node *head,*temp,*temp_2,*newnode;
head=0;
int i,n;
printf("\n Enter number of terms:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
newnode=(struct node*)malloc(sizeof(struct node));
printf("\n Enter number:");
scanf("%d",&newnode->a);
newnode->next=0;
if(head==0)
head=temp=newnode;
else
{
temp->next=newnode;
temp=newnode;
}
}
int m;
printf("\n Enter value to be deleted:");
scanf("%d",&m);

temp=head;
printf("\n\n\n The new list is");
while(temp!=0)
{
 if(temp->a != m)
{
 printf("\n %d",temp->a);

}

 temp=temp->next;
}
}


