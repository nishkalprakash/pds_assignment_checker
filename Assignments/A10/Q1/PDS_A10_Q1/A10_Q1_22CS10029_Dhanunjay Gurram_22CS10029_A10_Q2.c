/*Section 14
  Name:Gurram Dhanunjay
  RollNo:22CS10029
  Assignment:10*/
#include <stdio.h>
#include <stdlib.h>
struct node{
	int d;
	struct node* next;
};

struct node* createlist(int n,int a[]){
	struct node *p,*first;
	p=(struct node*)malloc(sizeof(struct node));
	//first=(struct node*)malloc(sizeof(struct node));
	first=p;
	for (int i=0;i<n;i++){
	    p->d=a[i];
	    //first->next=p;
	    //first=first->next;
	     (p->next)=(struct node* )malloc(sizeof(struct node));
	     p=p->next;
	}
	p=NULL;
	return first;
}
void even(struct node* l,int n){
    struct node *first;
    first=(struct node*)malloc(sizeof(struct node));
    for (int i=0;i<n,l->next!=NULL;i++){
    	if (i%2!=0) {printf("%d ",l->d); l=l->next;}
    	else l=l->next;
    }}
int main(){
	int n;
	scanf("%d",&n);
	int arr[n];
	for (int i=0;i<n;i++){
	   scanf("%d",&arr[i]);
	}

	struct node* list;
	list=createlist(n,arr);
	even(list,n);
	 //printlist(list);
	return 0;
}