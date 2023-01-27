/*

Section 14
Roll no: 22EX10014
Name: Bibhor Patra
Assignment 10
Description: Program to create link list from array and print the even no nodes

*/
#include<stdio.h>
struct list{
	int data;
	struct list*next;

};

struct list* createlist(int n,int a[100])
{
	struct listptr;
	int value;
	ptr=(struct list*)malloc(sizeof(struct list));
	for(int i=0;i<n;i++)
	{
		if(i==0)
			{
				head=ptr;
				
				head->data=a[i];
				ptr->next=NULL;
				tail=head;
			}
			else
			{
				
				ptr->data=a[i];
				ptr-> next=NULL;
				tail->next=ptr;
			}
	}
	return head;
}
void even()
{
	struct list *prev= head;
	struct list *tail=head;
	struct list*temp=head;
	int count=1;
	while(tail!=NULL){
	if(count==1)
	{
		tail=tail->next;
		count++;
	}
	else if((count%2) == 0)
		{
			count++;
			temp=temp->next;
		}

	else	
	{
		temp=prev->next;
		tail=tail->next;
		free(temp);
		count++;
}

}
void printlist(struct list*head)
{
	struct list*temp=head;
	if(head==NULL){printf("List is empty");}
	while(temp!=NULL)
	{
		printf("%d",temp->data);
		temp = temp->next
	}
}

int main()
{
	int n;
	printf("Enter n");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	struct list*head= createlist(n,a);
	even(head);
	printlist(head);
	return 0;
}