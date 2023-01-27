/*
Section14
Roll No: 22MA10059
Name: Srijan Ranjan
Assignment no:9
Description: This program takes input of an array to create a linked list and prints it and then modifies o store only the even numbered nodes.
*/
#include<stdio.h>
#include<stdlib.h>
struct node{												//Structure of a node.
	int data;
	struct node* next;
}*first=NULL;
void create(int a[],int n){									//Function to create a node.
	struct node*t,*last;
	first=(struct node*)malloc(sizeof(struct node));
	first->data=a[0];
	first->next=NULL;
	last=first;
	for(int i=1;i<n;i++){
		t=(struct node*)malloc(sizeof(struct node));
		t->data=a[i];
		t->next=NULL;
		last->next=t;
		last=t;
	}
}
void print(struct node*p){
	while(p){
		printf("%d ",p->data);
		p=p->next;
	}
	printf("\n");
}
void even(struct node*p){
	int count=1;
	p=p->next;
	first->next=NULL;
	first=p;
	struct node*prev;
	prev=first;
	while(p){
		count++;
		if(count%2!=0){
			prev->next=p->next;
			p->next=NULL;
		}
		prev=p;
		p=p->next;
	}
}
void printlist(struct node*p){
	while(p){
		printf("%d ",p->data);
		p=p->next;
	}
	printf("\n");
}
int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	create(a,n);
	print(first);
	even(first);
	printlist(first);
}