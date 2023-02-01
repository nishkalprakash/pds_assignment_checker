#include<stdio.h>

typedef struct node{
	int data;
	struct node*next;
}list;
 
 

 list*insert(list*head,int m,int a[]){
int i=0;

list*ptr = (list*)malloc(sizeof(list));
list*ptr = &a[0];
list*p = head;

while(ptr->data < m){
	p=p->next;

}

ptr->data=m;
ptr->next=p->next;
p->next=ptr;
return head;


}

int main(){
	int n,a[n],m;
	printf("Enter the number of elements in linked list");
	scanf("%d",&n);
	printf("Enter elements in linked list");
  for(i=0;i<n;i++){
  	scanf("%d",a[i]);
  }

  printf("Enter the element to be inserted");
  scanf("%d",&m);
  list*head= (list*)malloc(sizeof(list));

list*insert(head,m,a);

while(ptr->next!= NULL){
printf("%d",ptr->data)
ptr=ptr->next;
}

return 0;
}