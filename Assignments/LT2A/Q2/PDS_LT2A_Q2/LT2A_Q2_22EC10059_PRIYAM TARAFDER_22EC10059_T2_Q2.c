/* NAME: PRIYAM TARAFDER
ROLL NO.: 22EC10059
SET: A
QUESTION: 2
DESCRIPTION: DISPLAYS SUM OF TWO SETS AS LINKED LISTS
*/

#include <stdio.h>
#include <stdlib.h>
typedef struct SET{
	int data;
	struct SET *next;
}SET;

SET *assign(int n){
	SET *head=(SET *)malloc(sizeof(SET));
	SET *ptr=head;
	scanf("%d ",&ptr->data);
	for(int i=1;i<n;i++){
		ptr->next=(SET *)malloc(sizeof(SET));
		ptr=ptr->next;
		scanf("%d ",&ptr->data);		
	}
	ptr=NULL;
	return head;
}//assigns linked list according to user input

SET *delete(SET *head, int a){
	SET *ptr=head;
	if(ptr==NULL)
		return ptr;
	if(head->data==a){
		SET *temp=head;
		head=head->next;
		temp->next=NULL;
		free(temp);
	}else{
		SET *prev=ptr;
		ptr=ptr->next;
		for(;ptr!=NULL && a!=ptr->data;prev=ptr,ptr=ptr->next);
		if(ptr==NULL || a!=ptr->data)
			return head;
		else{
			prev->next=ptr->next;
			ptr->next=NULL;
			free(ptr);
		}					
	}
	return head;
}//deletes element

SET *duplicate(SET *head){
	SET *ptr=head;
	for(;ptr!=NULL;ptr=ptr->next){
		SET *p=ptr;
		for(;p!=NULL;p=p->next)
			p->next=delete(p->next,ptr->data);
	}
	return head;
}// checks and deletes duplicate elements in the linked list

SET *sum(SET *head1, SET *head2,int n1, int n2){
	SET *head=(SET *)malloc(sizeof(SET));
	SET *ptr=head;
	ptr->data=head1->data+head2->data;
	ptr->next=(SET *)malloc(sizeof(SET));
	ptr=ptr->next;
	for(int i=1;i<n1*n2;i++,ptr=ptr->next){
		SET *p1=head1, *p2=head2;
		for(int t=1;t<i%n1;t++)
			p1=p1->next;
		for(int t=1;t<i/n2;t++)
			p2=p2->next;
		ptr->data=p1->data+p2->data;
		ptr->next=(SET *)malloc(sizeof(SET));
	}
	ptr=NULL;
	return head;
} //creates a new linked list whose elements are sum of other 2 linked list

void display(SET *head){
	SET *ptr=head;
	for(;ptr!=NULL;ptr=ptr->next)
		printf("%d ",ptr->data);
	printf("\n");
	return;
}//displays linked list

int count(SET *head){
	SET *ptr=head;
	int c=0;
	for(;ptr!=NULL;ptr=ptr->next)
		c++;
	return c;
} // counts true length of linked list after duplicate elements have been deleted
int main(){
	int n,m;
	SET *head1;
	SET *head2;
	SET *head;
	printf("enter N: ");
	scanf("%d ",&n);
	head1 =assign(n);
	printf("enter N: ");
	scanf("%d ",&m);
	head2=assign(m);
	head1= duplicate(head1);
	head2=duplicate(head2);
	printf("L1= ");
	display(head1);
	printf("L2= ");
	display(head2);
	head=sum(head1, head2, count(head1), count(head2));
	head=duplicate(head);
	printf("L= ");
	display(head);
}
