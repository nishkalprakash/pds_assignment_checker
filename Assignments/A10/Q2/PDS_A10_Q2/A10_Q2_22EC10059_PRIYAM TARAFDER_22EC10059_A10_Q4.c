/* NAME: PRIYAM TARAFDER
ROLL NO.: 22EC10059
ASSIGNMENT NO.: 10
QUESTION NO.: 4
DESCRIPTION: check if linked list is sorted
*/

#include <stdio.h>
#include <stdlib.h>

struct node{
	int a;
	struct node *p;
};
struct node *createlist(int n, int *A){
	struct node *h=(struct node *)malloc(sizeof(struct node));
	h->a=A[0];
	struct node *ptr=h;
	for(int t=1;t<n;t++){		
		ptr->p=(struct node *)malloc(sizeof(struct node));
		ptr=ptr->p;
		ptr->a=A[t];
	}
	ptr=NULL;
	return h;
}
int asc(struct node *h){
	int c=0;
	struct node *ptr=h;
	if(ptr->p==NULL)
		return 1;
	for(;ptr->p!=NULL;ptr=ptr->p){
		if(ptr->a < ptr->p->a)
			c++;
	}
	return ++c;
}
int desc(struct node *h){
	int c=0;
	struct node *ptr=h;
	if(ptr->p==NULL)
		return 1;
	for(;ptr->p!=NULL;ptr=ptr->p){
		if(ptr->a > ptr->p->a)
			c++;
	}
	return ++c;
}
int main(){
	int n;
	scanf("%d",&n);
	int *A=(int *)malloc(n*sizeof(int));
	for(int t=0;t<n;t++)
		scanf("%d",&A[t]);
	struct node *head=createlist(n,A);
	if(desc(head)!=n&&asc(head)!=n)
		printf("The input list L is not in sorted order ");
	else if(desc(head)==n)
		printf("The input list L is in descending order");
	else if(asc(head)==n)
		printf("The input list L is in ascending order");
}