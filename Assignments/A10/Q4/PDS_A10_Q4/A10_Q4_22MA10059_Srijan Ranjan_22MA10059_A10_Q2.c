/*
Section14
Roll No: 22MA10059
Name: Srijan Ranjan
Assignment no:9
Description: This program takes input of a structure of bank details of a persom. Inserts it in a sorted list in ascending order and prints the record.
*/
#include<stdio.h>
#include<stdlib.h>
struct details{
	int acc_num;
	char name[100];
	int bal;
};
struct node{												//Structure of a node.
	struct details;
	struct node* next;
}*first=NULL;							.
first=(struct node*)malloc(sizeof(struct node));
first->details.acc_num=scanf("%d",&details.acc_num);
first->details.name=scanf("%s",&details.name);
first->details.bal=scanf("%d",&details.bal);
first->next=NULL;
void insert(){
	struct node*t,*prev;
	t=(struct node*)malloc(sizeof(struct node));
	t->details.acc_num=scanf("%d",&details.acc_num);
	t->details.name=scanf("%s",&details.name);
	t->details.bal=scanf("%d",&details.bal);
	t->next=NULL;
	if(t->details.acc_num<first->details.acc_num){
		t->next=first;
	}
	else{
		
	}
}
int main(){
	int key;
	while(key){										//Input till user wants to.
		insert();
		printf("Press 1 to continue 0 to exit: ");
	}
	return 0;
}