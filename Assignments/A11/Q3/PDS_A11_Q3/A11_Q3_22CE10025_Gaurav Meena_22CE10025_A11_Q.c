/*name-gaurav meena
roll no -22CE10025
lab-11*/

#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node*next;
};

void insert(struct node**head,int data){
	struct node*new_node=(struct node*)malloc(sizeof(struct node));
	struct node*current;

	new_node->data=data;

	new_node->next=NULL;

	if(*head==NULL||(*head)->data >= new_node->data ){
		new_node->next=*head;
		*head=new_node;
	}
	else{
		current=*head;
		while(current->next!=NULL && current->next->data<new_node->data){
			current=current->next;
		}
		new_node->next=current->next;
		current->next=new_node;
	}
}

void printlist(struct node*head){
	while(head!=NULL){
		printf("%d\n",head->data);
		head=head->next;
	}
	printf("\n");
}



int main(){
	struct node*head=NULL;
	int n;
	printf("Enter n:");
	scanf("%d",&n);
	int value;
	printf("Enter array elements:");

	for(int i=0;i<n;i++){
		scanf("%d",&value);
		insert(&head,value);
	}

	int m;
	printf("Enter the value that to be inserted:");
	scanf("%d",&m);
	insert(&head,m);

    printf("The new list is:");
	printlist(head);


	
return 0;
}
