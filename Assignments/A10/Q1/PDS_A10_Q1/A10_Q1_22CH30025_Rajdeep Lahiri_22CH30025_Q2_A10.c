#include <stdio.h>
struct list
{
	int d;
	struct list * next;
};
typedef struct list ELEMENT;
typedef ELEMENT* LINK;
int main()
{
printf("enter the number of element of the array\n");
int n,i,j;
scanf("%d",&n);
int arr[n];
printf("enter the elements of the array\n");
for(i=0;i<n;i++)
scanf("%d",&arr[i]);
LINK head = NULL,tail;
head = createlist(n,arr);
printf("the original list is\n");
printlist(head);
even(head);
printf("the new list is\n");
printlist(head);
return 0;
}

struct list *createlist(int n,int A[])
{
int i;
LINK headlist = NULL,taillist;
headlist = (LINK) malloc(sizeof(ELEMENT));
printf("enter the first number\n");
int first;
headlist->d = scanf("%d",&first);
taillist = headlist;
for(i = 1;i<n;i++)
{
tailist->next = (LINK) malloc(sizeof(ELEMENT));
taillist = taillist->next;
taillist->d = A[i];
}
taillist->next = NULL;
return headlist;
}

void printlist(LINK head)
{
LINK ptr = head;
for(i=0;i<n;i++)
{
printf("%d\n",ptr->d);
ptr=ptr->next;
}

void even(LINK head)
{
LINK ptr1 = head;
prev = ptr1;
int count = 0;
for(i = 0;i<n;i++)
{
if(count%2==0)
{
prev->next = ptr1->next;
ptr1->next = NULL;
free(ptr1);
}
prev = ptr1;
ptr1 = ptr1->next;
count++;
}
for(i=0;i<n/2;i++)
{











