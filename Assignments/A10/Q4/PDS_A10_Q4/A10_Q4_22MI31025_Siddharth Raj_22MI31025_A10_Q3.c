/*Section:14
Roll no:22MI31025
Name:Siddharth Raj
Lab:10
Question no:3
description:maximum minimum*/

#include <stdio.h>
#include <stdlib.h>
//define structure
struct details{
	int anum;
	char name[100];
	int bal;
};
struct list{
	struct details a;
	struct list*next;
};
struct list*head;
struct list*tail;
struct lsit*prev;
void insert()
{
	struct list*ptr=(struct list*)malloc (sizeof(struct list));
	printf("Enter account details:\n");
	scanf("%d",&ptr->a.anum);
	scanf("%s",&ptr->a.name);
	scanf("%d",&ptr->a.bal);
	if(head==NULL)
	{
		head=ptr;
		tail=ptr;
		ptr->next=NULL;
	}
	else
	{
		tail->next=ptr;
		ptr->next=NULL;

	}
}
int main()
{
	int ch;
	printf("Press 1 to exit");
	while(ch!=1)
	{
		insert();
		scanf("%d",&ch);
	}
	return 0;
}