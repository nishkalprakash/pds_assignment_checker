#include <stdio.h>
#include <stdlib.h>

struct list{
int data;
struct list *next;
};


struct list* createlist(int n){

struct list* head=NULL;
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

void printlist(struct list *head){
	struct list *temp;
	temp=head;
	while(temp!=NULL){
	printf("%d ",temp->data);
	temp=temp->next;	
	}
}


int main(){

int n1,n2;
printf("Enter n for list1: ");
scanf("%d",&n1);
printf("L1: \n");

struct list *l1, *l2, *un;
l1=createlist(n1);
printf("Enter n for list2: ");
scanf("%d",&n2);
printf("L2: \n");
l2=createlist(n2);
printlist(l1);
merge(l1,l2,&un);

return 0;
}

merge(struct list *l1, struct list *l2, struct list **s){

struct node *z;

z=NULL;


if(l1==NULL && l2==NULL)
	return;

while(l1!=NULL && l2!=NULL){
if(*s==NULL){
*s=malloc(sizeof(struct list));
z=*s;
}
else{
z->next=malloc(sizeof(struct list));
z=z->next;
}
}


if(l1->data > l2->data){
z->data=l2->data;
l2=l2->next;
}
else{
	if(l1->data < l2->data){
	z->data=l1->data;
	l1=l1->next;
	}
	if(l1->data == l2->data){
	z->data=l1->data;
	l1=l1->next;
	l2=l2->next;
	}
}

while(l1!=NULL){
z->next=malloc(sizeof(struct list));
z=z->next;
z->data=l1->data;
l1=l1->next;
}

while(l2!=NULL){
z->next=malloc(sizeof(struct list));
z=z->next;
z->data=l2->data;
l2=l2->next;
}
z->next=NULL;
}







