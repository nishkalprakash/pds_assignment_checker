#include <stdio.h>
#include <stdlib.h>
/*
Section 14
Roll No : 22NA10003
Name : Anish Kerketta
Assignment No : TEST 2-Q2
Description:Add two lists*/
typedef struct SET{						//define structure
	int data;
	struct SET *next;
}SET;


void printlist(SET* n)						//printing the list
{
while(n != NULL)
{
//if(n->data!=0)
printf("%d ",n->data);
n=n->next;
}
}

void append(SET** head,int new_data)				//adding data to lists
{

		SET* new_node = (SET*)malloc(sizeof(SET));

		SET* last= *head;

		new_node->data=new_data;	
		new_node->next = NULL;

		if(*head==NULL){
		*head=new_node;
		return;}
		
	while(last->next != NULL)
		{
		last = last->next;}
		

		last->next=new_node;
	
}

void add(SET* L1,SET*L2){					//add the elements of the lists
	SET* L=NULL;
	SET* temp=NULL;
	temp=L2;
	L= (SET*)malloc(sizeof(SET));
	printf("L={");
	while(L1->next!=NULL){
	while(L2->next!=NULL){
	L->data=L1->data+L2->data;
	printf("%d ",L->data);
	L2=L2->next;}
	L2=temp;
	L1=L1->next;}
	printf("}\n");
}

void main()
{
	int m,n;
	int i,j,ele;
	SET* L1=NULL;
	SET* L2=NULL;	
		printf("#### L1 ####\n");
		printf("Enter N:\n");
		
	scanf("%d",&n);					//read
		printf("Enter %d numbers:",n);
		for(i=0;i<n;i++){
			scanf("%d",&ele);
			append(&L1,ele);}
		printf("#### L2 ####\n");
		printf("Enter N:");
		
	scanf("%d",&m);					//read
		printf("Enter %d numbers:",m);
			for(i=0;i<m;i++){
			scanf("%d",&ele);
			append(&L2,ele);}
	printf("L1={");					//printing format
	printlist(L1);
	printf("}\n");
	printf("+\n");
	printf("L2={");
	printlist(L2);
	printf("}");
	printf("\n=\n");
	append(&L1,0);					//to make the next element non-NULL for adding
	append(&L2,0);
	add(L1,L2);
	
}


