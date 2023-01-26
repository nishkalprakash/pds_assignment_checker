#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node*next;
};

int main(){
	int i,n,a[10],temp;
	printf("Enter the number of nodes");
	scanf("%d",&n);
	printf("Enter the elements you want to be in list");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);}
struct node* dup(a,n);
for(i=0;i<n;i++){
	if(a[i+1]<a[i]){
		temp=a[i+1];
		a[i+1]=a[i];
		a[i]=temp;

	}
}
printf("Maximum number is %d",a[n-1]);
printf("Minimum number is %d",a[0]);

return 0;
	}


struct node* dup( int a[],int n){
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