#include<stdio.h>
struct node{
	int data;
	struct node*next;
};

int main(){
	int i,n,a[10],temp;
	printf("Enter the number of elements");
	scanf("%d",&n);
	printf("Enter the elements you want to check ");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);}
struct node*createlist(a,n);

int i=0;

	if(a[i]<a[i+1]){
		printf("The list is in ascending order");
	}

	

	if(a[i]>a[i+1]) {
		printf("The list is in descending order");

	}
   










return 0;

}


struct node*createlist( int a[],int n){
	int i;
struct node*head,*tail;
	head=0;
	head=(struct node*)malloc(sizeof(struct node));
	head->data=a[0];
	tail=head;
for(i=0;i<n;i++)
{
	tail->next=(struct node*)malloc(sizeof(struct node));
	tail=tail->next;
	tail->data = a[i];

}
tail->next=0;


return head;


}