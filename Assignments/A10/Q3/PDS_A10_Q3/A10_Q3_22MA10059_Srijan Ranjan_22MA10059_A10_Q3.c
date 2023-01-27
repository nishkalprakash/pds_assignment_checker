/*
Section14
Roll No: 22MA10059
Name: Srijan Ranjan
Assignment no:9
Description: This program takes input of 2 linked lists and returns any duplicate element and the min and max element.
*/
#include<stdio.h>
#include<stdlib.h>
struct node{											//Structure of a node.
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
 int min(struct node*p){									//Function to calculate min.
 	int x=99999;
 	while(p){
 		if(p->data<x){
 			x=p->data;
 		}
		p=p->next;
 	}
	return x;
}
 int max(struct node*p){								//Function to calculate max
 	int x=-99999;
 	while(p){
 		if(p->data>x){
 			x=p->data;
 		}
 		p=p->next;
 	}
 	return x;
 }
 void duplicate(struct node*p,int n){											//Function to print the duplicate numbers.
 	int flag=0;
 	while(p){
 		int count=0;
 		struct node*t;
 		t=first;
 		for(int i=0;i<n;i++){
 			if(p->data==t->data){
 				count++;
 			}
 			if(count>1){
 				printf("duplicate number : %d\n",p->data);
 				flag=1;
 			}
 			t=t->next;
 		}
 		p=p->next;
 	}
 	if(flag==0){printf("No duplicate numbers found");}
 }
int main(){
	int a[12]={1,2,3,9,7,7,6,5,4,3,2,1};
	create(a,12);
	printf("The minimum number : %d \n",min(first));
	printf("The maximum number : %d \n",max(first));
	duplicate(first,12);
	return 0;
}