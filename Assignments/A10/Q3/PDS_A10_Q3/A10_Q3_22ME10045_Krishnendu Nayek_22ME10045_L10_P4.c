#include<stdio.h>
#include<stdlib.h>
struct node
{
int a;
struct node *next;
};
int main()
{
struct node *head,*temp,*temp2,*newnode;
head=NULL;
int i,n;
int arr[n],j=0;
printf("\n Enter number of terms:");
scanf("%d",&n);

for(i=1;i<=n;i++)
{
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("\n Enter number:");
	scanf("%d",&newnode->a);
	newnode->next=NULL;
	if(head==NULL)
        {
	head=newnode;
        temp=newnode;
        }
	else
	{
	temp->next=newnode;
	temp=newnode;
	}
}



temp=temp2=head;
int k=0;
while(temp!=NULL)
{
 while(temp2!=NULL)
 {
 if(temp2->a==temp->a)
 {
  k++;
 }
 if(k>1)
{
 arr[j]=temp->a;
  j++;
}
 temp2=temp2->next;
 }
 temp=temp->next;
}
j--;
if(j==0)
{
printf("\n The input list does not contain any duplicate number!");
}
else
{
printf("\n The input list contains duplicate numbers of:");
while(j!=-1)
{
printf("%d ",arr[j]);
j--;
}
}
temp=head;
int max=temp->a;
while(temp->next!=NULL)
{
if(max<temp->next->a)
{
max=temp->next->a;
temp=temp->next;
}
}


temp=head;
int min=temp->a;
while(temp->next!=NULL)
{
if(min>temp->next->a)
min=temp->next->a;
temp=temp->next;
}
printf("\n max=%d",max);
printf("\n min=%d",min);
}


