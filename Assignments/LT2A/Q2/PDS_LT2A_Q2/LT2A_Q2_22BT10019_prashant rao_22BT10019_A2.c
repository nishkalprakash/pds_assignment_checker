#include<stdio.h>
#include<stdlib.h>
struct SET
{
	int data;
	struct SET *next;
}
void printlist(struct SET *head)
{
	struct SET *ptr= head;
	while(ptr)
	{
		printf("%d", ptr->head);
		ptr=ptr->next;
	}
	printf("NULL");
}
void push(struct SET**head,int data)
{
	struct SET *newSET=(struct SET*)malloc(size of (struct SET));
	newSET->data = data;
	newSET->next = *head;
	*head= newSET;
}
void insert(struct SET**head, struct SET*newSET)
{
	int main(void)
	{

	   int L1[2] ={1,2};
		int L2[3] ={1,2,4};

		struct SET *head= NULL;
		int L[5]= L1[2] + L2[3];
		printf("L[5]=%d", L1[2]+L2[3]);
	}
	void  insert(struct SET**head, struct SET*newSET)
	{

		int L1[5]= {1,2,3,4,5};
		int L2[5]= {1,2,3,4,5};

		int L[10]=L1[5] + L2[5];
		printf("L[10=%d", L1[5] + L2[5]);
	}
	void insert(struct SET**head, struct SET*newSET)
	{
		int L1[5]={1,1,1,1,1};
		int L2[5]={1,1,1,1,1};
		struct SET *head= NULL;
		int L[1]=L1[5]+L2[5];
		printf("L[1]=%d", L1[5]+L2[5]);
	}
	void  insert(struct SET**head, struct SET*newSET)
	{
		int L1[1]={0};
		int L2[1]={0};

		int L[1]=L1[1]+L2[1];
		printf("L[1]=%d", L1[1]+L2[1]);
	}
	printlist(head);
	return 0;
}






		

