/*

Section 14

Roll no : 22CE10065

Name : Saloni Shaw

Assignment 10

Description - Program to print duplicate numbers

*/
#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node*next;
};
void insert (struct node**head,int item)//insert program
{
	struct node*temp=(struct node*)malloc (sizeof(struct node));
	temp->data=item;
	temp->next=*head;
	*head=temp;
}
int countnode(struct node* head)//counting program
{
	int count=0;
	while(head->next!=NULL){
		struct node*ptr=head->next;
		while(ptr!=NULL)
		{
			if(head->data==ptr->data)
			{printf("duplicate numbers=%d\n",head->data);
				count++;
				break;
				ptr=ptr->next;
			}
			return count;
		}
		int main()//main program
		{
			int n,i;
struct node *head=NULL;
int a[10];
printf("enter the number of elements\n");
scanf("%d",&n);
printf("enter the elements\n");//input
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
insert(&head,a[i]);
		}

		int ans=countnode(head);
		printf("count=%d",ans);//printing counting number
return 0;
		}
	}
}

