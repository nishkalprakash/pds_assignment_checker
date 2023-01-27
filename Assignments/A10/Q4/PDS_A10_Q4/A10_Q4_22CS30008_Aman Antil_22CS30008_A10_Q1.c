/*
Section 14
Roll no : 22CS30008
Name : Aman
Assignment no : 10
Description : Program to print customer data in descending order of bank balance
*/           
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct customer{//structure for account det
	int acno;
	char n[50];
	int bal;
	struct customer* next;
}customer;                                  
typedef customer* link;
link crnode(int val, char n[], int bal){ // fn to create new node
	link newp;
	newp=(link)malloc(sizeof(customer));
	newp->acno=val;
	strcpy(newp->n,n);
	newp->bal=bal;
	newp->next=NULL;
	return newp;
}
link inser(int ac, char n[], int val, link ptr){// fn to insert in ascending order
	link newp,prev,first;
	newp=crnode(ac,n,val);
	if(ptr->acno==-1) return newp;
	if(ptr==NULL||val<=ptr->bal){
		newp->next=ptr;
		return newp;
	}
	else{
		first=ptr;
		prev=ptr;
		ptr=ptr->next;
		while(ptr!=NULL&&val>ptr->bal){
			prev=ptr; ptr=ptr->next;
		}
		prev->next=newp;
		newp->next=ptr;
		return first;
	}
}
void printls(link head){// fn toprint in reverse order
	if(head->next==NULL){
		printf("Ac No.: %d \nName: %s \nBalance: %d \n", head->acno, head->n, head->bal);
		return;
	}
	printls(head->next);
	printf("Ac No.: %d \nName: %s \nBalance: %d \n", head->acno, head->n, head->bal);
	return;
}


int main(){
	link head;
	head=crnode(-1,"N",-1);
	while(1){
		printf("Menu \nPress any key to enter record \nPress e to end\n");
		char ch;
		scanf("%c", &ch);
		if(ch=='e') break;
		int an,bl;
		char n[50];
		printf("Enter acc. no. : ");
		scanf("%d",&an);
		printf("Enter name : ");
		getchar();
		scanf("%[^\n]", n);
		getchar();
		printf("Enter balance : ");
		scanf("%d", &bl);
		getchar();
		head=inser(an,n,bl,head);
	}
	printls(head);
}