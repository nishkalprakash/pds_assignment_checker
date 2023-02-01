/*
 *Sec           : 14
 *Name          : Tejasree Sai
 *Roll no       : 22CS10009
 *Assignment no : 11
 *Description   : deleting in list
 */

#include<stdio.h>
#include<stdlib.h>
 struct node{
	int data;
	struct node *next;
};

struct node *createlist(int n, int A[])
{	
	struct node *head,*ptr;
	head=(struct node*)malloc(sizeof(struct node));
	ptr=head;
	for(int i=0;i<n-1;i++)
	{
		ptr->data=A[i];
		ptr->next=(struct node*)malloc(sizeof(struct node));
		ptr=ptr->next;
	}
	ptr->data=A[n-1];
	ptr->next=NULL;
	return head;
}

void print(struct node * I)
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

struct node*delete(int m,struct node*head)
{
  struct node*temp,*prev;
  temp=head;
  prev=0;
 if(m==head->data)
  {
    temp=head->next;
    head->next=0;
    free(head);
    head=temp;
  }
  else
   {
      while(temp->next!=0 && m!=temp->data)
      {  prev=temp;
        temp=temp->next;
      }
    if(prev->data!=m)
      printf("%d is not in the list",m);
   prev->next=temp->next;
   temp->next=0;
   free(temp);
  }
 return head;
}

int main ()
{
  int n,m,*a;
  printf("Enter n value\n");
  scanf("%d",&n);
  a=(int*)malloc(n*sizeof(int));
  for(int i=0;i<n;i++)
     scanf("%d",&a[i]);
  struct node*head;
   head=createlist(n,a);
  printf("Enter m :\n");
  scanf("%d",&m);
  head=delete(m,head);
  printf("Final list  is : ");
  print(head);
  return 0;
}
  
    
