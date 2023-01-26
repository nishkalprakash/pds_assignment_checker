#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *link;
};

struct node *createlist(int n)
{
struct node *list;
list=(struct node*)malloc(n*sizeof(struct node));
for(int i=0;i<n;i++)
{
scanf("%d",&list[i].data);
list[i].link=&list[i+1];
}
list[n-1].link=NULL;
return list;
};

void printlist(struct node* I)
{
while(I!=NULL)
{
printf("%d\t",I->data);
I=I->link;
}
};

int main()
{
int n;
struct node *ptr,*head,*ptr1;
printf("enter the length of the array:");
scanf("%d",&n);
ptr=createlist(n);
printlist(ptr);
head=ptr;
ptr1=ptr;
int k=0;
int arr[n];
while(head!=NULL)
{
	while(ptr1->link!=NULL)
		{
			if(head->data==ptr1->link->data)
				{
					arr[k]=head->data;
					k++;
				}
				ptr1=ptr1->link;
		}
head=head->link;
ptr1=head;
}
int i,j;
if(k!=0)
{
printf("the duplicate elements are: ");
for(i=0;i<k;i++)
{
	for(j=0;j<i;j++)
		{
			if(arr[i]==arr[j])
			 break;
		}
		if(i==j)
		{
			printf("%d",arr[i]);
		}
}
}
else 
{
printf("there are no duplicate elements present");
}
int max=head->data;
int min=head->data;
while(head!=NULL)
{
if((head->link->data) >=max)
{
max=head->link->data;
head=head->link;
}
}
while(head!=NULL)
{
if((head->link->data) <min)
{
min=head->link->data;
head=head->link;
}
}
printf("the maximum element is %d",max);
printf("the mainimum element is %d",min);

return 0;
}


