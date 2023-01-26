/*
Name:AMAN JUNEJA
ROLL NO : 22BT30002
SECTION :14
ASSIGNMENT : 10
QUESTION :	to enter customer records in a bank

*/

#include<stdio.h>
#include<stdlib.h>

typedef struct Customer{
	int acno;
	char *name;
	int bal;
	struct Customer* next;
}cs;

cs *createlist(char c){
	cs *head=NULL;
	cs *tail;
	// char x;

	if(1){
		head=(cs *)malloc(sizeof(cs));
		printf("enter acc no,name,balance : ");
		scanf("%d %s %d",&(head->acno),head->name,&(head->bal));
		tail=head;
		for(int i=1;;i++){
			
			
			fflush(stdin);
			printf("do you want to continue : (y/n) ");
			scanf("%c",&c);
			if(c=='n'){
				break;
			}
			tail->next=(cs *)malloc(sizeof(cs));
			tail=tail->next;
			printf("enter acc no,name,balance : ");
			scanf("%d %s %d",&(tail->acno),tail->name,&(tail->bal));
			
		}
		tail->next=NULL;
	}
	return head;
}

int main(){
	char c='y';
	cs *head=createlist(c);


	return 0;
}
