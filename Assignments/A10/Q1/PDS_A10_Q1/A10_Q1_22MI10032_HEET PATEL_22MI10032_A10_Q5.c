/*
Section 14
Roll No : 22MI10032
Name : HEET PATEL
Assignment No : 10
Description :  to check if linked list contains duplicate items and max and min. 
*/
#include<stdio.h>
#include<stdlib.h>
struct node {
int num;
struct node *next;
};
struct node*createList(int n){
struct node *mylist;
mylist=(struct node*)malloc(n*sizeof(struct node));
printf("Enter elements of this list:\n");
for(int i = 0 ; i< n;i++){
scanf("%d",&mylist[i].num);
mylist[i].next=&mylist[i+1];
}
mylist[n-1].next=NULL;
return mylist;
}
void printlist(struct node *I){
printf("{");
while(I != NULL){
printf("%d",I->num);
I=I->next;
printf(",");
}
printf("}");
}
void even(struct node *I,int n){
printf("{");
if(n%2!=0){
while(I->next!= NULL){
printf("%d",I->next->num);
I=I->next->next;
printf(",");
}
printf("}");
}
else{

while(I!= NULL){
printf("%d",I->next->num);
I=I->next->next;
printf(",");
}
printf("}");

}}
int main(){
printf("Enter size of L:");
int n;
scanf("%d",&n);
struct node *ptr,*head;
ptr=createList(n);
head=ptr;
printf("Even position nodes:");
even(ptr,n);
}
