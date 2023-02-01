/*
Section14
Roll No: 22MA10059
Name: Srijan Ranjan
Assignment no:11
Description: This program takes input of a linked list and inserts the given number in the sorted linkd list.
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
void print(struct node*p){									//Function to print a node.
	while(p){
		printf("%d ",p->data);
		p=p->next;
	}
	printf("\n");
}
void insert(struct node *p,int x){					//Function to insert a node.
	struct node*t,*q;
	t=(struct node*)malloc(sizeof(struct node));
	t->data=x;
	t->next=NULL;
	if(x<p->data){									//Case of the header node.
		t->next=p;
		first=t;
	}
	else{
		while(x>p->data && p){
			q=p;
			p=p->next;
		}
		q->next=t;
		t->next=p;
	}
}
int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<5;i++){
		scanf("%d",&a[i]);
	}
	create(a,5);
	int m;
	scanf("%d",&m);
	insert(first,m);
	print(first);
	return 0;
}