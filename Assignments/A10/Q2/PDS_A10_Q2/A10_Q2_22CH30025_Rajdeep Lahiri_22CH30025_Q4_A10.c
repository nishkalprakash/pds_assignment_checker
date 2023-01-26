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
int asc = 0;
int desc = 0;
for(i = 1;i<len;i++)
{
	if(ptr->d>=ptr->next->d)
	desc++;
	if(ptr->d<=ptr->next->d)
	asc++;
	ptr = ptr->next;
}
if(asc == len-1)
printf("the list is in ascending order\n");
else if(desc == len-1)
printf("the list is in descending order\n");
else
printf("the list is not in sorted order");


return 0;
}
