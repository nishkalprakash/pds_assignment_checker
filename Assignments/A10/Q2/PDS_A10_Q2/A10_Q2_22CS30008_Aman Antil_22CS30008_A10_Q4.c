/*
Section 14
Roll no : 22CS30008
Name : Aman
Assignment no : 10
Description : Program to find duplicate
*/

#include<stdio.h>
#include<stdlib.h>
typedef struct list{
	int data;
	struct list* next;
}list;                                  
typedef list* link;
link crnode(int val){ //fn to create node
	link new;
	new=(link)malloc(sizeof(list));
	new->data=val;
	new->next=NULL;
	return new;
}
link createlist(int val, link head, link *prev){// fn to create list
	link newp,first;
	first=head;
	newp=crnode(val);
	if(head==NULL){
		first=newp;
		*prev=newp;
		return first;
	}
	
	(*prev)->next=newp;
	*prev=newp;
	return first;
}
int asc(link head){// fn to check asc order
	link temp;
	temp=head;
	while(temp->next!=NULL){
		if(temp->data>temp->next->data) return 0;
		temp=temp->next;
	}
	return 1;
}
int dsc(link head){
	link temp;
	temp=head;
	while(temp->next!=NULL){
		if(temp->data<temp->next->data) return 0;
		temp=temp->next;
	}
	return 1;
}
int main(){
	printf("Enter number\nenter -1 to end\n");
	link head,tail;
	head=NULL;
	tail=NULL;
	while(1){
		int n; scanf("%d", &n);
		if(n==-1)break;
		head=createlist(n,head,&tail);
	}
	if(asc(head)) printf("The input list L is in Ascending order\n");
	else if(dsc(head)) printf("The input list L is in Descending order\n");
	else printf("The input list L Not in sorted order");
}
