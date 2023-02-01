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
list* insert (int value, list* ptr)
    { 
    	list* newp, *prev, *first;
        newp=(list*)malloc(sizeof(list));
        newp->data=value;
        if (ptr == NULL || value <= ptr -> data)
        {                                              // insert as new first node
            newp -> next = ptr;
            return newp; // return pointer to first node
        }
        else 
        { // insert in the middle (not first element)
           first = ptr; // remember start
           prev = ptr;
           ptr = ptr-> next;
           while (ptr != NULL && value > ptr -> data)
            { 
            	prev = ptr;  
            	ptr = ptr -> next; 
                prev -> next = newp; // link in
                newp -> next = ptr; //new node
                return first;
            }
        }
    }    
int main()
{
	int n,p;
	list* l,*newI;
	printf("Enter the number of elements\n");
	scanf("%d",&n);
	l=createlist(n);
	printf("Enter the value to be inserted\n");
	scanf("%d",&p);
	newI=insert(p,l);
	printlist(newI);
	
	return 0;
}