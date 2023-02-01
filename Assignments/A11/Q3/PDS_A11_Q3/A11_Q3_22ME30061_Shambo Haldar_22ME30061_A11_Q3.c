/*
Section 14
Roll No: 22ME30061
Name : Shambo Haldar
Assignment No: 11
Description : Program to insert a value to an existing sorted linked list
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

link insert(int value,link ptr)
{
	link node,prev,first;
	node = create_node(value);
	if(ptr == NULL || value <= ptr){
		node -> next = ptr;
		return node;
	}
	else{
		first = ptr;
		prev = ptr;
		ptr = ptr -> next;
		while(ptr != NULL && value > ptr -> data)
		{
			prev = ptr;
			ptr = ptr -> next;
		}
		prev -> next = node;
		node -> next = ptr;
		return first;
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

	insert(new_val,head);

	printf("Output after inserting %d:\n",new_val);

	print_list(head);

	return 0;
}
