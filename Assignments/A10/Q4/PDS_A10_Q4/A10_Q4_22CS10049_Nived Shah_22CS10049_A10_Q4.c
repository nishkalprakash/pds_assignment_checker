/*
Section 14
Name: Nived Shah
Roll No: 22CS10049
Assignment No. : 10
Description: Deal with records of Customer
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Customer{
	int ac_no;
	char name[25];
	int balance;
	struct Customer *next;
}customer;
typedef struct Customer ELEMENT;

int main(){
	ELEMENT *head=NULL;
	ELEMENT *tail;
	int i=1;
	head=malloc(sizeof(customer));
	printf("(to stop entering, enter 0 in all fields)");
	printf("\nAccount number = ");
	scanf("%d", &head->ac_no);
	printf("Name = ");
	scanf("%s", head->name);
	printf("Balance = ");
	scanf("%d", &head->balance);
	tail=head;
	while(i!=0){
		tail->next=malloc(sizeof(customer));
		tail=tail->next;
		printf("Account number = ");
		scanf("%d", &tail->ac_no);
		printf("Name = ");
		scanf("%s", tail->name);
		printf("Balance = ");
		scanf("%d", &tail->balance);
		if(tail->ac_no ==0)
			i=0;
	}
	tail->next=NULL;

	ELEMENT *temp, *temp3; int a; int b; char n[25]; 
	temp3=head;
	for(; temp3!=NULL; temp3=temp3->next){
		temp=head;
		for(; temp->next!=NULL; temp=temp->next){
			if((temp->balance) < (temp->next->balance)){
				a=temp->ac_no;
				temp->ac_no=temp->next->ac_no;
				temp->next->ac_no=a;
				b=temp->balance;
				temp->balance=temp->next->balance;
				temp->next->balance=b;
				strcpy(n,temp->name);
				strcpy(temp->name,temp->next->name);
				strcpy(temp->next->name,n);
			}
		}
	}
	printf("(row with all fields 0 is just test condition and does not represent real records)\n");
	printf("Records with decreasing order of balance: \n");
	temp=head;
	for(; temp!=NULL; temp=temp->next){
		printf("Ac. No= %d ", temp->ac_no);
		printf("Name= %s ", temp->name);
		printf("Balance= %d\n", temp->balance);
	}

	return 0;
}