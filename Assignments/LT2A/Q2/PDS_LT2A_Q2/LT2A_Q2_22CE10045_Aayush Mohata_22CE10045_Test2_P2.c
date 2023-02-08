/* 
Section 14
Roll No:22CE10045
Name : Aayush Ujwal Mohata
Test No:2
Que No:2
Discription :

*/
#include<stdio.h>
#include<stdlib.h>
typedef struct SET{
	int data;
	struct SET *next;
}SET;
typedef SET* link;
link create(int n)
{
	link head,tail;
	head==NULL;
	if(n!=0)
	{
		printf("Enter %d Elements :",n);
		head=(link)malloc(sizeof(SET));
		int temp;
		scanf("%d",&temp);
		head->data=temp;
		tail=head;
	}
	for(int i=1;i<n;i++)
	{
		tail->next=(link)malloc(sizeof(SET));
		int t;
		scanf("%d",&t);
		tail=tail->next;
		tail->data=t;
	}
	tail->next=NULL;	
		
	return head;
}
void print(link head)
{
	link ptr;
	ptr=head;
	do{
		printf("%d ",ptr->data);
		ptr=ptr->next;
	}while(ptr!=NULL);
}
void add(link head1,link head2,int n1,int n2)
{
	link ptr1,ptr2;
	ptr1=head1;
	ptr2=head2;
	int p=n1*n2;
	int arr[p];
	p=0;
	for(int i=0;i<n1;i++)
	{
		for(int j=0;j<n2;j++)
		{
			arr[p]=ptr1->data+ptr2->data;
			ptr2=ptr2->next;
			p++;
		}
		ptr1=ptr1->next;
		ptr2=head2;
	}
	p=n1*n2;
	for(int v=0;v<p;v++)
		printf("%d",arr[v]);
	return;
}
int main()
{
	int n1,n2;
	link head1,head2,head5;
	printf("Enter N of L1\n");
	scanf("%d",&n1);
	head1=create(n1);
	printf("Enter N of L2\n");
	scanf("%d",&n2);
	head2=create(n2);
	print(head1);
	print(head2);
	add(head1,head2,n1,n2);
}


