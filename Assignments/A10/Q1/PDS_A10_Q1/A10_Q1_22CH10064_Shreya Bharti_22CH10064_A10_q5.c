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





int main(){

int n;
A = (struct node*)malloc(n*sizeof(struct node));
printf("Enter n: ");
scanf("%d",&n);

for(int i=0; i<n; i++){
scanf("%d",&A[i]);
}


return 0;
}
