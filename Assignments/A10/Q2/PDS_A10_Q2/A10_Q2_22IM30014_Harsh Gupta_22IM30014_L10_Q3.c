/* 
section 14
roll no 22IM30014
name : #harsh Gupta#
assignment No; 10
Description - 
*/


#include <stdio.h>
#include<stdlib.h>
#include<string.h>
#define ll long long int
typedef struct node {                              // defining struct node 
	int d;
	struct node *next;

}link;
link *head;
link *ptr ;
int p,asc=0,des=0; 
void read(int a){                                 // function to form list 
	link *temp;
	temp = (link*)malloc (sizeof(struct node));
	temp->d=a;
	
	temp->next =  NULL;

	ptr->next = temp;
	ptr = temp;

	if (p<a) asc++;
	if (p>a) des++;
	p=a;

	
}

int main() {
	int n,k;     
	scanf("%d",&n);                     // taking the length of list 
	
	head = (link*)malloc (sizeof(struct node));                        // making head 
	scanf("%d",&k);
	head->d =k;                                        
	head->next = NULL;
	ptr = head ; 
	p=k;
	for (int i=0;i<n-1;i++){
		scanf("%d",&k);
		
		read(k);
	}
	if (asc==n-1) printf("The input list is in ascending order\n ");                                 // calculating whether it is ascending order or descending order pr not sorted order 
	else if (des==n-1) 	printf("The input list is in descending order\n ");
	else printf("The input list is not in sorted order .\n ");

    return 0;
    
    
}