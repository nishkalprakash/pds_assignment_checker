Sec:14
Name sourabh kumar yadav
Roll no : 22EE10068
Assignment : 11
Question no : 4

#include <stdio.h>
#include <stdlib.h>
struct node{
	int data;
	struct node*link;
};
int main()
{
	int n;
	printf("enter value of n\n");
	scanf("%d",&n);
	head = Del_first(head); //delete first node //
	ptr = head;
	while(ptr ! = null)
	{
		printf("%d",ptr->data);
		ptr = ptr->link;
	}
head = del_position(&head, position);  //delete particular position node//
ptr = head;
while(ptr! = null)
{
	printf("%d",ptr->data);
	ptr = ptr->link;
}
head = del_list(head); //deleting whole list//
if(head==null)
	printf("list deleted successfully");
return 0;