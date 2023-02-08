/*Section 14
  Name:Gurram Dhanunjay
  RollNo:22CS10029
  LAB TEST*/
#include <stdio.h>
#include <stdlib.h>
struct list{
	int d;
	struct list *next;
};
typedef struct list list;
list *create_list(list *head,int n){
    list *first;
    first=head;
	for (int i=0;i<n;i++){
	scanf("%d",&first->d);
	first->next=(list *)malloc(sizeof(list));
	first=first->next;
	}
	first=NULL;
	return head;
} 
void print_list(list *head){
	if (head->next==NULL){
	return;
	}
	else {
	if (head->next->next!=NULL) printf("%d,",head->d);
	else printf("%d",head->d);
	return print_list(head->next);
	}
}
list *delete_ele(int ele,list *head){
	list *first=head->next,*prev=head;
	if (prev->d==ele)return head->next;
	else{
		while(first->next!=NULL){
			if (ele==first->d){
				prev->next=first->next; break;
			}
			first=first->next;
			prev=prev->next;
		}
	}
	return head;
}
list *delete_extra(list* head){                            //deletes extra ele in list
	list *d1,*d2;
	d1=head;
	d2=head;
	while (d1->next!=NULL){
		d2=head; int k=1;
		while (d2->next!=NULL){
			if (d1->d==d2->d && k!=1){
			   head=delete_ele(d1->d,head);}
			  if (d1->d==d2->d) k++;
			d2=d2->next;
		}
		d1=d1->next;
	}
	return head;
}
int main(){
	int n1,n2,num;
	list *head1,*head2,*dummy1,*dummy2;
	head1=(list *)malloc(sizeof(list));
	printf("#### L1 ####\n");
	printf("Enter N:");
	scanf("%d",&n1);
	printf("Enter %d Numbers:",n1);
	head1=create_list(head1,n1);
	head1=delete_extra(head1);
	head2=(list *)malloc(sizeof(list));
	printf("#### L2 ####\n");
	printf("Enter N:");
	scanf("%d",&n2);
	printf("Enter %d Numbers:",n2);
	head2=create_list(head2,n2);
	head2=delete_extra(head2);
	printf("L1 = {"); 
	print_list(head1);printf("}\n\t+\n");
	printf("L2 = {");print_list(head2); 
	printf("}\n\t=\n");
	list *head;
	dummy1=head1; dummy2=head2;
	head=(list *)malloc(sizeof(list));
	list *first=head;
	while (dummy1->next!=NULL){
	dummy2=head2;
	while(dummy2->next!=NULL){
	first->d=dummy1->d+dummy2->d;
	dummy2=dummy2->next;
	first->next=(list *)malloc(sizeof(list));
	first=first->next;
	}
	dummy1=dummy1->next;
	}
	dummy1=head; dummy2=head;
	printf("L = {");
	dummy1=head; dummy2=head;
	head=delete_extra(head);
	print_list(head);
	printf("}\n");
	return 0;
}