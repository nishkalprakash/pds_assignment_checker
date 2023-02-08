/*
Section 14
Roll no : 22CS30008
Name : Aman
Lab test 2
Description : Program to find difference of character set;
*/   
#include <stdio.h>
#include <stdlib.h>

typedef struct SET{
	char data;
	struct SET* next;
}SET;
//function to push a value in linked list
SET* psh(SET *head, char i){
	if(head==NULL){
		head=(SET*)malloc(sizeof(SET));
		head->data=i;
		head->next=NULL;
		return head;
	}
	SET* ptr=head;
	while(ptr->next!=NULL) ptr=ptr->next;
	SET* new=(SET*)malloc(sizeof(SET));
	new->data=i;
	new->next=NULL;
	ptr->next=new;
	return head;
}
//function to print
void prnt(SET* head){
	if(head==NULL) {printf("{}");return;} //condition for null set
	SET* new=head;
	printf("{");
	while(new->next!=NULL){
		printf("%c, ", new->data);
		new=new->next;
	}
	printf("%c}\n", new->data); //last element is printed separately for correct formatting
}


int main(){
	char s1[1000];
	char s2[1000];
	//initialixing with null
	SET* l1=NULL;
	SET* l2=NULL;
	SET* l=NULL;
	printf("#### L1 ####\nEnter string : ");
	scanf("%s", s1);
	printf("#### L2 ####\nEnter string : ");
	scanf("%s", s2);
	for(int i=0; s1[i]!='\0'; i++){
		int fl=1;
		for(int j=0; j<i; j++){
			if(s1[j]==s1[i]) {fl=0;s1[i]='`';break;} //if a duplicate is encountered then it is not pushed in set and its value is changed to some special character
		}
		if(fl) l1=psh(l1,s1[i]);
	}
	for(int i=0; s2[i]!='\0'; i++){
		int fl=1;
		for(int j=0; j<i; j++){
			if(s2[j]==s2[i]) {fl=0;break;}
		}
		if(fl) l2=psh(l2,s2[i]);
	}
	for(int i=0;s1[i]!='\0';i++){
		int fl=1;
		for(int j=0;s2[j]!='\0'; j++){
			if(s1[i]==s2[j]){fl=0; break;}
		}
		if(fl&&s1[i]!='`') l=psh(l,s1[i]); //push element if not found in s2 and not duplicate in s1
	}
	printf("L1 = ");
	prnt(l1);
	printf(" - \n");
	printf("L2 = ");
	prnt(l2);
	printf(" = \n");
	printf("L = ");
	prnt(l);
}