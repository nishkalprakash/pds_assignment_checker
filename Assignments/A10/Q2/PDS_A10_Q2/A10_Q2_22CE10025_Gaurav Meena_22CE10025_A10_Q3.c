/*NAME-GAURAV MEENA
ROLL NO-22CE10025
SECTION -14
Q no-3
*/

#include<stdio.h>
#include<stdlib.h>

struct list{
	int data;
	struct list*next;
};

struct list*head;
struct list*tail;


void insert(){
	int value;
	struct list*ptr;
	ptr=(struct list*)malloc(sizeof(struct list));
	printf("Enter value:");
	scanf("%d",&value);
	if(head==NULL){
		head=ptr;
		tail=head;
		ptr->data=value;
		ptr->next=NULL;
	}
	else{
		tail->next=ptr;
		tail=ptr;
		ptr->data=value;
		ptr->next=NULL;

	}
}
int check(){
	struct list*temp=head;
	struct list*prev=head;
	int flag=0;int count=1;
	int aflag=0;
	int dflag=0;
	if(count==1){
		temp=temp->next;
	}
	while(temp!=NULL){
		if((prev->data)>(temp->data))
			dflag=1;
		else{
			dflag=0;
			break;
		}
		prev=temp;
		temp=temp->next;
	}
	if(dflag==1)
	return -1;
    if(aflag==0 && dflag==0)
    	return 0;
}

int main(){
	int n;
	printf("Enter number of elements in the list:");
	scanf("%d",&n);
	printf("Enter elements:\n");
	for(int i=0;i<n;i++){
		 insert();
	}
	int x=check();
	if(x==1)
		printf("ascending order\n ");
	
	else if(x=-1)
		printf("descending order\n");
	
	else 
		printf("NOT SORTED");
	



	return 0;
	
}


