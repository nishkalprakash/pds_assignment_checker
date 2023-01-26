
/*

Section 14
Roll no: 22EX10014
Name: Bibhor Patra
Assignment 10
Description: Program to tell if its ascending or descending or not sorted

*/

#include<stdio.h>
#include<stdlib.h>
struct list{
	int data;
	struct lint*next;
};
struct list *head;
struct list* tail;

void insert ()
{
	int value;
	struct list*ptr;
	ptr=(int*)malloc(sizeof(struct list));
	scanf("%d",&value);

	if(head==NULL)
	{
		head=ptr;
		tail=head;
		ptr ->data=value;
		ptr->next=NULL;
	}
	else
	{
		tail->next=ptr;
		tail=ptr;
		ptr->data=value;
		ptr->next=NULL;
	}


}
int check()
{
	struct list*temp;
	struct list*prev=head;
	int flag=0;
	int count =1,dflag=0;
	if(count==1)
	{
		temp= temp->next;
	}
	while(temp!= NULL)
	{
		if((prev->data)>temp->data)
			flag=1;
		else{flag=0;break;}
		prev = temp;
		temp=temp->next;
	}
	if(flag=1)
		return 1;
	while(temp!=NULL)
	{

		if((prev->data)>temp->data)
			flag=1;
		else{flag=0;break;}
		temp=temp->next;
	}
	if(flag==1)
		return 1;
	if(flag==0&&dflag==0)
	{
		return 0;
	}

}

int main()
{
	int n;
	printf("Enter the no of elements");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		insert();
	}
	int x= check();
	if(x==1)
	{
		printf("Ascending order");
	}
	else if(x==-1)
	{
		printf("Descending order");
	}
	else{printf("Not sorted");}
	return 0;

}