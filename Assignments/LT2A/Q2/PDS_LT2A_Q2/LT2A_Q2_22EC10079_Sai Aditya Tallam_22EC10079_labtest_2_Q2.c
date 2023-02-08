#include<stdio.h>
#include<stdlib.h>



typedef struct node
{
	int data;
	struct node*next;
}node;

void createlist(node*head);
void printlist(node*head);
void sumlist(node*,node*,node*);


int main()
{   node* head1=(node*)malloc(sizeof(node));
	printf("L1\n");
	createlist(head1);
	node* head2=(node*)malloc(sizeof(node));
	printf("L2\n");
	createlist(head2);
	printf("L1=");
	printlist(head1);
	printf("L2=");
	printlist(head2);
	node*head=(node*)malloc(sizeof(node));
	sumlist(head1,head2,head);
	printf("L=");
	printlist(head);

}

void createlist(node*head)
{    int n,i=0;
     node*ptr;
	 ptr=head;
     printf("Enter the value of N :");
     scanf("%d",&n);
     while(i<n)
     {
         scanf("%d",& head->data);
         head->next=(node*)malloc(sizeof(node));
         head=head->next;
         i++;
     }
     head->next=NULL;
     i=0;
    
}
void printlist(node*head)
{
	while(head->next!=NULL)
	{
		printf("%d,",head->data);
		head=head->next;
	}
   printf("\n");

}

void sumlist(node*head1,node*head2,node*head)
{
   node*ptr;

	while(head2->next!=NULL)
	{
        head->data=head1->data + head2->data;
        head2=head2->next;
        head->next=(node*)malloc(sizeof(node));
        head->next->next=(node*)malloc(sizeof(node));
        head=head->next;
        head1=head1->next;
	}
		
		head->next=NULL;

	
}


