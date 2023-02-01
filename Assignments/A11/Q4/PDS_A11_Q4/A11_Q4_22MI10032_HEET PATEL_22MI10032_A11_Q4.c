/*
Section 14
Roll No : 22MI10032
Name : HEET PATEL
Assignment No : 11
Description :  to delete a node 
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

/*if(*head==NULL) printf("List is already empty");
else if (pos==1){
*head=current->next;
free(current);
current=NULL;
}else {
while(pos!=1){
previous = current;
current=current->next;
pos--;
}
previous->next=current->next;
free(current);
current=NULL;
}
}*/

int main(){
printf("Enter size of L:");
int n;
scanf("%d",&n);
struct node *ptr,*head;
ptr=createList(n);
head=ptr;
int m;
printf("Enter m:");
scanf("%d",&m);
struct node*current1=head;
struct node*current2=head;
struct node*previous =head;
while(head != NULL){
if(head->num==m){

current1=current2->next;
previous->next=current1->next;
free(current2);
current2=NULL;
}
head=head->next;

}
printlist(ptr);
}
