/*
Section 14
Roll no : 22CS30028
Name : Harsh Chattar
Assignment No. : 10
Description :  Checking for duplicates in linked list and also finding max and min in the list.
*/

#include <stdio.h>
#include <stdlib.h>

struct node{
int data;
struct node *link;
};

int main(){

int n;
printf("Enter no. of elements : ");
scanf("%d",&n);
int arr[n];
printf("Enter list elements :");
for(int i=0;i<n;i++){
	scanf("%d",&arr[i]);
}
struct node *head = NULL,*tail;
head = malloc(sizeof(struct node));
head->data = arr[0];
tail = head;

for(int i=1;i<n;i++){
	tail->link = malloc(sizeof(struct node));
	tail=tail->link;
	tail->data = arr[i];
}
tail->link=NULL;



struct node *temp,*t;
temp = head;

int c=0;
int max = arr[0];
int min = arr[0];
int dup[n];
while(temp!=NULL){
	if(max<temp->data) max = temp->data;
	if(min>temp->data) min = temp->data;
	t = temp;
	while(t!=NULL){
		if(t!=temp && t->data == temp->data){
			dup[c]=temp->data;
			c++;
		}
	t=t->link;
	}
			
	temp = temp->link;
}

if(c==0) printf("The input list does not contain any duplicates \n");
else{
printf("The Input list contains duplicate numbers of : ");
for(int i=0;i<c;i++){
	printf("%d ",dup[i]);
}
printf("\n");
}

printf("Maximum no.is %d \n",max);
printf("Minimum no. is %d \n",min);


 








return 0;
}
