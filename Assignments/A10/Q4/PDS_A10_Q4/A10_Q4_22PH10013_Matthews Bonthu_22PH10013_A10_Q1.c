// Name Bonthu Matthews
// Roll number:: 22PH100013
// Assignment 10 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct customer
{
	int acno;
	char n[50];
	int bal;
	struct customer* next;
}customer;
typedef customer* link;
link crnode(int val, char n[ ], int bal)
{
 link new2;
 new2=(link)malloc(sizeof(customer));
 new2->acno=val;
 strcpy(new2->n,n);
 new2->bal=bal;
 new2->next=NULL;
 return new2;
}
link inser(int ac, char n[ ], int val, link ptr)
{
	link newp,prev,first;
	newp=crnode(ac,n,val);
	if(ptr->acno==-1) return newp;
	if(ptr==NULL||val>=ptr->bal)
	{
		newp->next=ptr;
		return newp;
	}
	else 
	{
		first=ptr;
		prev=ptr;
		ptr=ptr->next;
		while(ptr!=NULL&&val<ptr->bal)
		{
			prev=ptr;
			ptr=ptr->next;
		}
		prev->next=newp;
		newp->next=ptr;
		return first;
	}
}
void printls(link head)
{
   link temp;
   temp=head;
   while(temp!=NULL)
   {
   	if(temp->next==NULL)
   	{
   		printf("Account number: %d \nName:: %s \nBalance: %d\n ",temp->acno,temp->n,temp->bal);
   	}
   	else 
   	{
   		printf("Account number: %d \nName:: %s \nBalance: %d\n",temp->acno,temp->n,temp->bal);
   	}
   	temp=temp->next;
   }
}
int main ( )
{
	link head;
	head=crnode(-1,"N",-1);
	while(1)
	{
		printf("Menu \nPress any key to proceed\n enter e to break ");
		char ch;
		scanf("%c",&ch);
		if(ch=='e') break;
		int an,bl;
		char n[50];
		printf("enter the account number ");
	   printf("enter name ");
		scanf("%d ",&an);
		scanf("%[^\n]",n);
		printf("enter balance ");
		scanf("%d",&bl);
		getchar( );
		head=inser(an,n,bl,head);
	}
	printls(head);
}