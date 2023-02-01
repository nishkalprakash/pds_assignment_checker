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






//a function to delete a element from the list 
struct Node* delete_item(int val, struct Node* ptr) {
	
	struct Node* prev ;
	struct Node* first ;
	first = ptr; 
	if (ptr == NULL) return NULL;
	else if (val == ptr -> Data){ 
		ptr = ptr -> next; 
		first->next = NULL;
		free(first); 
		return ptr; 
	}
	else { 
		prev = ptr;
		ptr = ptr -> next;
		
		while (ptr != NULL && val != ptr->Data) {
			prev = ptr;
			ptr = ptr -> next;
		}

		if (ptr == NULL || val != ptr->Data) {

		printf("%d does not found \n",val);
		return NULL; 

		}

		else { 
		prev -> next = ptr -> next;
		ptr->next = NULL;
		free(ptr); 
		return first; 
		}
	}
}



void printlist(struct Node* ptr){
	while(ptr!=NULL){
		printf(" %d ", ptr->Data);
		ptr = ptr->next ;
	}
	printf(" \n"); 
}









int main(){


	int n ;
	printf("n=");
	scanf("%d", &n);

	// taking entries of array from the user
	printf("enter elements of array: \n");
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


	head = delete_item(m, head); 
	printf("modified list: \n");
	printlist(head);


	

	return 0;
}