/*

SECTION 14

Roll No:22EE10048

Name: Brij

Assignment NO: Lab 11

Description-
*/
//DO CHECK THE COMMENTED PARTS(COMMENTED FOR COMPILATION)
#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
	int data;
	struct node *next;
}ELEMENT;
typedef ELEMENT* LINK;
LINK createnode()
{
	LINK new = (LINK)malloc(sizeof(ELEMENT));
	new->next = NULL;
	return new;
}
LINK createlist(int n)
{
	LINK head = NULL,ptr;
	if (n > 0)
	{
		printf("Enter %d numbers: ",n);		
		head = createnode();
		ptr = head;
		scanf("%d", &(ptr->data));
		for (int i = 1; i < n; i++)
		{
			ptr = ptr->next = createnode();
			scanf("%d", &(ptr->data));
		}
	}
	return head;
}

void printlist(LINK l)
{
	do
	{
		printf("%d ",l->data);//Printing current element
		l=l->next;//Moving to next element
	}
	while(l!=NULL);//Till the list ends
	printf("\n");
}
void sort(LINK l)
{
LINK curr=l,ptr=NULL;
int temp;
while(curr!=NULL)
{
	curr->next=createnode();
	ptr=curr->next;
	//if(ptr==NULL)break;
	while(ptr!=NULL)
	{
	if(curr->data > ptr->data)
	{
		temp=curr->data;
		curr->data=ptr->data;
		ptr->data=temp;
	}
	ptr=ptr->next;
	}
	curr=curr->next;
		
}
}
/*int checkDup(LINK ptr, int d)
{
	if (ptr == NULL)
		return 0;
	if (ptr->data == d)
		return 1;
	return checkDup(ptr->next, d);
}*/
void remove_dup(LINK l)
{
	LINK ptr=l,prev=l;
	while(ptr!=NULL)
	{	
		ptr->next=createnode();
		prev=ptr;
		ptr=ptr->next;
		if(prev->data==ptr->data)
		{
		prev->next=ptr->next;
		ptr->next=NULL;
		free(ptr);	
		}
	}
}
void addset(LINK l1,LINK l2)
{	
	//remove_dup(l1);
	//remove_dup(l2);
	LINK l3=createnode(),SUM=createnode(),temp=createnode();
	l3->data=l1->data+l2->data;
	l3=SUM;
	temp=l2;
	while(l1!=NULL)
	{
		while(l2!=NULL)
		{	
			SUM->next=createnode();
			SUM=SUM->next;
			SUM->data=l1->data+l2->data;
			l2=l2->next;
		}
		l1=l1->next;
		l2=temp;
	}
	SUM=NULL;
	//sort(l3->next);
	//remove_dup(l3->next);
	printlist(l3->next);
}
int main()
{
	int N1,N2;
	LINK L1,L2;
	int max, min;
	printf("#### L1 ####\n");
	printf("Enter N: ");
	scanf("%d", &N1);
	L1=createlist(N1);
	printf("#### L2 ####\n");
	printf("Enter N: ");
	scanf("%d", &N2);
	L2=createlist(N2);
	addset(L1,L2);	
	return 0;
}
