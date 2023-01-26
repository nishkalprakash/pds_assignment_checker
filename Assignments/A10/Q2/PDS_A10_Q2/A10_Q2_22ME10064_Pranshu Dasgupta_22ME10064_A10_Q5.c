/*
Section 14
Roll No : 22ME10064
Name : Pranshu Dasgupta
Assignment No : 10*/

#include <stdio.h>
#include <stdlib.h>

struct c{
	int d;
	struct c* next;
};

typedef struct c element;

void print(element* head){
	printf("The input linked list is: \n");
	element* ptr;
	ptr=head;
	while(ptr!=NULL){
		printf("%d ", ptr->d);
		ptr=ptr->next;
	}
	printf("\n");
}

int check_descending(element* head){
	int flag=1;
	element * ptr;
	ptr=head;
	while(ptr->next!=NULL){
		if (ptr->d<ptr->next->d) {flag=0; break;}
		ptr=ptr->next;
	}
	return flag;
}

int check_ascending(element* head){
	int flag=1;
	element * ptr;
	ptr=head;
	while(ptr->next!=NULL){
		if (ptr->d>ptr->next->d) {flag=0; break;}
		ptr=ptr->next;
	}
	return flag;
}

int main(){
	int n, temp;
	element* head=(element*)malloc(sizeof(element));
	head->next=NULL;
	element* ptr;
	ptr=head;
	printf("Enter the number of integers: ");
	scanf("%d", &n);
	for (int i=0; i<n; i++){
		scanf("%d", &temp);
		ptr->d=temp;
		if(i==n-1) break;
		ptr->next=(element*)malloc(sizeof(element));
		ptr=ptr->next;
	}
	ptr=NULL;
	print(head);
	if (check_ascending(head)) printf("The input list L is in ascending order.");
	else if (check_descending(head)) printf("The input list L is in descending order.");
	else printf("The input list L is not in sorted order");
	return 0;
}
