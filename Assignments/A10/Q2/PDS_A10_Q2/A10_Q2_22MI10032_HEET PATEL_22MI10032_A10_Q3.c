/*
Section 14
Roll No : 22MI10032
Name : HEET PATEL
Assignment No : 10
Description :  to check if linked list is sorted. 
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
int main(){
printf("Enter size of L:");
int n;
scanf("%d",&n);
//printf("Enter elements of L:");
struct node * ptr , *head;
ptr = createList(n);
//printlist(ptr);
head=ptr;
int flagA=0,flagD=0;
while(ptr->next != NULL){
if((ptr->num)>(ptr->next->num)){
flagA=1;
break;
}
ptr=ptr->next;
}
while (ptr->next != NULL){
if((ptr->num)<(ptr->next->num)){
flagD=1;
break;
}
ptr=ptr->next;
}
printf("\n");
if(flagA==0) {
printf("The input list L is in ascending order.\n");
}
else if(flagD==0) {
printf("The input list L is in descending order.\n");
}
else{
 printf("The input list L is not in sorted order.\n");
}
}
