/*
 Section 14
 Roll No : 22MT10023
 Name : HARSH GUPTA
 Assignment : 10
 Description : Program that checks whether a given linked list is in ascending order or not
*/

#include <stdio.h>
#include <stdlib.h>

struct node{
	int data;
	struct node *link;
};

struct node *createList(int n)
{
	int d;
	struct node *head = (struct node*)malloc(sizeof(struct node));
	head->link=NULL;
	struct node *ptr = head;
	scanf("%d",&(head->data));
	for(int i=0;i<n-1;i++)
	{
		struct node* temp = malloc(sizeof(struct node));
		scanf("%d",&d);
		temp->data=d;
		temp->link=NULL;
		ptr->link = temp;
		ptr=temp;
		temp=NULL;
	}
	return head;
}
int MaxVal(struct node *head)
{
	int max=head->data;
	struct node*ptr = head;
	while(ptr->link!=NULL)
	{
		if(ptr->data>=max)
			max=ptr->data;
		ptr=ptr->link;
	}
	return max;
}
int MinVal(struct node *head)
{
	int min=head->data;
	struct node*ptr = head;
	while(ptr->link!=NULL)
	{
		if(ptr->data<=min)
			min=ptr->data;
		ptr=ptr->link;
	}
	return min;
}
struct node *UnionList(struct node*head1,struct node *head2,int arr[],int len)
{
	int n;
	struct node*ptr = head1;
	while(ptr->link!=NULL)
	{
		arr[ptr->data]++;
		ptr=ptr->link;
	}
	ptr = head2;
	while(ptr->link!=NULL)
	{
		arr[ptr->data]++;
		ptr=ptr->link;
	}
	for(int i=0;i<len;i++)
	{
		if(arr[i]!=0)
		{
			n++;
			if(n==1)
			{
				n=i;
				break;
			}
		}
	}
	struct node *head = (struct node*)malloc(sizeof(struct node));
	head->link=NULL;
	ptr = head;
	head->data = n;
	for(int i=n;i<=len;i++)
	{
		if(arr[i]!=0)
		{
			struct node* temp = malloc(sizeof(struct node));
			temp->data=i;
			temp->link=NULL;
			ptr->link = temp;
			ptr=temp;
			temp=NULL;
		}
	}
	return head;
}
int main()
{
	int n1,n2,max,min,max2,min2,len1,len2,n;
	printf("Enter length of first list:\n");
	scanf("%d",&n1);
	printf("Enter values in first list:\n");
	struct node *L1 = createList(n1);
	max=MaxVal(L1);
	min=MinVal(L1);

	printf("Enter length of second list:\n");
	scanf("%d",&n2);
	printf("Enter values in second list:\n");
	struct node *L2 = createList(n2);
	max2=MaxVal(L1);
	min2=MinVal(L1);
	if(max2>=max)
		max=max2;
	if(min2<=min)
		min=min2;
	n=max-min+1;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		arr[i]=0;
	}
	struct node *Un = UnionList(L1,L2,arr,n);
	struct node *ptr = Un;
	while(ptr->link!=NULL)
	{
		printf("%d ",(ptr->data));
		ptr=ptr->link;
	}
	return 0;						//int main function returns 0
}
