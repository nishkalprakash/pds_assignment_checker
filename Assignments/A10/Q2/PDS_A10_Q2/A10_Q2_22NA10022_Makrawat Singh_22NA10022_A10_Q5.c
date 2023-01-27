/*
 Section 14
 Roll No :22NA10022
 Name : Makrawat Singh
 Assignment No : 10
 Description :check whether the list is sorted in ascending or descending or not.
 */
#include<stdio.h>
#include<stdlib.h>
#define ll long long
typedef struct node
{
	int d;
	struct node *next;

}link;
link *head;
link *ptr;
int p,asc=0,des=0;
void read(int a)
{
	link *temp;
	temp=(link*)malloc(sizeof(struct node));
	temp->d=a;

	temp->next=NULL;

	ptr->next=temp;
	ptr=temp;

	if(p<a) asc++;
	if(p>a) des++;
	p=a;

}

int main()
{
	int n,k;
	scanf("%d",&n);

	head=(link*)malloc(sizeof(struct node));
	
	scanf("%d",&k);
	head->d=k;
	head->next=NULL;
	ptr=head;
	p=k;
	for(int i=0;i<n-1;i++)
	{
		scanf("%d",&k);
		read(k);

	}
	if(asc==n-1) printf("The input list is in ascending order.\n");
	else if(des==n-1) printf("The input list is in descending order.\n");
	else printf("The input list is not in sorted order .\n");
	
}
