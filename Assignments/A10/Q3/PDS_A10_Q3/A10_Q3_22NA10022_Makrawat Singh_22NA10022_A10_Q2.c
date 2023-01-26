/*
 Section 14
 Roll No :22NA10022
 Name : Makrawat Singh
 Assignment No : 10
 Description :check for any dupicate element in list and also find maximum and minimum in the input list.
 */
#include<stdio.h>
#include<stdlib.h>
#define ll long long

typedef struct node{
	int d;
	struct node *next;
	
}link;
link *head;
link *ptr;

int max=0;int min=10000000;

void read(int a){
	link *temp;
	temp=(link*)malloc(sizeof(struct node));
	temp->d=a;

	temp->next = NULL;
	ptr->next=temp;
	ptr = temp;
	if(a>max){
		max=a;
	}
	if(a<min){
		min=a;
	}


}
int arr[100]={0};
void transverse(link *ptr,int a){
	int hsh=0;
	while(ptr!=NULL){
		
		if(ptr->d==a)hsh++;
		ptr=ptr->next;
	}
	if(hsh>1) arr[a]=1;
} 
int main(){
	int n,k;
	scanf("%d",&n);

	head=(link*)malloc(sizeof(struct node));
	scanf("%d",&k);
	head->d=k;
	head->next=NULL;

	max=k;
	min=k;
	ptr=head;

	for(int i=0;i<n-1;i++){
		scanf("%d",&k);
		read(k);
	}

	ptr=head;
	link *ktr;
	ktr=head;
	for (int i = 0; i < n; i++)
	{
		transverse(ptr,ktr->d);
		ktr=ktr->next;

	}

	int hsh=0;
	for (int i = 0; i < 100; i++)
	{
		if(arr[i]==1){hsh=1;}
	}

	if(hsh==0) printf("The input list doesnot contain any duplicate no. \n");
	else printf("The duplicate are \n");
	for(int i=0;i<100;i++){
		if(arr[i]==1){printf("%d ",i);hsh=1;}
	}

	printf("Minimum no. is %d\n",min);
	printf("Maximum no. is %d\n",max);

	return 0;
}