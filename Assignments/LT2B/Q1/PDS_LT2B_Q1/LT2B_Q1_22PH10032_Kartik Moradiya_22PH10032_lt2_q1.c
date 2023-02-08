#include<stdio.h>
#include<stdlib.h> 
#define MAX 100

  typedef struct SET{
    char data;
     struct SET *next;

  }SET;
  
   SET *L1(int n, char A[])
  {	
	SET *head,*ptr;
	head=(SET*)malloc(sizeof(SET));
	ptr=head;
	for(int i=0;i<n-1;i++)
	{
		ptr->data=A[i];
		ptr->next=(SET*)malloc(sizeof(SET));
		ptr=ptr->next;
	}
	ptr->data=A[n];
	ptr->next=NULL;
	return head;
 }
 
   SET *L2(int m, char B[])
  {	
	SET *head2,*ptr;
	head2=(SET*)malloc(sizeof(SET));
	ptr=head2;
	for(int i=0;i<m-1;i++)
	{
		ptr->data=B[i];
		ptr->next=(SET*)malloc(sizeof(SET));
		ptr=ptr->next;
	}
	ptr->data=B[m-1];
	ptr->next=NULL;
	return head2;
 }
 
  SET *L(char A[],char B[],char C[],int m,int n){
     SET *head,*ptr;
     head=(SET*)malloc(sizeof(SET));
     ptr=head;
	
	
     for(int i=0;i<n;i++){
      for(int j=0;j<m;j++){
       if(A[i]!=B[j]){
            ptr->data=A[i];
            ptr->next=(SET*)malloc(sizeof(SET));
	    ptr=ptr->next;
          }
        }
     
      }
     ptr->data=C[n-1];
     ptr->next=NULL;
     return head;
  
  }
  
  
  void minus(SET *head2, SET *head1)
  {
    SET *temp1 = head1, *prev1 = head1;
    SET *temp2 = head2, *prev2 = head2;
    while (temp1 != NULL)
    {
        if (temp1->data == temp2->data)
        {
            

            // when temp is the first node
            if (temp1 == head1)
            {
                head1 = temp1->next;
                free(temp1);
                printf("\nElement deleted. The new list is: ");
                printList(head1);
                return;
            }

            prev1->next = temp1->next;
            free(temp1);
            printf("\nElement deleted. The new list is: ");
            printList(head1);
            return;
        }
        prev1 = temp1;
        temp1 = temp1->next;
    }
    
}

   
   void printList(SET *head)
   {
    SET *temp = head;
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
   }

 int main(){
	int m,N;          //N is length of  list l1 and m is the length of list l2
	char A[MAX],B[MAX],C[MAX];
	SET *head1;
	SET *head2;
	SET *head;
	printf("Enter N,m: ");
	scanf("%d\n%d",&N,&m);
	
	printf("enter the element of list");
	for(int i=0;i<N;i++)
		scanf("%c\n",&A[i]);
		
	printf("enter the element of list L2");
	for(int i=0;i<m;i++)
		scanf("%c\n",&B[i]);	
		
	head1=L1(N,A);
	
	
	head2=L2(m,B);
	
	head=L(A,B,C,m,N);
	
	minus(L2,L1);
	
	return 0;
  }
