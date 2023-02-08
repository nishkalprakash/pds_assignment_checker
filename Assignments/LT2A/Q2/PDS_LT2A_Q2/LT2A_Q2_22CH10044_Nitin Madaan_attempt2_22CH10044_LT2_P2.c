#include<stdio.h>
#include<stdlib.h>


typedef struct SET{
	int data;
	struct SET *next;
} SET;


SET *createlist(int n, int A[])
{
	SET *head, *ptr;
	head = (SET *)malloc(sizeof(SET));
	ptr = head;
	for (int i = 0; i < n - 1; i++)
	{
		ptr->data = A[i];
		ptr->next = (SET *)malloc(sizeof(SET));
		ptr = ptr->next;
	}
	ptr->data = A[n - 1];
	ptr->next = NULL;
	return head;
}



int main()
{

  

  int n;

   SET *ptr,*ptr1,*ptr2;
  printf("Enter the number of elements you want to store in list 1:-\n");
  scanf("%d",&n);
  int A[n];

  printf("Enter elements:\n");

  for (int i = 0; i < n; i++)
  {
  	 scanf("%d",&A[i]);
  }

  int m;
printf("Enter the number of elements you want to store in list 2:-\n");
scanf("%d",&m);
int B[m];
printf("Enter elements\n");

for (int  j = 0; j  < m; j++)
  {
  	 scanf("%d",&B[j]);
  }

ptr= createlist(n,A);
ptr1=createlist(m,B);

int Q[m*n];
Q[0]=0;
int k=0;
int j =0;
int sum;

for (int i = 0; i < n; i++)
{
	for ( j = 0; j < m ; j++)
	{
		 sum = A[i]+B[j];
		 Q[k]=sum;
		 sum=0;
		 k++;
	}


}



ptr2=createlist(m*n,Q);

while(ptr2!=NULL)
{
	printf("%d",ptr2->data);
	ptr2=ptr2->next;
}



return 0;

}