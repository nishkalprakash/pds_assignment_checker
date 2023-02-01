#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
	int data;
	struct node* next;
}node;
node*init()
{
	node* head;
	head=(node*)malloc(sizeof(node));
	head->next=NULL;
	return head;
}
void printlist(node * head)
{
	node* ptr=head;
	while(ptr!=NULL)
	{
		printf("%d ",ptr->data);
		ptr=ptr->next;
	}
	printf("\n");
}
node* nw(int i, node*head)
{
	node* ptr=head;
	node* new=(node*)malloc(sizeof(node));
	new->data=i;
	new->next=NULL;
	while(ptr->next!=NULL)
	{
		ptr = ptr->next;
	}
	ptr->next=new;
	return head;
}
int main()
{
	node*head=init();
	printf("n= ");
	int n,m;
	scanf("%d",&n);
	printf("LL[n]= ");
	int j;
	scanf("%d",&j);
	head->data=j;
	for(int i=1;i<n;i++)
	{
		scanf("%d",&j);
		head=nw(j,head);
	}
	printf("m= ");
	scanf("%d",&m);
	if(head->data==m)
	{
		head=head->next;
		printf("output after deleting  %d :",m);
		printlist(head);
		return 0;
	}
	node*temp, *ptr;
	ptr=head;
	while(ptr!=NULL)
	{
		temp=ptr->next;
		if(temp!=NULL && temp->data==m)
		{
			ptr->next=temp->next;
			printf("output after deleting is %d: ",m);
			printlist(head);
			return 0;
		}
		ptr=ptr->next; 
	}
	printf("%d does not exist \n",m);
	return 0;
}