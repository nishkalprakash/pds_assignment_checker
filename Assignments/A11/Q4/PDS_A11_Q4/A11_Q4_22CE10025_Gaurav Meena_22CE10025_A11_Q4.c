/*name-gaurav meena
roll no -22CE10025
lab-11*/

#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node*next;
};
void insert_at_end(struct node**head,int data){
	struct node*new_node=(struct node*)malloc(sizeof(struct node));
	

	new_node->data=data;

	new_node->next=NULL;

	if(*head==NULL){
		*head=new_node;
		return;
	}

	struct node*temp=*head;
	while(temp->next!=NULL)
		temp=temp->next;

	    temp->next=new_node; 

}
void delete_node(struct node **head,int value){
	struct node*temp=*head,*prev;

	if(temp!=NULL && temp->data==value){
		*head=temp->next;
		free(temp);
		return;
	}
	while(temp!=NULL && temp->data!=value){
		prev=temp;
		temp=temp->next;

	}
	if(temp==NULL)
		return;

	prev->next=temp->next;
	free(temp);
}




void printlist(struct node*head){
	while(head!=NULL){
		printf("%d\n",head->data);
		head=head->next;
	}
	printf("\n");
}

int main(){
	int n;
	int m;
	int value;
	struct node*head=NULL;

	printf("Enter number of elements:");
	scanf("%d",&n);

	for(int i=0;i<n;i++){
		scanf("%d",&value);
		insert_at_end(&head,value);
	}



	printf("Enter the value that to be deleted");
	scanf("%d",&m);
	delete_node(&head,m);

	printf("The new list is:");
	printlist(head);


	return 0;
}
