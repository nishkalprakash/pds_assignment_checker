/*
 Section 14
 Roll No : 22MT10023
 Name : HARSH GUPTA
 Assignment : LAB TEST - 2
 Description : program that prints the addition of two lists such that the elements of the addition matrix are all unique
*/

#include <stdio.h>
#include <stdlib.h>

int curr_set;
int sizeL1,sizeL2;

typedef struct SET{
	int data;
	struct SET *next;
}SET;

int traverseCheck(SET *I,int d)
{
	SET* ptr=I;
	while(ptr->next!=NULL)
	{
		if(d==ptr->data)
			return 0;
		ptr=ptr->next;
	}
	if(d==ptr->data)
		return 0;
	return 1;
}
SET* CreateList()
{
	int n,c=0;
	printf("Enter N: ");
	scanf("%d",&n);
	printf("Enter %d numbers: ",n);
	int d;
	scanf("%d",&d);
	SET *head = (SET*)malloc(sizeof(SET));
	head->data = d;
	head->next = NULL;
	SET *ptr = head;
	for(int i=1;i<n;i++)
	{
		scanf("%d",&d);
		if(traverseCheck(head,d)==0)
			continue;
		c++;
		SET *temp = (SET*)malloc(sizeof(SET));
		temp->data = d;
		temp->next = NULL;
		ptr->next = temp;
		ptr=temp;
		temp=NULL;
	}
	if(curr_set==1)
		sizeL1=c+1;
	else if(curr_set==2)
		sizeL2=c+1;
	return head;
}

void printlist(SET* I)
{
	SET* ptr=I;
	while(ptr->next!=NULL)
	{
		printf("%d, ",ptr->data);
		ptr=ptr->next;
	}
	printf("%d",ptr->data);
}

SET* AdditionSet(SET* A,SET* B)
{
	SET *head = (SET*)malloc(sizeof(SET));
	head->data = -1000000000;
	head->next=NULL;
	SET *ptrA = A;
	SET *ptrB = B;
	SET *ptr = head;
	for(int i=0;i<sizeL1;i++)
	{
		for(int j=0;j<sizeL2;j++)
		{
			int d = ptrA->data+ptrB->data;
			ptrB=ptrB->next;

			if(traverseCheck(head,d)==0)
				continue;
			
			SET *temp = (SET*)malloc(sizeof(SET));
			temp->data = d;
			temp->next = NULL;
			ptr->next = temp;
			ptr=temp;
			temp=NULL;
		}
		ptrA=ptrA->next;
		ptrB=B;
	}
	return head->next;
}
int main()
{
	SET *L1 = (SET*)malloc(sizeof(SET));
	SET *L2 = (SET*)malloc(sizeof(SET));

	printf("#### L1 ####\n");
	curr_set=1;
	L1=CreateList(L1);
	printf("#### L2 ####\n");
	curr_set=2;
	L2=CreateList(L2);

	printf("L1 = {");
	printlist(L1);
	printf("}\n +\n");
	printf("L2 = {");
	printlist(L2);
	printf("}\n =\n");

	SET *L = (SET*)malloc(sizeof(SET));
	L = AdditionSet(L1,L2);
	
	printf("L = {");
	printlist(L);
	printf("}\n");
	return 0;
}
