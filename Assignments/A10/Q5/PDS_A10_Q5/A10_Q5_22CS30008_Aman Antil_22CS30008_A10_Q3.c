/*
Section 14
Roll no : 22CS30008
Name : Aman
Assignment no : 10
Description : Program to find intersection and union
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
void printls(link head){//fn for printing
	link temp;
	temp=head;
	while(temp!=NULL){
		printf("%d ",temp->data);
		temp=temp->next;
	}
}
link intr(link head1, link head2){//fn for intersection
	link head,tail,temp1,temp2;
	head=NULL;
	tail=NULL;
	temp1=head1;
	temp2=head2;
	while(temp1!=NULL){
		while(temp2!=NULL){
			if(temp1->data==temp2->data) head=createlist(temp1->data,head,&tail);
			temp2=temp2->next;
		}
		temp1=temp1->next;
	}
	return head;
}
link uni(link head1, link head2){//fn for union
	link head,tail,temp1,temp2;
	head=NULL;
	tail=NULL;
	temp1=head1;
	temp2=head2;
	while(temp1!=NULL){
		while(temp2!=NULL){
			if(temp1->data==temp2->data) {temp2=temp2->next;continue;}
			head=createlist(temp1->data,head,&tail);
			temp2=temp2->next;
		}
		temp1=temp1->next;
	}
	return head;
}
int main(){
	printf("list 1\nEnter number\nenter -1 to end\n");
	link head1,tail1;
	head1=NULL;
	tail1=NULL;
	while(1){
		int n; scanf("%d", &n);
		if(n==-1)break;
		head1=createlist(n,head1,&tail1);
	}
	printf("list 2\nEnter number\nenter -1 to end\n");
	link head2,tail2;
	head2=NULL;
	tail2=NULL;
	while(1){
		int n; scanf("%d", &n);
		if(n==-1)break;
		head2=createlist(n,head2,&tail2);
	}
	printls(intr(head1,head2)); 
	printf("\n");
	printls(uni(head1,head2));
}