/*Name - Rajdeep Lahiri
section -14
assignment - 11
Roll no - 22CH30025*/

#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
	int data;
	struct node *next;
}node;

int main()
{
printf("enter the number of elements in the array\n");
int n;
scanf("%d",&n);
node *head,*ptr,*ptr1;
int A[n];
int i;
head = (node*)malloc(sizeof(node));
ptr = head;
ptr1 = head;
node *ptr2 = head;
printf("enter the elements into the array\n");
for(i=0;i<n;i++)
scanf("%d",&A[i]);

for(i = 0;i<n-1;i++)
{
	ptr->data = A[i];
	ptr->next = (node*)malloc(sizeof(node));
	ptr = ptr->next;
}
ptr->data = A[n-1];
ptr->next = NULL;


node *new;
new = (node*)malloc(sizeof(node));
new->next = NULL;

printf("enter the data for the node to be inserted\n");
scanf("%d",&new->data);

if(new->data<head->data)
{
new->next = head->next;
head->next = new;
}
else if(new->data>ptr->data)
{
new->next = NULL;
ptr->next  = new;
}
else
{
for(i=0;i<n;i++)
{
	if(new->data >= ptr1->data && new->data<=ptr1->next->data)
	{
		new->next = ptr1->next;
		ptr1->next = new;
		break;
	}
	ptr1=ptr1->next;
}
}
while(ptr2!=NULL)
{
	printf("%d\n",ptr2->data);
	ptr2 = ptr2->next;
}
return 0;
}




