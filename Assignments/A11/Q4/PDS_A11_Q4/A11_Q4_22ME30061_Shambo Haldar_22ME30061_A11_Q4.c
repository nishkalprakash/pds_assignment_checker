/*
Section 14
Roll No: 22ME30061
Name : Shambo Haldar
Assignment No: 11
Description : Program to delete a value from a linked list
*/

#include<stdio.h>
#include<stdlib.h>

typedef struct list{
	int data;
	struct sort *next;
};

typedef struct list element;
typedef element * link;

link create_node(int value)
{
	link node;
	node = (link*)malloc(sizeof(element));
	node -> data = value;
	//node -> next = NULL;
	return node;
}

link delete(int val,link ptr)
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

void print_list(link ptr)
{
	link temp;
	temp = ptr;

	while(temp != NULL){
		if(temp -> next == NULL)
			printf("%d\n",temp -> data);
		else
			printf("%d ",temp -> data);
		temp = temp -> next;
	}

}

int main()
{
	int n,i,value,new_val;
	link *head,ptr;


	printf("Enter the number of terms: ");
	scanf("%d",&n);

	printf("Enter number: ");
	scanf("%d",&value);
	head = create_node(value);
	ptr = head;

	for(i = 0;i < n-1;i++){
		printf("Emter number: ");
		scanf("%d",&value);
		ptr -> next = create_node(value);
	//	ptr -> next = node;
	}
	ptr -> next = NULL;


	printf("Enter new number: ");
	scanf("%d",&new_val);

	delete(new_val,head);

	printf("Output after deleting %d:\n",new_val);

	print_list(head);

	return 0;
}
