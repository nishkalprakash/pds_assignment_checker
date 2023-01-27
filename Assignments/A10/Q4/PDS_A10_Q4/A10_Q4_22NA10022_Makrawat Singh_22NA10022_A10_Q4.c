/*
 Section 14
 Roll No :22NA10022
 Name : Makrawat Singh
 Assignment No : 10
 Description :read records till user wants to continue then insert new record and print in descending order
 */
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define ll long long

typedef struct customer{
	int acc;
	char n[50];
	int bal;
	struct customer *next;
}customer;
typedef customer *link;
link crnode(int val,char n[],int bal){
	link newp;
	newp=(link)malloc(sizeof(customer));
	
	strcpy(newp->n,n);
	newp->bal=bal;
	newp->acc=val;
	newp->next=NULL;
	return newp;
}

link inser(int ac,char n[],int val,link ptr){
	link newp,prev,first;
	newp=crnode(ac,n,val);
	if(ptr->acc==-1)return newp;
	if(ptr==NULL||val<=ptr->bal){
		newp->next=ptr;
		return newp;
	}
	else{
		first=ptr;
		prev=ptr;
		ptr=ptr->next;
		while(ptr!=NULL&&val>ptr->bal){
			prev=ptr;ptr=ptr->next;
		}
		prev->next=newp;
		newp->next=ptr;
		return first;
	}
}
	

void printls(link head){
	if(head->next==NULL){
		printf("Acc NO. %d\n , Name=%s\n ,Balance=%d\n",head->acc,head->n,head->bal );

	}
	printls(head->next);
	printf("Acc NO. %d\n, Name=%s\n, Balance=%d\n",head->acc,head->n,head->bal);

}

int main(){
	link head;
	head=crnode(-1,"N",-1);
	while(1){
		printf("Menu\n Press any key to enter \n press e to end the loop");
		char ch;
		scanf("%c",&ch);
		if(ch=='e') break;
		int an,bl;
		char n[50];
		scanf("%d",&an);
		scanf("%[^\n]",n);
		scanf("%d",&bl);
		getchar();
		head=inser(an,n,bl,head);

	}	
	printls(head);

}


