/*
Section 14
Roll No : 22ME10064
Name : Pranshu Dasgupta
Test : 2
Description: Program to find the sum of two linked lists*/

#include <stdio.h>
#include <stdlib.h>

typedef struct SET{
	int data;
	struct SET* next;
} SET;

//Function to return the size of a linked list
int size(SET* head){
	SET* p=head;
	int count=0;
	while(p!=NULL){
		count++;
		p=p->next;
	}
	return count;
}

//Function to check if a given element is present in a linked list
int check(SET* head, int a){
	SET* p=head;
	while(p!=NULL){
		if (p->data==a) return 1;  //if element is found we return 1
		p=p->next;
	}
	return 0;
}

//Function to print a linked list
void print_list(SET* head){
	SET* ptr=head;
	printf("{");
	while(ptr->next!=NULL){
		printf("%d, ", ptr->data);
		ptr=ptr->next;
	}
	printf("%d", ptr->data);
	printf("}\n");
	return;
}

//Function to initialise and create a linked list
SET* create_list(){
	int n, element;
	printf("Enter N: ");
	scanf("%d", &n);
	printf("Enter %d numbers: ", n);
	
	SET* head=NULL;
	if (n>0){	
		head=(SET*)malloc(sizeof(SET));
		scanf("%d", &head->data);
		head->next=NULL;
		if ((n--)==1) return head;

		SET* ptr=head;
		while(n--){  //n is our counter variable. Keeps track of the number of elements input
			scanf("%d", &element);
			if (!check(head,element)){  //checking if the element is already present in the linked list
					ptr->next=(SET*)malloc(sizeof(SET));
					ptr->next->data=element;
					ptr->next->next=NULL;
					ptr=ptr->next;
				}
		}
	}
	return head;
}

//Function to find the sum of two linked lists
SET* sum(SET* l1, SET* l2){
	SET*l3=NULL;
	SET*p3;
	int a;

	SET*p1=l1;
	SET*p2=l2;
	
	if (size(l1)>0 && size(l2)>0){
		l3=(SET*)malloc(sizeof(SET));
		p3=l3;
		p3->data=p1->data+p2->data;
		p3->next=NULL;
		
		if(size(l1)==1 && size(l2)==1) return l3;  //if the resultant linked list has only one element in it
		p2=p2->next;
		while(p1!=NULL){
			while(p2!=NULL){
				a=p1->data+p2->data;
				if (!check(l3,a)){  //checking if the element is already present in the linked list
					p3->next=(SET*)malloc(sizeof(SET));
					p3->next->data=a;
					p3->next->next=NULL;
					p3=p3->next;
				}
				p2=p2->next;			
			}
			p2=l2;  //going back to the start of the second list
			p1=p1->next;
		}
	}
	return l3;
}

int main(){
	printf("\n#### L1 ####\n");
	SET* L1=create_list();

	printf("\n#### L2 ####\n");
	SET* L2=create_list();

	SET* L3=sum(L1,L2);
	
	printf("\nL1=");
	print_list(L1);
	printf("\n+\n");
	printf("\nL2=");
	print_list(L2);

	printf("\n=\n");
	printf("\nL=");
	print_list(L3);

	return 0;
}


