/*
Name:AMAN JUNEJA
ROLL NO : 22BT30002
SECTION :14
LAB TEST-1
QUESTION : 

*/

#include<stdio.h>	//including stdio.h header file
#include<stdlib.h>	//including stdlib.h header file

// struct for linked list
typedef struct SET{
	int data;
	struct SET *next;
}SET;

//function to create linked list
SET *createlist(int n){
	SET *head=NULL;
	SET *tail;
	int i;
	printf("Enter %d numbers: ",n);
	if(n>0){
		head=(SET *)malloc(sizeof(SET));
		scanf("%d",&(head->data));
		// head->data=arr[0];
		tail=head;
		for(int i=1;i<n;i++){
			tail->next=(SET *)malloc(sizeof(SET));
			tail=tail->next;
			scanf("%d",&(tail->data));
			// tail->data=arr[i];
		}
		tail->next=NULL;
	}
	return head;
}

//function to create linked list from array
SET *createlistarray(int n,int arr[]){
	SET *head=NULL;
	SET *tail;
	int i;
	printf("L: ");
	if(n>0){
		head=(SET *)malloc(sizeof(SET));
		// scanf("%d",&(head->data));
		head->data=arr[0];
		tail=head;
		for(int i=1;i<n;i++){
			tail->next=(SET *)malloc(sizeof(SET));
			tail=tail->next;
			// scanf("%d",&(tail->data));
			tail->data=arr[i];
		}
		tail->next=NULL;
	}
	return head;
}

//function for addition of elements of two arrays and then store into third array
int *addition(int arr1[],int n1,int arr2[],int n2){
	int *arr3=(int *)malloc((n1*n2)*sizeof(int));
	int k=0;
	for(int i=0;i<n1;i++){
		for(int j=0;j<n2;j++){
			arr3[k]=arr1[i]+arr2[j];
			k++;
		}
	}
	return arr3;
}	

//function to print linked list
void printlist(SET* L){
	SET* temp=L;
	while(temp!=NULL){
		printf("%d ",temp->data);
		temp=temp->next;
	}
}

//function to remove duplicates from linked list
SET *removeDup(SET *head){
	SET *ptr;
	ptr=head;
	SET *ptrx=head->next;
	while(ptr->next!=NULL && ptr!=NULL){
		if(ptr->data=ptrx->data){
			ptr->next=ptrx->next;
			ptrx=ptrx->next;
		}
		if(ptr->data!=ptrx->data){
			ptrx=ptrx->next;
		}
		if(ptrx==NULL){
			ptr=ptr->next;
			ptrx=ptr->next;
		}
	}	
	return head;
}

//main function
int main(){
	int N1,N2;
	printf("#### L1 ####\n");
	printf("Enter N: ");
	scanf("%d",&N1);
	int arr1[N1];	//creating two arrays to store elements for addition
	int arr2[N2];

	SET *head1=createlist(N1);
	printf("#### L2 ####\n");
	printf("Enter N: ");
	scanf("%d",&N2);
	SET *head2=createlist(N2);
	
	SET *ptr1=head1;
	SET *ptr2=head2;
	for(int i=0;i<N1;i++){
		arr1[i]=ptr1->data;
		ptr1=ptr1->next;
	}
	for(int i=0;i<N2;i++){
		arr2[i]=ptr2->data;
		ptr2=ptr2->next;
	}
	int *ptr=addition(arr1,N1,arr2,N2);
	for(int i=0;i<N1*N2;i++){
		for(int j=0;j<N1*N2;j++){
			if(ptr[j]>ptr[j+1]){
				int temp=ptr[j];
				ptr[j]=ptr[j+1];
				ptr[j+1]=temp;
			}
		}
	}

	SET *new=createlistarray(N1*N2,ptr);
	SET *new1=removeDup(new);
	printlist(new1);

	
	return 0;
}