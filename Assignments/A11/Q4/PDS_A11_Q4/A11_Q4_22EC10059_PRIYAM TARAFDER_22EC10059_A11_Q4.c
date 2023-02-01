/* NAME: PRIYAM TARAFDER
ROLL NO.: 22EC10059
SECTION: 14
ASSIGNMENT NO.: 11
QUESTION NO.: 4
DESCRIPTION: delete a element from a linked list
*/

#include <stdio.h>
#include <stdlib.h>
typedef struct linked{
	int a;
	 struct linked *p;
}list;
void display(list *h){
	printf("Output after deleting is: ");
	for(list *ptr=h;ptr->p!=NULL;ptr=ptr->p)
		printf("%d ",ptr->a);
}
list *create(list *h,int n){
	list *ptr=h;
	for(int t=1;t<=n;t++,ptr=ptr->p){
		ptr->p=(list *)malloc(sizeof(list));
		scanf("%d",&ptr->a);
	}
	ptr=NULL;
	return h;
}
void delete(list *h, int m){
	list *ptr=h->p; list *prev=h;
	int c=0;
	if(ptr==NULL){
		if(prev->a==m){
			free(prev);
			printf("linked list does not exist anymore");
		}else
			display(h);
	}else{
		for(;ptr!=NULL;ptr=ptr->p,prev=prev->p){
			if(ptr->a==m){
				prev->p=ptr->p;
				list *temp=ptr;
				ptr=ptr->p;
				temp->p=NULL;
				free(temp);
				c++;
			}
		}
		if(h->a==m)
			h=h->p;
		if(c==0)
			printf("%d does not exist", m);
		else
			display(h);
	}
}
int main(){
	int n,m;
	scanf("%d",&n);
	list *head=(list *)malloc(sizeof(list *));
	head=create(head,n);
	scanf("%d",&m);
	delete(head,m);
}