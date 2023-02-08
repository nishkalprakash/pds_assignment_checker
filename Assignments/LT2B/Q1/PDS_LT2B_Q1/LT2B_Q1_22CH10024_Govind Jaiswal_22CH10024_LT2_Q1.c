/*
Name : Govind Jaiswal
Roll no : 22CH10024
Section : 14
LAB TEST : 2
Description : Program to print all elements present in set 1 but not in set 2
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct SET     //creating a list for storing string elements in a set
{
	char data;
	struct SET *next;    //pointer to the same structure
}SET;

typedef SET* link;

link create_set(char s[])
{
	link head=NULL,ptr;
	head = (link)malloc(sizeof(SET));    //allocating memory space for head pointer dynamically
	if(s[0] !='\0')
	{
		head->data = s[0];
		ptr =  head;
	}
	for(int i=1;s[i]!='\0';i++)
	{
		ptr->next = (link)malloc(sizeof(SET));
		ptr = ptr->next;
		ptr->data = s[i];
	}
	ptr->next = NULL;    //pointing the last node to NULL
	return head;
}

void print_set(link head,int number)    //function to print a set
{
	printf("L%d = {",number);
	while(head!=NULL)
	{
		printf("%c,",head->data);
		head = head->next;
	}
	printf("}");
	printf("\n");
}
	
link diff_set(link head1,link head2)   //function to find elements in set 1 but not in set 2
{
	link newhead = NULL;
	link ptr,ptr1,ptr2;
	int i = 0;
	ptr1 = head1;
	ptr2 = head2;
	while(ptr1!=NULL && ptr2!=NULL)
	{
		if(ptr1->data != ptr2->data)
		{
			ptr = (link)malloc(sizeof(SET));
			ptr->data = ptr1->data;
			ptr = ptr->next;
			i++;
		}
	}
	ptr->next = NULL;
	return newhead;
}
	
int main()
{
	char s1[50],s2[50];    //declaring two strings to implement the set operation
	link head1='\0',head2='\0',ptr;
	
	printf("Enter 1st string\n");
	scanf("%s",s1);     //enter whitespace to end the string
	
	printf("Enter 2nd string\n");
	scanf("%s",s2);
	
	head1 = create_set(s1);   //calling the function to create a list
	print_set(head1,1);     //function to print the list

	head2 = create_set(s2);
	print_set(head2,2);

	return 0;
}
