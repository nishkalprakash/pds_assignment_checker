/*
Section 14
Name: Nived Shah
Roll No: 22CS10049
Assignment No. : 10
Description: Check asc. desc. or not in order
*/
#include <stdio.h>
#include <stdlib.h>
struct list{
	int d;
	struct list *next;
};
typedef struct list ELEMENT;

int main(){
	int l;
	ELEMENT *head=NULL;
	ELEMENT *tail;
	printf("Enter the total number of elements = ");
	scanf("%d", &l);
	int a[l+1];
	for(int i=0; i<l;i++)
		scanf("%d", &a[i]);
	a[l]=-99999;

	head=malloc(sizeof(ELEMENT));
	head->d=a[0];
	tail=head;
	for(int i=1; a[i]!=-99999;i++){
		tail->next=malloc(sizeof(ELEMENT));
		tail=tail->next;
		tail->d=a[i];
	}
	tail->next=NULL;
	
	int flag=0; ELEMENT *temp2;
	temp2=head;
	for(; temp2->next!=NULL; temp2=temp2->next){
			if((temp2->d)>(temp2->next->d)){
				flag--;
			}
			else if((temp2->d)<(temp2->next->d)){
				flag++;
			}
			else
				flag+=0;
	}
	if(flag==-(l-1))
		printf("The input list L is in descending order.\n");
	else if(flag==(l-1))
		printf("The input list L is in ascending order.\n");
	else
		printf("The input list L is not in sorted order.\n");

	return 0;
}