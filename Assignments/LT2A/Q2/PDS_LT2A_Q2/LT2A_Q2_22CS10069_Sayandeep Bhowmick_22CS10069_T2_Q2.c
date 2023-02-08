/*
	Section 14
	Roll No.: 22CS10069
	Name : Sayandeep Bhowmick
	Test : 2
	Description : Sum of linked list
*/
#include <stdio.h>
#include <stdlib.h>

struct list 				//linked list definition
{
	int data;
	struct list* next;
};

int duplicate(struct list* h, int n, struct list* p)	//checks for duplicate elements
{
	while(h!=p)
	{
		if(h->data==n)
			return 1;
		h=h->next;
	}

	return 0;
}

int isbefore(struct list* head, struct list* pt)	//checks if element is already present in list
{
	while(head!=pt)
	{
		if(pt->data==head->data)
			return 1;
		head=head->next;
	}
	return 0;
}

struct list *createlist()				//for creating L1 and L2
{
	int n,a;
	printf("Enter the number of elements : ");
	scanf("%d",&n);

	struct list *p, *head;
	p=head=(struct list*)malloc(sizeof(struct list));

	for (int i = 0; i < n; ++i)
	{
		printf("Enter element %d : ",i+1);
		scanf("%d",&a);

		if (duplicate(head,a,p))			//avoids duplicates
		{
			printf("Duplicate element!! Enter again.\n");
			i--;
			continue;
		}

		p->data=a;

		if(i!=n-1)
		{
			p->next=(struct list*)malloc(sizeof(struct list));
			p=p->next;
		}
	}
	p->next=NULL;
	return head;
}

void printlist(struct list* head)			//prints a link list
{
	if (head==NULL)
	{
		printf("The list is empty\n");
		return;
	}

	printf("{" );
	while (head->next!=NULL)
	{
		printf(" %d,",head->data);
		head=head->next;
	}

	printf(" %d }\n",head->data);
}

struct list* createnewlist(struct list* ptr1,struct list* ptr2)		//creates sum with duplicates
{
	struct list *p, *head, *p2=ptr2;
	p=head=(struct list*)malloc(sizeof(struct list));

	while(ptr1!=NULL)
	{
		while(ptr2!=NULL)
		{
			p->data=ptr1->data+ptr2->data;

			if(ptr1->next!=NULL || ptr2->next!=NULL)
			{
				p->next=(struct list*)malloc(sizeof(struct list));
				p=p->next;
			}
			ptr2=ptr2->next;
		}
		ptr1=ptr1->next;
		ptr2=p2;
	}

	p->next=NULL;
	return head;
}

struct list * delete(struct list* head)			//for creating the final link list L by deleting duplicates
{
	struct list *p,*h,*h1;
	p=h=(struct list*)malloc(sizeof(struct list));
	h1=head;

	p->data=h1->data;
	h1=h1->next;

	while(h1!=NULL)
	{
		if(!isbefore(head,h1))		//if element is present before we just skip it
		{
			p->next=(struct list*)malloc(sizeof(struct list));
			p->next->data=h1->data;
			p=p->next;
		}
		h1=h1->next;
	}

	p->next=NULL;
	return h;
}

void main()
{
	printf("\n\n 		--------WELCOME--------\n\n");

	printf("#### List 1 ####\n");
	struct list* head1=createlist();
	printf("L1 = ");
	printlist(head1);

	printf("\n#### List 2 ####\n");
	struct list* head2=createlist();
	printf("L2 = ");
	printlist(head2);

	struct list* head3=createnewlist( head1, head2);

	struct list* head4=delete(head3);

	printf("\n#### L = L1 + L2 ####");
	printf("\nL1 = ");
	printlist(head1);
	printf(" +\nL2 = ");
	printlist(head2);
	printf(" =\nL = ");
	printlist(head4);

	// printlist(head3);

	printf("\n");
	return;
}