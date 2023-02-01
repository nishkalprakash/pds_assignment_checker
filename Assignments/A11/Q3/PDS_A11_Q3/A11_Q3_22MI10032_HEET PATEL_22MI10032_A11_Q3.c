/*
Section 14
Roll No : 22MI10032
Name : HEET PATEL
Assignment No : 11
Description :  to insert a node in sorted list
*/
#include<stdio.h>
#include<stdlib.h>
struct node {
int num;
struct node *next;
};
struct node*createList(int n){
struct node *mylist;
printf("Enter elements of this list:\n");
mylist=(struct node*)malloc(n*sizeof(struct node));
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

int main(){
printf("Enter size of L:");
int n;
scanf("%d",&n);
struct node *ptr,*head;
ptr=createList(n);
head=ptr;

printf("Enter number you want to insert:");
int m;
scanf("%d",&m);
struct node*previous;
previous=head;
printlist(ptr);
while(head!=NULL){

}
head=head->next;

}
