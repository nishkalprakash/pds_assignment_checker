/* 	   SECTION        : 14
	   ROLL NO.       : 22CH10004
	   NAME           : ADMYA MAHESHWARI
	   ASSIGNMENT NO. : 10
	   DESCRIPTION    : A C program to cheak if the list contain any duplicate or not  
*/

#include<stdio.h>

int main(){
	
	n*head= (n*)malloc(sizeof(node));
	n*second= (n*)malloc(sizeof(node));
	n*third= (n*)malloc(sizeof(node));
	n*fourth= (n*)malloc(sizeof(node));
	n*fifth= (n*)malloc(sizeof(node));
	
	printf("enter  value of 1st data :");
	scanf("%d",&head->data);
	printf("enter  value of 2nd data :");
	scanf("%d",&second->data);
	printf("enter  value of 3rd data :");
	scanf("%d",&third->data);
	printf("enter  value of 4th data :");
	scanf("%d",&fourth->data);
	printf("enter  value of 5th data :");
	scanf("%d",&fifth->data);
	
	head >next=second;
	second >next=third;
	third >next=fourth;
	fourth >next=fifth;	
	fifth >next=NULL;
	

	


	return 0;
}

typedef	struct node{
int data;
struct node*next;
}node;

