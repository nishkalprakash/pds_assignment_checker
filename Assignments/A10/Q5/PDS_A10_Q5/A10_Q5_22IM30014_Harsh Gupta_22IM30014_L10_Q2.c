/* 
section 14
roll no 22IM30014
name : #harsh Gupta#
assignment No; 10
Description - 
*/


#include <stdio.h>
#include<string.h>
#include<stdlib.h>
#define ll long long int
typedef struct node {
	int d;
	struct node *next;

}link;
link *head,*head2;
link *ptr ;
int max =0 , min = 10000000;
void read(int a){                                      // to take the list as input 
	link *temp;
	temp = (link*)malloc (sizeof(struct node));
	temp->d=a;
	
	temp->next =  NULL;

	ptr->next = temp;
	ptr = temp;
}
int arr[100]={0};
void traverse(link *ptr){                            // traversing 
	int hsh=0;
	while (ptr!=NULL){
		arr[ptr->d]++;
		ptr = ptr->next;
	}
	
}


int main() {
	int n,k;
	scanf("%d",&n);                                  // taking the size of list 1 
	
	head = (link*)malloc (sizeof(struct node));
	scanf("%d",&k);                                // taking the list 1 element as input 
	head->d =k;
	head->next = NULL;
	ptr = head ; 
	
	for (int i=0;i<n-1;i++){
		scanf("%d",&k);
		
		
		read(k);
	}
	
	scanf("%d",&n);                                  // taking the size of list 2


	head2 = (link*)malloc (sizeof(struct node));                
	scanf("%d",&k);                      
	head2->d =k;
	head2->next = NULL;
	ptr = head2 ; 
	
	for (int i=0;i<n-1;i++){                                  // taking the list 1 element as input 
		scanf("%d",&k); 
		
		read(k);
	}
	ptr = head;
	traverse(ptr);
	ptr = head2;
	traverse(ptr);
	printf("Union : ");
	for (int i=0;i<100;i++){
		if (arr[i]>0) printf("%d ",i);
	}
	printf("\nIntersection : ");
	for (int i=0;i<100;i++){
		if (arr[i]>1) printf("%d ",i);
	}
    return 0;
    
    
}