/*
SATYA PRAKASH NANDA
22AG10041
SECTION 14
LAB 10
QUESTION 1
*/
#include<stdio.h>
#include<stdlib.h>
typedef struct node{
int data;
struct node*next;
}n;
int main(){
//allocate memory for nodes in the linked list in heap
n*head= (n*)malloc(sizeof(n));
n*second= (n*)malloc(sizeof(n));
n*third= (n*)malloc(sizeof(n));
n*forth= (n*)malloc(sizeof(n));
n*fifth= (n*)malloc(sizeof(n));
printf("enter first number:");
scanf("%d", &head->data);
printf("enter second number:");
scanf("%d", &second->data);
printf("enter third number:");  // input of data from user
scanf("%d", &third->data);
printf("enter forth number:");
scanf("%d", &forth->data);
printf("enter fifth number:");
scanf("%d", &fifth->data);
head->next=second;
second->next=third;
third->next=forth;
forth->next=fifth;
fifth->next=NULL;
if(head->data > second->data){
	if(second->data > third->data){
		if(third->data > forth->data){
			if(forth->data >fifth->data){
				printf("the input list L is in descending order.\n");
			}else{printf("the input list l is not in sorted order.\n");}
		}else{printf("the input list l is not in sorted order.\n");}
	}else{printf("the input list l is not in sorted order.\n");}
}
else if(head->data < second->data){
	if(second->data < third->data){
		if(third->data < forth->data){
			if(forth->data <fifth->data){
				printf("the input list L is in ascending order.\n");
			}else{printf("the input list l is not in sorted order.\n");}
		}else{printf("the input list l is not in sorted order.\n");}
	}else{printf("the input list l is not in sorted order.\n");}
}

else{printf("the input list l is not in sorted order.\n");}
return 0;
}
