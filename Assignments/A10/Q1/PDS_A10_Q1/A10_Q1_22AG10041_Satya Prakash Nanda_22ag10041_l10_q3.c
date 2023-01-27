/*
SATYA PRAKASH NANDA
22AG10041
SECTION 14
LAB 10
QUESTION 3
*/
#include<stdio.h>
typedef struct node{
	int data;
	struct node*next;
}n;

void printlist(n*l){
	while(l!=NULL){
		printf("element:%d\n",l->data);
		l=l->next;
	}
}
n*createlist(int n, int a[]){
	n*head=NULL;
	n*tail;
	int i;
	if(n>0){
		head=(n*)malloc(sizeof(n));
		head->data=a[0];
		tail=head;
		for(int i=1;i<n;i++){
			tail->next=(n*)malloc(sizeof(n));
			tail=tail->next;
			tail->data=a[i];
		}
		tail->next=NULL;
	}
return head;
}

int main(){
int n;
printf("enter n:");
scanf("%d", &n);
int arr[n];
for(int i=0; i<n; i++){
	printf("enter %d number:", i+1);
	scanf("%d", &arr[i]);
}
n*head=createlist(n, arr);
printlist(head);


return 0;
}
