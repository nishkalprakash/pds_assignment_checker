#include <stdio.h>
#include<string.h>
#include<stdlib.h>
#define ll long long int
typedef struct node {
	int acc;
	char name[50];
	int bal;
	struct node *next;

}link;
link *head;
link *ptr ;
int k,acc,bal; char name[50];
void read(int acc,char name[],int bal){                                       // creating a function to take the input as element 
	link *temp;
	temp = (link*)malloc (sizeof(struct node));
	temp->acc =acc;
	for (int i=0;i<strlen(name);i++){
		temp->name[i] = name[i];
	}
	
	temp->bal = bal;
	temp->next = NULL;

	ptr->next = temp;
	ptr = temp;

}
void traverse(link *ptr){                    // traversing the list 
	
	while (ptr!=NULL){
		printf("Acc No. = %d\n",ptr->acc);
		printf("Name : ");
		for (int i=0;i<strlen(name);i++){
			printf("%c",ptr->name[i]);
		}
		printf("\n");
		printf("Balance = %d\n",ptr->bal);
		ptr = ptr->next;
	}
	printf("\n");
	
}

int main() {
	
	scanf("%d",&acc);                                     
	scanf("%s",name);
	scanf("%d",&bal);
	head = (link*)malloc (sizeof(struct node));
	head->acc =acc;                                     // creating a header 
	for (int i=0;i<strlen(name);i++){ 
		head->name[i] = name[i];
	}
	head->bal = bal;
	head->next = NULL;
	printf(" Type 1 if you want to enter more customer data - ");
	scanf("%d",&k);
	ptr = head ; 
	while (k==1){                                                
		scanf("%d",&acc);
		scanf("%s",name);
		scanf("%d",&bal);
		                // taking element of list 
		read(acc,name,bal);
		
		printf(" Type 1 if you want to enter more customer data - ");
		scanf("%d",&k);
	} 
	ptr = head;  
	traverse(ptr);                           // to print the element 
	
	
	
	 
	
}	