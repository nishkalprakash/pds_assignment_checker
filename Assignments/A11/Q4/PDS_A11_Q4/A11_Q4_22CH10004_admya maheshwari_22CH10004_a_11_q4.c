/* 	   SECTION        : 14
	   ROLL NO.       : 22CH10004
	   NAME           : ADMYA MAHESHWARI
	   ASSIGNMENT NO. : 11
	   DESCRIPTION    : A C program to delete a value from linked list 
*/


#include<stdio.h>
#include<stdlib.h>
//define a structure
struct node{

	int data;
	struct node*next;
}node;

int main(){
//defining the list
struct node*head;
struct node*second;
struct node*third;
struct node*fourth;
struct node*fifth;
// allocating memory in the hoop
head =(node *)malloc(sizeof(node));
second =(node *)malloc(sizeof(node));
third =(node *)malloc(sizeof(node));
fourth =(node *)malloc(sizeof(node));
fifth =(node *)malloc(sizeof(node));
//entering values
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
