#include <stdio.h>
#include<stdlib.h>


typedef struct node{
	int data;
	node *next;
}node;

node *createlist(int n, int A[])
{	
	node *head,*ptr;
	head=(node*)malloc(sizeof(node));
	ptr=head;
	for(int i=0;i<n-1;i++)
	{
		ptr->data=A[i];
		ptr->next=(node*)malloc(sizeof(node));
		ptr=ptr->next;
	}
	ptr->data=A[n-1];
	ptr->next=NULL;
	return head;
}

node *delete_item(int val, node ptr) {
   node prev, first;
   first = ptr; // remember start
  if (ptr == NULL) 
return NULL;
  else if (val == ptr -> data)
    { // first node is to be deleted
     ptr = ptr -> next; // second node  
        first->next = NULL;
       free(first); // free up node
    return ptr; // 2 nd node is new head
}

void printlist(node * I)
{
	if(I==NULL){
		printf("\nEMPTY LIST\n");
	}
	while(I!=NULL){
		printf("%d ",I->data);
		I=I->next;
	}
	printf("\n");
}

int main()
  {

   int n;
   printf("Enter teh no. of element in array ");
   scanf("%d",&n); 
    int m;
    printf("Enter the value to be deleted ");
    scanf("%d",&m);
  createlist(n,A[]);
    int c[];
 c[]=delete_item(m,A[]);
  printlist(c[]);
return 0;
}






