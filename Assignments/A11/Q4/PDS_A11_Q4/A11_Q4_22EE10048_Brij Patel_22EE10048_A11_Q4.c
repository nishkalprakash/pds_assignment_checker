/*

SECTION 14

Roll No:22EE10048

Name: Brij

Assignment NO: 11

Description- Deletes a node
*/
#include<stdio.h>//INCLUDING PACKAGE
#include <stdlib.h>//STUD LIBRARY

struct node //DEFINING STRUCTURE VARIABLE
{
	int d;
	struct node* next;
};
typedef struct node ELEMENT;
typedef ELEMENT* LINK;
struct node* createlist(int n,int A[])//method to create list
{
	LINK head,tail;
	head=(LINK)malloc(sizeof(ELEMENT));//assigning space to head
	head->d=A[0];
	tail=head;
	for(int i=1;i<n;i++)
	{
		tail->next=(LINK)malloc(sizeof(ELEMENT));//malloc
		tail=tail->next;//Moving to next element as a[0] is already stored
		tail->d=A[i];//Storing the current element
	}
	tail=NULL;
	return head;
}
void printlist(struct node* l)
{
	do
	{
		printf("%d ",l->d);//Printing current element
		l=l->next;//Moving to next element
	}
	while(l!=NULL);//Till the list ends
	printf("\n");	
}
LINK delete_item(int val, LINK ptr)
{
	LINK prev, first;
	first = ptr;//storing first node
	if (ptr== NULL)
	return  NULL;
	else  if (val== ptr-> d)//deletes first node
	{
		ptr= ptr-> next;
		first->next = NULL;
		free(first);//free node
		return ptr; 
	}
	else
	{     
		prev= ptr;
		ptr= ptr-> next;
		while (ptr!= NULL && val!=ptr->d)//find node to delete
		{
			prev= ptr;
			ptr= ptr-> next;
		}
		if (ptr== NULL || val!= ptr->d) 
		return first;
		else
		{
			prev-> next = ptr-> next;
			ptr->next = NULL;
			free(ptr);//free node
			return first;
		}
	}
}
int Search( LINK head, int element)  //Searchs if element is in the list
{   
	LINK temp;
	temp = head;
   	while (temp != NULL)  
	{ 
     		if (temp -> d == element) 
		return 1;    
  		temp = temp -> next; 
	} 
  	return 0;
}
int main()//MAIN METHOD
{
	int n,m;
	printf("Enter number of elements: ");
	scanf("%d",&n);
	printf("Enter List: "); 
	int a[n];
	for(int i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("Enter element to be deleted: ");
	scanf("%d",&m);
	LINK l=createlist(n,a);
	if(Search(l,m))
	{
		LINK del=delete_item(m,l);
		printf("Output after deleting %d:\n",m);
		printlist(del);
	}
	else 
	printf("%d does not exist\n",m);
	return 0;
}
