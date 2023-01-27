#include <stdio.h>
#include <stdlib.h>

struct list{
int data;
struct list *next;
};


struct list* createlist(int n){

struct list* head;
struct list*  tail;

int first,d;
head=(struct list*)malloc(sizeof(struct list));
printf("Enter first number: ");
scanf("%d",&first);
head->data=first;
tail=head;


for(int i=0; i<n-1; i++){
printf("Enter number %d: ",i+2);
scanf("%d",&d);
tail->next=(struct list*)malloc(sizeof(struct list));
tail=tail->next;
d=tail->data;
}
tail->next=NULL;

return head;
}

void orderlist(struct list *head){
	struct list *temp;
	temp=head;
	while(temp!=NULL){
	if(temp->data < temp->next->data){
	printf("The input list is in ascending order.");	
	}
	if(temp->data > temp->next->data){
	printf("The input list is in descending order.");	
	}
	else{
	printf("The input list is not in sorted order.");
	}
	temp=temp->next;
	}	
}



int main(){

int n1;
struct list *l1;
printf("Enter n for list1: ");
scanf("%d",&n1);
printf("L1: \n");

l1=createlist(n1);
orderlist(l1);


return 0;
}



