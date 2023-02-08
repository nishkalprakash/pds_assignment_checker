/*
Section 14
Roll No: 22ME30061
Name : Shambo Haldar
Assignment No: (Lab test - 2) - Set-B
Description : Program to perform a set difference on two lists by linked lists
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct SET{
	char data;
	struct SET *next;
}SET;

typedef SET *link;

/*link create_node(char val)
{
	link node;
	node = (link)malloc(sizeof(SET));
	node -> data = val;
	node -> next = NULL;
	return(node);
}
*/
link list(char c[])
{
	link head = NULL,tail;
	int i;

	if(c[0] != '\0'){
		head = /*create_node(c[0]);*/(link)malloc(sizeof(SET));
		head -> data = c[0];
		tail = head;

		for(i = 1;c[i] != '\0';i++){
			tail -> next = (link)malloc(sizeof(SET)/*create_node(c[i])*/);
			tail = tail -> next;
			tail -> data = c[i]; 
		}
		tail -> next = NULL;
	}
	return head;
}

void print(link head)
{
	link temp;
	temp = head;
	while(temp != NULL){
		if(temp -> next == NULL)
			printf("%d,",temp -> data);
		else{
			printf("%d,",temp -> data);
			temp = temp -> next;
		}
	}
}

link delete(char val,link ptr)
{
	link prev,first;
	first = ptr;
	if(ptr == NULL)return NULL;
	else if(val == ptr -> data){
		ptr = ptr -> next;
		first -> next = NULL;
		free(first);
		return ptr;
	}
	else
	{
		prev = ptr;
		ptr -> next;
		while(ptr != NULL && val > ptr -> data){
			prev = ptr;
			ptr = ptr -> next;
		}
		if(ptr == NULL || val != ptr -> data){
			return first;
		}
		else{
			prev-> next = ptr -> next;
			ptr -> next = NULL;
			free(ptr);
			return first;
		}
	}
}

int main()
{
	int len,i;
	char *L1,*L2;
	link temp1,temp2;

	printf("#### L1 ####\n");
	printf("Enter string: ");
	scanf("%s",L1);
	list(L1);

	printf("\n#### L2 ####\n");
	printf("Enter string: ");
	scanf("%s",L2);
	list(L2);

	printf("L1 = {");
	//temp2 = L1;
	print(L1);
	printf("}");
	printf("\n-\n");
	printf("L2 = {");
	print(L2);
	printf("}");
	printf("\n=\n");

	printf("L = {");

	temp1 = L2;
	while(temp1 != NULL){
		temp2 = L1;
		while(temp2 != NULL){
			if(temp2 -> data == temp1 -> data)
				delete(temp1 -> data,L1);
		}
		temp1 = temp1 -> next;
	}
	print(L1);
	printf("}");

	return 0;
}
