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

int check_ele(int arr[], int size, int value){
	for (int i=0;i<size; i++) if(arr[i]==value) return 1;
	return 0;
}

void print(element* head){
	element* ptr=head;
	while(ptr!=NULL){
		printf("%d ", ptr->d);
		ptr=ptr->next;
	}
	printf("\n");
}

int main(){
	int n, min=0, max=0, temp, size1=0, size2=0;
	element* head=(element*)malloc(sizeof(element));
	head->next=NULL;
	element* ptr;
	ptr=head;
	printf("Enter the number of integers: ");
	scanf("%d", &n);
	int duplicate[n], distinct[n];
	for (int i=0; i<n; i++){
		scanf("%d", &temp);
		ptr->d=temp;
		if(i==n-1) break;
		ptr->next=(element*)malloc(sizeof(element));
		ptr=ptr->next;
	}
	ptr=NULL;
	printf("Input linked list is: \n");
	print(head);
	ptr=head; min=head->d; max=head->d;
	while(ptr!=NULL){
		temp=ptr->d;
		if (check_ele(distinct,size1,temp)) duplicate[size2++]=temp;
		else distinct[size1++]=temp;
		if (temp<min) min=temp;
		if (temp>max) max=temp;
		ptr=ptr->next; 
	}
	if(!size2) printf("The input list does not contain any duplicate number.\n");
	else {
		printf("The input list contains duplicate numbers of: ");
		for (int j=0; j<size2; j++) printf("%d ", duplicate[j]);
	}
	printf("\nMinimum number is: %d\n", min);
	printf("Maximum number is: %d", max);
	return 0;
}



