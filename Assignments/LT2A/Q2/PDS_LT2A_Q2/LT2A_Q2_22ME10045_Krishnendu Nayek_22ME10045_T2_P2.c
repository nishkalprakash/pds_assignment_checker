#include<stdio.h>
#include<stdlib.h>
struct node1
{
int data;
struct node1 *next;
};


struct node2
{
int data;
struct node2 *next;
};

struct node3
{
int data;
struct node3 *next;
};


int main()
{
printf("\n\n #### L1 ####");
struct node1 *head1,*temp1,*newnode1;
head1=0;
int n1;
printf("\n Enter N:");
scanf("%d",&n1);
printf("\n Enter %d numbers:",n1);
int i;
for(i=0;i<n1;i++)
{
newnode1=(struct node1 *)malloc(sizeof(struct node1));
scanf("%d",&newnode1->data);
newnode1->next=0;

if(head1==0)
head1=temp1=newnode1;
else
{
 temp1->next=newnode1;
 temp1=newnode1;
}
}

printf("\n\n #### L2 ####");
struct node2 *head2,*temp2,*newnode2;
head2=0;
int n2;
printf("\n Enter N:");
scanf("%d",&n2);
printf("\n Enter %d numbers:",n2);
int j;
for(j=0;j<n2;j++)
{
newnode2=(struct node2 *)malloc(sizeof(struct node2));
scanf("%d",&newnode2->data);
newnode2->next=0;

if(head2==0)
head2=temp2=newnode2;
else
{
 temp2->next=newnode2;
 temp2=newnode2;
}

}
struct node3 *head3,*temp3,*newnode3;
head3=0;

temp1=head1;
while(temp1 !=0)
{
temp2=head2;
 while(temp2 !=0)
 {
  newnode3=(struct node3 *)malloc(sizeof(struct node3));
  newnode3->data=temp1->data+temp2->data;
  newnode3->next=0;

  if(head3==0)
  head3=temp3=newnode3;
  else
  {
   temp3->next=newnode3;
   temp3=newnode3;
   }
  temp2=temp2->next;
 }
  temp1=temp1->next;
 }



int n3=n1*n2;

int a[n3];
i=0;
temp3=head3;
while(temp3!=0)
{
 a[i]=temp3->data;
 temp3=temp3->next;
 i++;
}
a[i]=-32000;
  

printf("\n L1 = ");
temp1=head1;
while(temp1!=0)
{
printf("%d ",temp1->data); 
temp1=temp1->next;
}
printf("\n +");

printf("\n L2 = ");
temp2=head2;
while(temp2!=0)
{
printf("%d ",temp2->data);
temp2=temp2->next;
}


printf("\n\n L3 = ");
for(i=0;a[i]!=-32000;i++)
{
 int flag=0;
 for(j=i+1;a[j]!=-32000;j++)
{
 if(a[i]==a[j])
 flag=1;
}
if(flag==0)
printf("%d ",a[i]);
}

}








  



