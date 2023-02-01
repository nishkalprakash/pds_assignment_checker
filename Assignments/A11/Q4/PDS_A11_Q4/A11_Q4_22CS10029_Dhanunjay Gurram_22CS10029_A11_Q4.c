/*Section 14
  Name:Gurram Dhanunjay
  RollNo:22CS10029
  Assignment:11*/
#include <stdio.h>
#include <stdlib.h>
struct Linked_list{
	int num;
	struct Linked_list *next;
};
typedef struct Linked_list node;
void delete(node *head,int n){
	node *first=head;
	node *prev;
    if (n==head->num) {head=head->next;  return;}
    else {
    	while (first->next!=NULL && n!=first->num){
    		prev=first; first=first->next;
    	}
    	if (n==first->num) prev->next=first->next;
    	else {
    		printf("%d does not exist\n",n);
    		exit(0);
    	}
	}
}
int main(){
	int m,n;
	node *head,*first;
	head=(node *)malloc(sizeof(node));
	first=head;
	printf("n=");
	scanf("%d",&n);
	int ll[n];
	printf("LL[n]=");
	for (int i=0;i<n;i++){
		scanf("%d",&ll[i]);
	}
	printf("m=");
	scanf("%d",&m);
	for (int i=0;i<n;i++){
		 first->num=ll[i];
		 first->next=(node *)malloc(sizeof(node));
		 first=first->next;
	}
	first=NULL;
	delete(head,m);
	node *test=head;
	printf("Output after deleting %d:\n",m);
	while (head->next!=NULL){
		if (head->num==m) {head=head->next; continue;}
		printf("%d ",head->num);
		head=head->next;
	}
	printf(" \n");
	return 0;
}