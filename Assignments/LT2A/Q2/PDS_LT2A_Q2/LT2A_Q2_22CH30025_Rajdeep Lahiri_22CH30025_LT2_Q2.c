#include <stdio.h>
#include <stdlib.h>
typedef struct set//created structure
{
	int data	;
	struct set *next;
}set;

set* createlist(int n)//function to create the list
{
set* head = (set*)malloc(sizeof(set));
set* ptr = head;
int i;
printf("enter the elemnets into the list\n");
for(i=1;i<=n-1;i++)
{
	scanf("%d",&ptr->data);
	ptr->next = (set*)malloc(sizeof(set));
	ptr = ptr->next;
}
scanf("%d",&ptr->data);
ptr->next = NULL;
return head;
}
 
void printlist(set* l)//function to print a list
{
while (l!=NULL)
{
	printf("%d\t",l->data);
	l = l->next;
}
}
 
set* addlist(set* head1,set* head2)//returning a list which adds the elements in the way specified but does not take care of repetitons
{
set* ptr1 = head1;
set* ptr2 = head2;
set* new = (set*)malloc(sizeof(set));
set* traverse = new;
while(ptr1!=NULL)
{
while(ptr2!=NULL)
{
	if(ptr1->next ==NULL && ptr2->next == NULL)//when both pointers are at the last node
	{
		traverse->data = ptr1->data+ptr2->data;
		traverse->next = NULL;//setting the last node as null
		break;
	}
	traverse->data = ptr1->data+ptr2->data;//putting data in the nodes
	traverse->next = (set*)malloc(sizeof(set));//creating space for the succesive nodes
	traverse = traverse->next;//advancing the pointer
	ptr2 = ptr2->next;
}
ptr1 = ptr1->next;
ptr2 = head2;//reassigning the pointer for the next iteraton
}
return new;//returning the pointer to the list
}

int main()
{
int i,j;
printf("enter the size of the first list\n");
int size1;
scanf("%d",&size1);
set* l1 = createlist(size1);
printf("enter the size of the second list\n");
int size2;
scanf("%d",&size2);
set* l2 = createlist(size2);
set* l = addlist(l1,l2);
printlist(l);//printing with repetions
printf("\n");
int min = l->data, max = l->data;
set* temptr = l;
for(i=1;i<size1*size2;i++)//calculating the max and min of the list
{
	if(temptr->next->data>temptr->data)
	max = temptr->next->data;
	if(temptr->next->data < temptr->data)
	min = temptr->next->data;
	temptr=temptr->next;
}
temptr = l;
int count = 0;

printf("%d\n",max);
printf("the final list is\n");
for(i = min;i<=max;i++)//printing the distinct elements
{
	count =0;
	while(temptr!=NULL)
	{
	if(temptr->data == i)
	count++;
	temptr = temptr->next;
	}
	temptr = l;
	if(count>0)
	printf("%d\t",i);
}




return 0;
}
