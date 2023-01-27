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
link crnode(int val){
	link new;
	new=(link)malloc(sizeof(list));
	new->data=val;
	new->next=NULL;
	return new;
}
link createlist(int val, link head, link *prev){//fn to create list
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
int main(){
	printf("Enter number\nenter -1 to end\n");
	link head,tail,temp1,temp2;
	int f1=0;
	int max=-1, min=10000000;
	head=NULL;
	tail=NULL;
	while(1){
		int n; scanf("%d", &n);
		if(n==-1)break;
		if(n<min) min=n;
		if(n>max) max=n;
		head=createlist(n,head,&tail);
	}
	temp1=head;
	while(temp1!=NULL){
		temp2=temp1->next;
		while(temp2!=NULL){
			if(temp1->data==temp2->data) {printf("%d  ", temp1->data);f1=1;}
			temp2=temp2->next;
		}
		temp1=temp1->next;
	}
	if(f1) printf("Are duplicate numbers\n");
	else printf("The input list doesnt contain any duplicate\n");
	printf("Maximim number is %d\n", max);
	printf("Minimim number is %d\n", min);
	return 0;
}