/*
	Section 14
	Roll No.: 22CS10069
	Name : Sayandeep Bhowmick
	Assignment No.: 10
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Customer 
{
	int an;
	char c[20];
	int bal;
	struct Customer* next;
} ;

struct Customer* createlist()
{
	struct Customer * head,*t,*ptr;
	head=ptr=(struct Customer*)malloc(sizeof(struct Customer));

	printf("Enter 0 as account number to terminate\n\n");
	int k;

	printf("Enter the account number : ");
	scanf("%d",&k);

	while (k!=0)
	{
		ptr->an=k;

		printf("Enter the name : ");
		scanf("%s",ptr->c);

		printf("Enter the account balance : ");
		scanf("%d",&(ptr->bal));

		printf("\n");
		printf("Enter the account number : ");
		scanf("%d",&k);

		t=ptr;

		ptr->next=(struct Customer*)malloc(sizeof(struct Customer));
		ptr=ptr->next;
	}

	t->next=NULL;

	return head;
}



void main()
{
	printf("\n");

	struct Customer* p,*head=createlist();
	p=head;

	return;

}