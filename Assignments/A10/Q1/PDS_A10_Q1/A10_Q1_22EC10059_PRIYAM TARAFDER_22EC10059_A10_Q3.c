/* NAME: PRIYAM TARAFDER
ROLL NO.: 22EC10059
ASSIGNMENT NO.: 10
QUESTION NO.: 3
DESCRIPTION: create, display and edit linked list
*/

#include <stdio.h>
#include <stdlib.h>

struct node{
	int a;
	struct node *p;
};
struct node *createlist(int n, int A[]){
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
void printlist(struct node *h){
	struct node *ptr=h;
	for(;ptr!=NULL;){
		printf("%d ",ptr->a);
		ptr=ptr->p;
	}
	printf("\n");
	return;
}
void even(struct node *h){
	struct node *temporary=h;
	h=h->p;
	free(temporary);
	if(h->p!=NULL){
		struct node *prev=h;
		struct node *ptr=h->p;
		int c=2;
		for(;ptr!=NULL;){
			if(c%2==0  && ptr->p!=NULL){
				prev->p=ptr->p;
				struct node *temp=ptr;
				ptr=ptr->p;
				temp->p=NULL;
				free(temp);
				c++;
			}else if(c%2==0 && ptr->p==NULL){
				prev->p=NULL;
				free(ptr);
				break;
			}
			ptr=ptr->p;prev=prev->p;c++;
		}
	}
	printlist(h);
	return;
}
int main(){
	int n;
	scanf("%d",&n);
	int A[10];
	for(int t=0;t<n;t++)
		scanf("%d",&A[t]);
	struct node *head=createlist(n,A);
	printlist(head);
	even(head);
}