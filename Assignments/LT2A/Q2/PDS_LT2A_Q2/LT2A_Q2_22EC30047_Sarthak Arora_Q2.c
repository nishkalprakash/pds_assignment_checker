
/*
Name = SARTHAK ARORA
roll.no. = 22EC30047
 section 14
*/ 
 #include<stdio.h>

 #include<stdlib.h>

typedef struct SET{
	int data ;
	struct SET *next; 
}SET ;
// a function to add new value to the list 
void append(SET** headref , int new_value){

	SET* NewNode = (SET*) malloc(sizeof(SET)); 
	SET* last = *headref ;

	NewNode->data = new_value ;
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


// a function to add two sets 
void setaddition(SET** L ,SET* L1 ,SET* L2){
 	
 	SET * head = L2 ;

 	int value ;
	while(L1!=NULL){
		L2 = head; 
		while(L2!=NULL){

			value = L1->data + L2-> data  ;
			append(L ,value);

			L2 =L2->next;

		}
		L1 = L1 -> next ;

	}


	
}




//a function to print a list 
void printlist(SET* ptr){
	printf("{");
	while(ptr!=NULL){
		if(ptr->next != NULL) printf(" %d ,", ptr->data);
		else printf(" %d " ,ptr -> data ); 
		ptr = ptr->next ;
	}
	printf("}\n"); 
}


 int main(){


 	int *arr = (int*)malloc(sizeof(int)*20);
 	SET* L1 = NULL ;
 	SET* L2 = NULL;

	int N ;

	printf("####L1####\n");
	printf("Enter N:");
	scanf("%d",&N); 
	printf("enter %d numbers :",N);
	int a;
	for(int i= 0 ; i<N ;i++){
		scanf("%d",&a);
		for(int j= 0; j<i ; j++){
			if(a==arr[j]){
				printf("error");
				return 0 ;
			}
		}
		append(&L1,a); 
		arr[i] = a;
	}

	printf("####L2####\n");
	printf("Enter N:");
	scanf("%d",&N); 
	printf("enter %d numbers :",N);
	for(int i= 0 ; i<N ;i++){
		scanf("%d",&a);
		for(int j= 0; j<i ; j++){
			if(a==arr[j]){
				printf("error");
				return 0 ;
			}
		}
		append(&L2,a); 
	}
	free(arr);




	SET* L  = NULL;
	setaddition(&L ,L1 ,L2);


	//printing the lists 
	printf("\n\nL1 = ");
	printlist(L1);
	printf("+\nL2 = ");
	printlist(L2);
	printf("=\nL = ");
	printlist(L);

	




 	


 	return 0 ;
 }