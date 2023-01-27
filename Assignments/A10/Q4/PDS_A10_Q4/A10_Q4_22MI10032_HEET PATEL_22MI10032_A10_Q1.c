/*
Section 14
Roll No : 22MI10032
Name : HEET PATEL
Assignment No : 10
Description :  to store customer data
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct customer{
int ac;
char name[20];
int balance;
struct customer*link;
};
void display(struct customer*head){
if(head==NULL){
printf("List is empty");}
struct customer*ptr = NULL;
ptr=head;
printf("\n");
do{
printf("Account:%d\tname:%s\tbalance:%d\n",ptr->ac,ptr->name,ptr->balance);
ptr=ptr->link;
}while(ptr!=NULL);
printf("\n");

}
struct customer* insertac(struct customer*r,int ac,char name[],int balance){
struct customer *p,*q,*new;
new=(struct customer*)malloc(sizeof(struct customer));
new->ac=ac;
new->balance=balance;
for(int i = 0 ; i<strlen(name);i++){
new->name[i]=name[i];
new->name[i+1]='\0';

}
new->link=NULL;
p=r;
q=p;
while(p!=NULL){
if(p->ac >= ac){
if(p==r){
new->link=r;
return new;
}
new->link=p;
q->link=new;
return r;
}
q=p;
p=p->link;
}
if(r==NULL) return new;
else q->link=new;
return r;
}
int main(){
char ans='y';
int n;
struct customer*head;
head=NULL;
while(ans=='y'||ans=='Y'){
int ac;char name[20];int balance;
printf("Enter account number: ");
scanf("%d",&ac);
printf("Enter name:");
scanf("%s",name);
printf("Enter balance: ");
scanf("%d",&balance);
head=insertac(head,ac,name,balance);
printf("Do you want to continue if yes type 'y' if no type 'n':\n");
scanf("%c",&ans);
}
printf("Do you want to enter a new record:");
scanf("%c",&ans);
if(ans=='y'){
int ac;char name[20];int balance;
printf("Enter account number: ");
scanf("%d",&ac);
printf("Enter name:");
scanf("%s",name);
printf("Enter balance: ");
scanf("%d",&balance);
head=insertac(head,ac,name,balance);
printf("Do you want to continue if yes type 'y' if no type 'n':");
scanf("%c",&ans);
head=insertac(head,ac,name,balance);
}
display(head);
}
