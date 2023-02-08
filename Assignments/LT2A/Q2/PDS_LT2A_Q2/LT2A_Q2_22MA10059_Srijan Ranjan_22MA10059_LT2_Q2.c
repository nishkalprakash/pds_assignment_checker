/*
Section14
Roll No: 22MA10059
Name: Srijan Ranjan
Lab Test:2
Description: Take 2 Linked List and add both. Then remove the duplicate ones.
Program is able to add both the linked list but not able to remove the duplicate ones.
*/
#include<stdio.h>
#include<stdlib.h>
struct node{												//Structure of a node.
	int data;
	struct node* next;
}*first=NULL,*second=NULL,*third=NULL;
void create1(int a[],int n){									//Function to create a node.
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
void create2(int a[],int m){									//Function to create a node.
	struct node*t,*last;
	second=(struct node*)malloc(sizeof(struct node));
	second->data=a[0];
	second->next=NULL;
	last=second;
	for(int i=1;i<m;i++){
		t=(struct node*)malloc(sizeof(struct node));
		t->data=a[i];
		t->next=NULL;
		last->next=t;
		last=t;
	}
}
void add(struct node*p,struct node*q,int n,int m){				//Function to add 2 array.
	struct node*t,*last,*x;
	t=q;
	third=(struct node*)malloc(sizeof(struct node));
	third->data=p->data+q->data;
	third->next=NULL;
	last=third;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
	 		x=(struct node*)malloc(sizeof(struct node));
	 		x->data=t->data+p->data;
	 		x->next=NULL;
	 		last->next=x;
	 		last=x;
	 		t=t->next;
	 		
	 	}
	 	t=second;
	 	p=p->next;
	 }
	 third=third->next;

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
	}
}
void duplicate(struct node*t){						//Function to remove duplicate numbers;
  	struct node*x;
  	x=t;
  	while(t){
  		while(x){
  			if(t->data==x->data){
  				delete(third,t->data);
  			}
  			x=x->next;
  		}
  		x=third;
  		t=t->next;
  	}
}
void print(struct node*p){				//Function to print a linked list.
	while(p){
		printf("%d ",p->data);
		p=p->next;
	}
	printf("\n");
}
int main(){
	int n;
	scanf("%d",&n);
	int l1[n];
	for(int i=0;i<n;i++){
		scanf("%d",&l1[i]);
	}
	int m;
	scanf("%d",&m);
	int l2[m];
	for(int i=0;i<m;i++){
		scanf("%d",&l2[i]);
	}
	print(first);
	print(second);
	create1(l1,n);
	create2(l2,m);
	add(first,second,n,m);
	duplicate(third);
	print(third);
	return 0;
}