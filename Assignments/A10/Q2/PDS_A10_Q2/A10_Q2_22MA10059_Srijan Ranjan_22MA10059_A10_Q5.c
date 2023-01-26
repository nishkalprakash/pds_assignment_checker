/*
Section14
Roll No: 22MA10059
Name: Srijan Ranjan
Assignment no:9
Description: This program takes input of 1 linked list and returns if they are sorted.
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
void check(struct node*p){									//Check sorting order.
	int flag=0,var=0;
	struct node*prev;
	prev=first;
	while(p){
		if(prev->data>p->data){
			flag=1;
			break;
		}
		prev=p;
		p=p->next;
	}
	if(flag==1){
		var=1;
	}
	while(p){
		if(prev->data<p->data){
			flag=-1;
			break;
		}
		prev=p;
		p=p->next;
	}
	if(flag==-1){printf("Ascending order");}
	else if(flag==1){printf("Decending order");}
	else if(flag==-1&&var==1){printf("The array is not sorted");}
}
int main(){
	int a[5]={1,3,5,7,9};
	create(a,5);
	check(first);
	printf("hi\n");
	return 0;
}