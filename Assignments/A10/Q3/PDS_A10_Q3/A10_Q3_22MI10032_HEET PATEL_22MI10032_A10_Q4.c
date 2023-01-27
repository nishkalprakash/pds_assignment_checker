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
int main(){
printf("Enter size of L:");
int n;
scanf("%d",&n);
//printf("Enter elements of L:");
struct node * ptr , *head,*head1,*ptr1;
ptr = createList(n);
//printlist(ptr);
head = ptr;
head1=ptr;
ptr1=ptr;
int max = ptr->num;
int min = ptr->num;
int arr[n];
int k = 0;
while(head!=NULL){
while(ptr->next!=NULL){
if(head->num==ptr->next->num){
arr[k]=head->num;
k++;
}
ptr=ptr->next;
}
head=head->next;
ptr=head;
}
int i , j  ;

if(k!=0){
printf("The input list contains duplicate numbers of :");
for(i=0;i<k;i++){
for(j=0;j<i;j++){
if(arr[i]==arr[j]) break;
}
if(i==j) printf("%d ,",arr[i]);
}
}
else printf("The input list does not contain any duplicate number.\n");
printf("\n");
while(ptr1!=NULL){
if((ptr1->num)>=max){
max=ptr1->num;
}
ptr1=ptr1->next;
}
while(head1!=NULL){
if((head1->num)<=min){
min=head1->num;
}
head1=head1->next;
}
printf("Minimum number is : %d\n",min);
printf("Maximum number is : %d\n",max);
}
