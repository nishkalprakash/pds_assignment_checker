#include <stdio.h>
#include <stdlib.h>
struct list
{
	int d;
	struct list * next;
};
typedef struct list ELEMENT;
typedef ELEMENT* LINK;
int main()
{
int len;
printf("enter the number of nodes of the linked list\n");
scanf("%d",&len);
int i,j;
LINK head=NULL,tail;
head = (LINK)malloc(sizeof(ELEMENT));
printf("enter the first number\n");
int first;
head->d = scanf("%d",&first);
tail = head;
for(i=2;i<=len;i++)
{
	printf("enter the next number\n");
	int data;
	scanf("%d",&data);
	tail->next = (LINK)malloc(sizeof(ELEMENT));
	tail = tail->next;
	tail->d = data;
}
tail->next = NULL;
LINK ptr = head;
int dupcount = 0;
int max = head->d,min = head->d;
for(i=1;i<len;i++)
{
	if(ptr->next->d > ptr->d)
	max = ptr->next->d;
	if(ptr->next->d < ptr->d)
	min = ptr->next->d;
	ptr=ptr->next;
}
ptr = head;
for(i=min;i<=max;i++)
{
	dupcount = 0;
	for(j=1;j<=len;j++)
{
		if(ptr->d ==i)
		dupcount++;
		ptr = ptr->next;
}
	if(dupcount>1)
	printf("%d appears more than once\n",i);
	ptr = head;
}
printf("the maximum is%d\n",max);
printf("the minimum is%d\n",min);
return 0;
}

