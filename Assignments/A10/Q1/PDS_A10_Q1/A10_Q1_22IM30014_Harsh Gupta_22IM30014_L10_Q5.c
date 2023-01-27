
#include <stdio.h>
#include<string.h>
#include<stdlib.h>
#define ll long long int
typedef struct node {
	int d;
	struct node *next;

}link;
link *head,*head2;
link *ptr ;
int max =0 , min = 10000000;
void createlist(int n,int arr1[]){        // creating a function to take the input as element 
	head = (link*)malloc (sizeof(struct node));
	head->d =arr1[0];
	head->next = NULL;
	ptr =head;
	for (int i=1;i<n;i++){                  // taking element of list 
		link *temp;
		temp = (link*)malloc (sizeof(struct node));
		temp->d=arr1[i];
	
		temp->next =  NULL;

		ptr->next = temp;
		ptr = temp;
	}
	

}
void printlist(link *ptr){                            // traversing 
	while (ptr!=NULL){
		printf("%d  ",ptr->d);
		ptr = ptr->next;
	}
	
}
void even(int n,int arr1[]){        // creating a function to take the input as element 
	head2 = (link*)malloc (sizeof(struct node));

	head2->d =arr1[1];
	head2->next = NULL;
	ptr =head2;
	for (int i=3;i<n;i=i+2){                  // taking element of list 
		link *temp;
		temp = (link*)malloc (sizeof(struct node));
		temp->d=arr1[i];
	
		temp->next =  NULL;

		ptr->next = temp;
		ptr = temp;
	}
	

}
int main() {
	int n,k;                       // taking size of list 
	scanf("%d",&n);
	int arr1[n];
	for (int i=0;i<n;i++){                  // taking element of list 
		scanf("%d",&arr1[i]);
	}
	createlist(n,arr1);
	even(n,arr1);
	ptr = head2;
	printlist(ptr);
	
	
	
	
}