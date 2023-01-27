#include <stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node*next;
};

void check(struct sort*head);

int main(){
int x,arr[50];
printf("Enter the length of given array");
scanf("%d", &x);
for(int j=0; j<x; j++){
printf("Enter the elements of array");
for(int j=0;j<x;j++){
scanf("%d",&arr[j]);}
struct node *head, *temp=NULL;
for(int i=0;i<x;i++){
if(i==0){
head=(struct node*)malloc(sizeof(struct node));
temp=head;
}
else{if(i==x-1){
temp->next=NULL;
break;}
temp->next=(struct node*)malloc(sizeof(struct node));
temp=temp->next;
}
}
return 0;
}



