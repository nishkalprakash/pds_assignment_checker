/*
Section 14
Roll No.:22AG10021
Name: Mahin Hussain
Assignment No.:11
Description: Program to insert new value to linked list.
*/

#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};

struct node *createlist(int n,int A[])      //function to create linked list
{
	struct node *head,*p=head;
	p=(struct node *)malloc(sizeof(struct node));
	p->data=A[0];
	p->next=NULL;
	head=p;
	for(int i=1;i<n;i++)
	{
		p->next=(struct node *)malloc(sizeof(struct node));
		p=p->next;
		p->data=A[i];
	}
	p->next=NULL;
	return(head);
}

void printlist(struct node *head)  //function to print linked list
{
	while(head!=NULL)
	{
		printf("%d\t",head->data);
		head=head->next;
	}
}

void insert(struct node *head,int n,int x)   //method to insert the value in linked list
{
	int a[x],b[x+1],f=0,c=0;
	struct node *ptr;
	while(head!=NULL)   //converting the linked list to array
	{
		a[c]=head->data;
		head=head->next;
		c++;
	}
for(int i=0;i<c;i++)  
  if(a[i]<n)                
   f++;
 b[f]=n;            
 for(int i=0;i<f;i++)
  b[i]=a[i];          
 for(int i=f;i<=c;i++)
  b[i+1]=a[i];          //adding the number in the right plae in the array
ptr=createlist(c+1,b);  //converting the new array to linked list
printlist(ptr);    //printing the linked list after inserting the new number
}



int main()
{
	int n,m;
	struct node *ptr;
	printf("Enter no. of elements in linked list\n");
	scanf("%d",&n);     //asking user to input number of elements and storing it
	int a[n];
	printf("Enter elements in ascending order\n");
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);   //storing all elements to array
	printf("Enter number to be inserted\nm:");
	scanf("%d",&m);     //asking user to input number to be inserted and storing it
	printf("Output after inserting %d:\n",m);
	ptr=createlist(n,a);  //creating the linked list from array
	insert(ptr,m,n);   //sending the linked list and number to be inserted in it to the method insert, for insertion 
	return 0;
}