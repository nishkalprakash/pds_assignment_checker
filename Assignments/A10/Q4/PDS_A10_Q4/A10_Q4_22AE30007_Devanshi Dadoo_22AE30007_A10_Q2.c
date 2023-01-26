/*
section 14
roll no.: 22AE30007
name: Devanshi Dadoo
Assigment 10
desciption: 
*/

#include<stdio.h>  
#include<string.h>  
#include<stdlib.h>

struct customer 
{
 int account;
 char name[20];
 float balance;
 struct customer *link;
};

void display(struct customer *head);
struct customer * incert_asc(struct customer*r, int account, char name[], float balance);

int main()
{
 char ans='y';
int n;
struct customer *head;
head=NULL;
while(ans=='y'|| ans=='Y')
{
 int account; char name[]; float balance;
 
 printf("Enter account number: ");
 scanf("%d", &account);
 printf("Enter first name: ");
 scanf("%s", &name);
 printf("Enter balance: ");
 scanf("%f", &balance);
 head=insert_asc(head, account, name, balance);
 printf("do you wish to continue yes(y) or no(n)? ");
 scanf("%c", &ans);
 }
 printf("do you want to enter a new record(y/n)");
 scanf("%c", &ans);
 if(ans=='y')
 {
  int account; char name[]; float balance;
 
 printf("Enter account number: ");
 scanf("%d", &account);
 printf("Enter first name: ");
 scanf("%s", &name);
 printf("Enter balance: ");
 scanf("%f", &balance);
 head=insert_asc(head, account, name, balance);
} 
 display(head);
 return 0;
}
void display (struct customer *head)
{
 if(head==NULL)
 {
  printf("Empty list"); 
 }
 
struct customer *ptr=NULL;
ptr=head;
printf("\n");
do
{
 printf("account:%d\t name:%s\t balance: %0.3f\n", ptr->account, ptr->name, ptr->balance);

ptr=ptr->link;
}
while(ptr !=NULL)
printf("\n");
}

struct customer *insert_asc(struct customer *r, int account, char name[], float balace)
{
 struct customer *p, *q, *new;
 new=(struct customer *)malloc(sizeof(struct customer));
 new->account; new->balance;
 for(int i=0; i<strlen(name); i++);
{
 new->name[i]=name[i];
 new->name[i+1]='\0';
}
new->link=NULL;
p=r; q=p;
while(p!=NULL)
{
 if(p->account >=account)
{
 if(p==r)
 {
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

  
  
 
