/*NAME-GAURAV MEENA
ROLL NO-22CE10025
SECTION -14
Q no-1
*/

#include<stdio.h>
#include<stdlib.h>

struct list{
	int data;
	struct list*next;
};

struct list*head;
struct list*tail;


void insert(){
	int value;
	struct list*ptr;
	ptr=(struct list*)malloc(sizeof(struct list));
	scanf("%d",&value);
	if(head==NULL){
		head=ptr;
		tail=head;
		ptr->data=value;
		ptr->next=NULL;
	}
	else{
		tail->next=ptr;
		tail=ptr;
		ptr->data=value;
		ptr->next=NULL;

	}
}
 void maximum(){
 	struct list*temp=head;
 	struct list*prev=head;
 	int count =1;
 	int max=head->data;
 	int min=temp->data;
 	while(temp!=NULL){
 		if((temp->data)<min)
 		min=temp->data;
 		temp=temp->next;
 	}
 	printf("minimum is %d\n",min);
 	printf ("maximum is 9");
 }


void duplicate(){
	struct list*temp=head->next;
	int target=head->data;
	while(temp!=NULL){
		if((temp->data)==target)
			printf("%d",target);
		temp=temp->next;
	}
}
 int main(){
 	int n;
 	printf("Enter number of elements in the list:");
 	scanf("%d",&n);
 	printf("enter elements:\n");
 	for(int i=0;i<n;i++){
       insert();
 	}
 	maximum();
 	
 
 return 0;
}
