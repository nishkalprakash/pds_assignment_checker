#include <stdio.h>
#include <stdlib.h>

struct node{
int data;
struct node *next;
}node;


struct node* createlist(int n){
struct node* head=(struct node*)malloc(sizeof(struct node));
struct node* ptr;

ptr=head;

int first,d,num;
printf("Enter the number in sorted order!!\n");
for(int i=0; i<n; i++){
printf("Enter number %d: ",i+1);
scanf("%d ",&num);
head->data=num;
ptr=(struct node*)malloc(sizeof(struct node));
ptr=ptr->next;
}
ptr->next = NULL;

return head;
}

struct node* print(struct node* list,int n){
struct node* head=(struct node*)malloc(sizeof(struct node));
struct node* ptr;

ptr=head;

for(int i=0; i<n; i++){
printf("%d",ptr->data);
}
}


int main(){
int n,m;
struct node *list;
printf("Enter n: ");
scanf("%d",&n);
list=createlist(n);
print(list,n);

printf("Enter m: ");
scanf("%d",&m);

return 0;
}

