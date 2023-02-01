/* 
Section 14
Roll No:22CE10045
Name : Aayush Ujwal Mohata
Assignment No:11
Discription :

*/
#include<stdio.h>
#include<stdlib.h>
typedef struct list{
	int data;
	struct list* next;

}list;

list* create(int n)
{
	list *head=NULL,*ptr;
	int j=1;
	if(n>0)
		{
		head=(list*)malloc(sizeof(list));
		printf("Enter %d th element is :",j);
		//scanf("%d",&(head->data));
		int temp;
                scanf("%d",&temp);
                head->data=temp;
                ptr=head;
		}
	for(int i=2;i<=n;i++)
	{
		ptr->next=(list*)malloc(sizeof(list));
		ptr=ptr->next;
		printf("Enter %d th element is :",++j);
		//scanf("%d",&(ptr->data));
                int temp;
                scanf("%d",&temp);
                ptr->data=temp;
                 
	}
	ptr->next=NULL;
	return head;
}

void insert(list* prev)
{
	list* ptr;
	ptr=(list*)malloc(sizeof(list));
	int temp;
	scanf("%d",&temp);
	ptr->data=temp;
	if(prev->next==NULL)
		{
		prev->next=ptr;
		ptr->next=NULL;
		}
	else
		{
			ptr->next=prev->next;
			prev->next=ptr;
		}
}

void insertion(list* head,int key)
{
	list* ptr;
	ptr=(list*)malloc(sizeof(list));
	//insertion at head
	if(key<=head->data)
		{
			ptr->data=key;
			ptr->next=head;
			head=ptr;
			return;		
		}
	//insertion at any middle element
	ptr=head;	
	while((ptr->data<=key)&&(ptr->next!=NULL)&&(key<=ptr->next->data))
	{
		insert(ptr);
		ptr=ptr->next;
	}
	//insertion at tail
	if(ptr==NULL)
		{
		insert(ptr);
		return;
		}
	return;
}

void print_list(list* head)
{
	list* ptr;
	
	ptr=head;
	while(ptr!=NULL)
	{
		printf("%d\n",ptr->data);
		ptr=ptr->next;
	}
}

int main()
{
	int N,key;
	printf("Enter the number of elements :");
	scanf("%d",&N);
	list* head;
	head=create(N);
	printf("Enter new element");
	scanf("%d",&key);
	insertion(head,key);
        print_list(head);
}



















