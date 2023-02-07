/*NAME-GAURAV MEENA
ROLL NO-22CE10025
SECTION -14
*/

#include<stdio.h>
#include<stdlib.h>

struct list{
	int data;
	struct list*next;
};

struct list*createlist(int n,int a[])
{
	struct list*ptr,*head=NULL;
	int value;
	ptr=(struct list*)malloc(sizeof(struct list));
	ptr->data=a[0];
	ptr->next=NULL;
	if(head==null){
		head=ptr;
		temp=ptr;
	}
	for(int i=1;i<n;i++){

	ptr=(struct list*)malloc(sizeof(struct list));
	ptr->data=a[0];
	ptr->next=NULL;
	0
	temp->next=ptr;
	temp=ptr;
	}
	return head;

	void printlist(struct list*head){
		struct list*temp=head;
		while(temp!=NULL){
			printf("%d",temp->data);
		
		temp=temp->next;
	}

}
int main(){
	int n;
	printf("Enter number of elements:");
	scanf("%d",&n);
	printf("Enter elements in array");
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
		printlist();
	}

return 0;



}

	
		
	
