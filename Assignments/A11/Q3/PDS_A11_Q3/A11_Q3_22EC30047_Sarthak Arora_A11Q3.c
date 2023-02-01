/* 
section 14
roll.no. = 22EC30047
Name = SARTHAK ARORA
Assignment .no  : 11
description: 
*/ 




# include <stdio.h>
# include <stdlib.h>


struct Node {
	int Data ;
	struct Node *next ;
};

// a function to add a new element to a list 
void append(struct Node** headref , int new_value){

	struct Node* NewNode = (struct Node*) malloc(sizeof(struct Node)); 
	struct Node* last = *headref ;

	NewNode->Data = new_value ;
	NewNode->next = NULL ;

	// if the list is empty this initiates a list 
	if(*headref==NULL){
		*headref = NewNode ;
		return ;
	}



	while(last->next!= NULL){ 
		last = last->next ;
	}

	last->next = NewNode ; 
	return; 
}



// printing the element of a list 
void printlist(struct Node* ptr){
	while(ptr!=NULL){
		printf(" %d ", ptr->Data);
		ptr = ptr->next ;
	}
	printf(" \n"); 
}


// these two function to add a new integer to the shorted array
struct Node* getlocation (struct Node* head , int a){
	struct Node*  current = head ;
	while(current!=NULL && current->next->Data < a){
		current = current->next;
	}
	return current ;
}
void addafter( struct Node* ptr , int new_value ){
	struct Node* NewNode = (struct Node*) malloc(sizeof(struct Node)); 
	NewNode->Data = new_value ;
	NewNode->next = ptr->next ;
	ptr->next =NewNode ;
}



int main(){


	int n ;
	printf("n=");
	scanf("%d", &n);


	printf("enter elements of array: \n");

	// taking entries of array from the user 
	int arr[n] ; 
	for(int i = 0; i<n ; scanf("%d",&arr[i++])) ;

	//creating a list through the array 
	struct Node* head = NULL ;
	for(int i = 0 ; i<n ;i++){
		append(&head , arr[i]) ;
	}




	int m ; 	
	printf("m=");
	scanf("%d", &m);


	
	printlist(head);

	
	addafter(getlocation(head , m) ,m  );
	printf("modified list: \n");
	printlist(head) ;






	

	return 0;
}