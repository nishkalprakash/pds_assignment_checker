/*
 Section 14
 Roll No: 22AE10034
 Name: Shaon Malik
 Assignment No :10
 Question No :1
 Description: to find duplicate elements in a linked list
 */


#include <stdio.h>
#include <stdlib.h>

struct list{
	int data;
	struct list* next;
};

typedef struct list ELEMENT; // defining list elements as data type
typedef ELEMENT* LINK; //pointer to list element 

LINK create_list(int n)
{
	LINK head=(LINK)malloc(sizeof(ELEMENT)),temp,tail;
	temp=head;
	for(int i=0;i<n;i++){
		scanf("%d",&temp->data);
		 tail=(LINK)malloc(sizeof(ELEMENT));
		temp->next=tail;
		temp=temp->next;	
	}
	tail->next=NULL;
	return head;
}

int maximum(LINK head){
	int m=head->data;
	LINK tail=head->next;
	while(tail->next!=NULL){
		if(tail->data > m)
			m=tail->data;
		tail=tail->next;	
	}
	return m;
}


int minimum(LINK head){
	int m=head->data;
	LINK tail=head->next;
	while(tail->next!=NULL){
		if(tail->data < m)
			m=tail->data;
		tail=tail->next;	
	}
	return m;
}

void duplicate(LINK head,int n,int max,int min){
	int k=0;
	int a[n];
	for(int i=min;i<=max;i++){
	int freq=0;
    LINK temp2=head;
	for(int j=0;j<n;j++){
		int m1=temp2->data;
		if(m1==i){
			freq++;
		}
		temp2=temp2->next;
		
	}
	if(freq>1)
			a[k++]=i;
   }

   if(k>0)
   {
   	printf("DUPLICATE ELEMENTS:");
   	for(int l=0;l<k;++l)
   		printf("%d, ",a[l]);
   }
   else
   	printf("NO DUPLICATE NUMBERS");
}

int main(){
	int n;
	printf("enter number of elements");
	scanf("%d",&n);
	LINK h=create_list(n);
	int max=maximum(h);
	int min=minimum(h); 
	duplicate(h,n,max,min);
	printf("maximum element : %d",max);
	printf("minimum element : %d",min);
	
}

