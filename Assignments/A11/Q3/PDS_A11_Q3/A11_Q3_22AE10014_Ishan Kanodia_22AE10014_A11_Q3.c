/*
Section 14
Roll no. : 22AE10014
Name : Ishan Kanodia
Assignment No. : 11
Question No. : 3
Description : Inserting a new value to an already sorted linked list
*/

#include<stdio.h>
#include<stdlib.h>

typedef struct node{
	int data;
	struct node * next;
}node;

node *createlist(int n, int A[])
{	
	node *head,*ptr;
	head=(node*)malloc(sizeof(node));
	ptr=head;
	for(int i=0;i<n-1;i++)
	{
		ptr->data=A[i];
		ptr->next=(node*)malloc(sizeof(node));
		ptr=ptr->next;
	}
	ptr->data=A[n-1];
	ptr->next=NULL;
	return head;
}

int main(){
	int n;
	int A[100];
	int m;
	node *head;
	printf("Enter n: ");
	scanf("%d",&n);
	printf("LL[n]=");
	for(int i=0;i<n;i++)
		scanf("%d",&A[i]);
	printf("m=");
	scanf("%d",&m);
	head=createlist(n,A);

	// node * ptr;
	// node * new;
	// new=(node*)malloc(sizeof(node));
	// ptr=head;
	// int flag=0;
	// for(int i=0;i<n;i++){
	// 	if(m>(ptr->data)&&m<(ptr->next->data)){
	// 		(new->data)=m;
	// 		(ptr->next)=new;
	// 		(new->next)=(ptr->next);
	// 		break;
	// 		flag=1;
	// 	}
	// 	ptr=(ptr->next);
	// }
	// if(flag==0){
	// 	ptr=new;
	// 	ptr->data=m;
	// 	ptr->next=NULL;
	// }

	// printf("output after inserting %d: ",m);

	// ptr=head;
	// for(int i=0;i<=n;i++){
	// 	printf("%d",ptr->data);
	// 	ptr=ptr->next;
	// }
	for(int j=0;j<n;j++){			//Running a loop to sort the newly entered number
		if(new<A[j]){
			for(int k=n;k>=j;k--){
				A[k+1]=A[k];//The actual computing
			}
		A[j]=new;
		break;
		}
		else{
		A[n]=new;
		}
	}
	printf("Output Array: ");
	for(int l=0;l<n+1;l++){
		printf("%d ",A[l]);		//Printing the output
	}
	return 0;
}