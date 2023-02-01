
/*
Section 14
Roll no - 22IE10007
Name - Anisha Banerjee
Assignment 11
Program to insert in a list
*/
#include<stdio.h>
#include<stdlib.h>
struct list
{
	int data;
	struct list* next;
};
typedef struct list list;
list* createlist(int n)
{
	int i;
   printf("Enter the elements of the list\n");
   list *head,*ptr;
   head=(list*)malloc(sizeof(list));
   ptr=head;
   for(i=0;i<n-1;i++)
   {
   	scanf("%d",&ptr->data);
   	ptr->next=(list*)malloc(sizeof(list));
   	ptr=ptr->next;
   }
   scanf("%d",&ptr->data);
   ptr->next=NULL;
   return head;
}
int checkval(list* I,int val)
  {
   int flag=0;
   while(I!=NULL)
   {
      if(I->data==val)
         flag=1;
      I=I->next;
   }
   return flag;
  }
void printlist(list* l)
{
   if(l==NULL)
   {
		printf("\nEMPTY LIST\n");
   }
	
	while(l!=NULL)
	{
		printf("%d ",l->data);
		l=l->next;
	}
	printf("\n");
}
list* delete(int val,list* I)
{
   list *ptr=I,*n;
   while(ptr!=NULL && ptr->data==val)
      ptr=ptr->next;
   I=ptr;
   
   while(ptr!=NULL)
   {
      n=ptr->next;
      if(n!=NULL && n->data==val)
         ptr->next=n->next;
      ptr=ptr->next;
   }
   return I;
}
int main()
{
   int n,p,c;
   list* l,*newI;
   printf("Enter the number of elements\n");
   scanf("%d",&n);
   l=createlist(n);
   printf("Enter the value to be deleted\n");
   scanf("%d",&p);
   c=checkval(l,p);
   if(c==0)
      printf("%d does not exist",p);
   else
   {
      newI=delete(p,l);
      printlist(newI);
   }
   return 0;
}