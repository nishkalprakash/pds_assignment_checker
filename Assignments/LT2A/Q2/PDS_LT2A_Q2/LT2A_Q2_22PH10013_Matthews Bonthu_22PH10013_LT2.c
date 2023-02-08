#include <stdio.h>
#include <stdlib.h>

typedef struct SET
{
	int data;
	struct SET* next;
}SET;
SET*init()
{
	SET* head;
	head=(SET*)malloc(sizeof(SET));
	head->next=NULL;
	return head;
}
void printlist(SET * head)
{
	SET* ptr=head;
	while(ptr!=NULL)
	{
		printf("%d ",ptr->data);
		ptr=ptr->next;
	}
	printf("\n");
}
SET* nw(int i, SET*head)
{
	SET* ptr=head;
	SET* nw=(SET*)malloc(sizeof(SET));
	nw->data=i;
	nw->next=NULL;
	while(ptr->next!=NULL) ptr=ptr->next;
	ptr->next=nw;
	return head;
}
int main ( )
{
	SET*head=init( );
	printf("n= ");
	int n;
	scanf("%d",&n);
	printf("enter elements :");
	int j;
	scanf("%d",&j);
	head->data=j;
	for(int i=1;i<n;i++)
	{
		scanf("%d",&j);
		head=nw(j,head);
	}
	printf("L1: ");
		printlist(head);
		int m;
		printf("m= ");
		scanf("%d",&m);
		printf("enter elements : ");
		int k;
		scanf("%d",&k);
		head->data=k;
		for(int i=1;i<m;i++)
		{
			scanf("%d",&k);
			head=nw(k,head);
		}
		 printf("L2= ");
         printlist(head);
}