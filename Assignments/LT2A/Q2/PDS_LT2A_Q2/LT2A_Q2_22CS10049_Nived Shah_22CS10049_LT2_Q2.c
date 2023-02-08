/*
Section 14
Name: Nived Shah
Roll No: 22CS10049
Lab Test 2
Description: Doing Set addition on 2 lists
*/
#include <stdio.h>
#include <stdlib.h>

struct node{
	int data;
	struct node *next;
};
typedef struct node SET;

SET* Set_addition(SET *h1, SET *h2){
	SET *temp1, *temp2;
	temp1=h1;
	temp2=h2;
	SET *Lhead=NULL, *Ltail;
	Lhead=(SET *)malloc(sizeof(SET));
	Lhead->data=(temp1->data + temp2->data);
	Ltail=Lhead;
	for(int i=0; temp1!=NULL; temp1=temp1->next){
		for(int j=0; temp2!=NULL; temp2=temp2->next){
			if(i!=0 || j!=0){
				Ltail->next=(SET *)malloc(sizeof(SET));
				Ltail=Ltail->next;
				Ltail->data=(temp1->data + temp2->data);
			}
			j++;
		}
		i++;
	}
	Ltail->next=NULL;
	return(Lhead);
}

int main(){
	int n1, n2, t1, t2;
	SET *head1=NULL, *tail1, *head2=NULL, *tail2;
	head1=(SET *)malloc(sizeof(SET));
	printf("#### L1 ####\n");
	printf("Enter N: ");
	scanf("%d", &n1);
	printf("Enter %d Numbers: ", n1);
	scanf("%d", &t1);
	head1->data=t1;
	tail1=head1;
	int i=1;
	while(i<n1){
		tail1->next=(SET *)malloc(sizeof(SET));
		tail1=tail1->next;
		scanf("%d", &(tail1->data));
		i++;
	}
	tail1->next=NULL;

	head2=(SET *)malloc(sizeof(SET));
	printf("#### L2 ####\n");
	printf("Enter N: ");
	scanf("%d", &n2);
	printf("Enter %d Numbers: ", n2);
	scanf("%d", &t2);
	head2->data=t2;
	tail2=head2;
	i=1;
	while(i<n2){
		tail2->next=(SET *)malloc(sizeof(SET));
		tail2=tail2->next;
		scanf("%d", &(tail2->data));
		i++;
	}
	tail2->next=NULL;

	printf("L1 = ");
	SET *temp1;
	temp1=head1;
	while(temp1!=NULL){
		printf("%d ", temp1->data);
		temp1=temp1->next;
	}
	printf("\n+\n");

	printf("L2 = ");
	SET *temp2;
	temp2=head2;
	while(temp2!=NULL){
		printf("%d ", temp2->data);
		temp2=temp2->next;
	}
	printf("\nL = ");

	SET *add;
	add=Set_addition(head1, head2);
	SET *temp;
	temp=add;
	while(temp!=NULL){
		printf("%d ", temp->data);
		temp=temp->next;
	}
	return 0;
}