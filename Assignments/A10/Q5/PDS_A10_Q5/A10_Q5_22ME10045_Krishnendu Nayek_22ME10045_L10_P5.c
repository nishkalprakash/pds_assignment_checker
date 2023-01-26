#include<stdio.h>
#include<stdlib.h>
struct list1
{
int a;
struct list1 *next;
};

struct list2
{
int a;
struct list2 *next;
};

struct list3
{
int a;
struct list3 *next;
};

struct list4
{
int a;
struct list4 *next;
};

int main()
{

struct list1 *head1,*temp1,*newnode1;
head1=NULL;
int i,n1;
printf("\n Enter number of terms in list 1:");
scanf("%d",&n1);

for(i=1;i<=n1;i++)
{
if(i==1)
printf("\n** LIST 1 **");
newnode1=(struct list1*)malloc(sizeof(struct list1));
printf("\n Enter number:");
scanf("%d",&newnode1->a);
newnode1->next=NULL;
if(head1==NULL)
head1=temp1=newnode1;
else
{
temp1->next=newnode1;
temp1=newnode1;
}
}

printf("\n\n\n"); 
struct list2 *head2,*temp2,*newnode2;
head2=NULL;
int j,n2;
printf("\n Enter number of terms in list 2:");
scanf("%d",&n2);

for(j=1;j<=n2;j++)
{
if(j==1)
printf("\n** LIST 2 **");
newnode2=(struct list2*)malloc(sizeof(struct list2));
printf("\n Enter number:");
scanf("%d",&newnode2->a);
newnode2->next=NULL;
if(head2==NULL)
head2=temp2=newnode2;
else
{
temp2->next=newnode2;
temp2=newnode2;
}
}
struct list3 *head3,*temp3,*newnode3;
head3=NULL;


temp2=head2;
while(temp2!=0)
{
 temp1=head1;
 while(temp1!=0)
 {
  if(temp1->a==temp2->a)
  { 
 newnode3=(struct list3*)malloc(sizeof(struct list3));
 if(head3==NULL)
 head3=temp3=newnode3;
 else
 {
 temp3->next=newnode3;
 temp3=newnode3;
 }
  
   temp3->a=temp1->a;
 }
   temp1=temp1->next;
  }

 temp2=temp2->next;
}
printf("\n\n\n ***Intersection list***");
temp3=head3;
while(temp3!=0)
{
printf("\n %d ",temp3->a);
temp3=temp3->next;
}

printf("\n\n\n***Union list***");
temp1=head1;
while(temp1!=0)
{
printf("\n %d",temp1->a);
temp1=temp1->next;
}
temp2=head2;
while(temp2!=0)
{ 
 int k=0;
 temp3=head3;
 while(temp3!=0)
 {
 if(temp3->a==temp2->a)
 k=1;
 temp3=temp3->next;
 }
if(k==0)
printf("\n %d",temp2->a);
temp2=temp2->next;
}
}

