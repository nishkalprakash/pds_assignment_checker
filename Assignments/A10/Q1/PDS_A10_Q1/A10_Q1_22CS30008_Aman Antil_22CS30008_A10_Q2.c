/*
Section 14
Roll no : 22CS30008
Name : Aman
Assignment no : 10
Description : Program to print even elements
*/
#include<stdio.h>
#include<stdlib.h>
typedef struct list{
	int data;
	struct list* next;
}list;                                  
typedef list* link;
int n;
link crnode(int val){
	link new;
	new=(link)malloc(sizeof(list));
	new->data=val;
	new->next=NULL;
	return new;
}
link createlist(int a[], int n){
	link newp,prev,first;
	for(int i=0;i<n;i++){
	newp=crnode(a[i]);
	if(i==0) {
		first=newp;
		prev=newp;
	}
	prev->next=newp;
	prev=newp;
	}
	return first;
}
void even(link head){
	head=head->next;
	link temp;
	temp=head;
	int c=0;
	while((temp->next!=NULL)||(temp->next->next!=NULL)){
		temp->next=temp->next->next;
		temp=temp->next;
		c++;
	}
	if(n%2) temp->next->next=NULL;
	else temp->next=NULL;
	printf("%d", c);
}
void printls(link head){
	link temp;
	temp=head;
	while(temp!=NULL){
		printf("%d ",temp->data);
		temp=temp->next;
	}
}
int main(){
	int a[10];
	scanf("%d", &n);
	link head;
	for(int i=0;i<n;i++) scanf("%d", &a[i]);
	head=createlist(a,n);
	printls(head);
	printf("\n");
	even(head);
	printls(head);
}