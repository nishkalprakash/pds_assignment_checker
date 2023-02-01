/*
Section14
Roll No: 22MA10059
Name: Srijan Ranjan
Assignment no:11
Description: This program takes input of an array to create a linked list and deletes te inpuit element.
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
void delete(struct node*p,int m){							//Function to delete a node.
	struct node*q;
	if(p->data==m){											//Header Case.
		q=p;
		p=p->next;
		first=p;
		free(q);
	}
	else{
		while(p->data!=m){
			q=p;
			p=p->next;
		}
		if(p->data==m){
			q->next=p->next;
			free(p);
		}
		else{
			printf("Doesnt Exist");
		}
	}
}
int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	create(a,n);
	int m;
	scanf("%d",&m);
	delete(first,m);
	print(first);
	return 0;
}