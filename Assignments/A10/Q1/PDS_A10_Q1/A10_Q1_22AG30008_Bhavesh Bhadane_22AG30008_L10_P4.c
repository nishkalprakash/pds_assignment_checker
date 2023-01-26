#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node*next;
};

int main (){
  int n,a[10];
  printf("Enter the number of nodes");
  scanf("%d",&n);
  printf("Enter the elements");
  for(i=0;i<n;i++){
  	scanf("%d",&a[i]);
  }
  struct node*createlist(n,a);
  printlist(head);
return 0;
}

struct node*createlist( int n,int a[]){
	int i;
struct node*head,*tail,*temp;

	head=(struct node*)malloc(sizeof(struct node));
	head->data=a[0];
	tail=head;
for(i=0;i<n;i++)
{
	temp=(struct node*)malloc(sizeof(struct node));
	temp->data=a[i];
	tail->next=temp;
	tail=temp;
	

}
tail->next=NULL;


return head;


}

void printlist(struct node*l){
	struct node*list = l;
	while(list !=NULL){
		printf("%d",list->data);
		if(list->next=NULL){
			prinf("End");
		}

		list = list->next;
	}
}