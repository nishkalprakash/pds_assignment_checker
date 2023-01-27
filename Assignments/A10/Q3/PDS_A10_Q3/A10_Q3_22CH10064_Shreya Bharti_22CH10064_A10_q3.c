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
tail->data=d;
}
tail->next=NULL;

return head;
}

//*********************************

void duplicate(struct list *head){
struct list *temp, *ptr;
temp=head;
ptr=head->next;
while(temp->next != NULL){
while(ptr->next != NULL){
if(temp->data == ptr->data){
printf("%d", temp->data);
ptr=ptr->next;
}
}
temp=temp->next;
}
}

//*********************************

int main(){

int n1;
struct list *l1;
printf("Enter n for list1: ");
scanf("%d",&n1);
printf("L1: \n");

l1=createlist(n1);
duplicate(l1);


return 0;
}

