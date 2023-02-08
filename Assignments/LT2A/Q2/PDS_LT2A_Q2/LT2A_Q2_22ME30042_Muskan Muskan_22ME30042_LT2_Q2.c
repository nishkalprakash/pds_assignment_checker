/* Section 14
   Muskan
   Lab Test-2
   Roll No.- 22ME30042
*/
#include<stdio.h>
#include<stdlib.h>
#define max 100
  

typedef struct set{
           int data;
           struct set *next;
         }set;


set *createlist(int n, int A[])
{
	set *head, *ptr;
	head = (set *)malloc(sizeof(set));
	ptr = head;
	for (int i = 0; i < n - 1; i++)
	{
		ptr->data = A[i];
		ptr->next = (set *)malloc(sizeof(set));
		ptr = ptr->next;
	}
	ptr->data = A[n - 1];
	ptr->next = NULL;
	return head;
}

void printlist(set *I)
{
	if (I == NULL)
	{
		printf("\nEMPTY LIST\n");
	}
	while (I != NULL)
	{
		printf("%d ", I->data);
		I = I->next;
	}
	printf("\n");
}



int min(int C[],int l3) 
{  int min1=C[0];
for(int i=1;i<l3;i++)
{
if(min1>C[i])
min1=C[i];
}
return min1;
}
 
int MAX(int C[],int l3) 
{  int max1=C[0];
for(int i=1;i<l3;i++)
{
if(max<C[i])
max1=C[i];
}
return max1;
}


void adding_list(int A[],int B[],int m,int n)
{
int i,j,k=0;

int C[max];
printf("List 3 elements will be:\n");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
C[k]=A[i]+B[j];
k++;
}
}
int l3=k;
for(i=0;i<l3;i++)
{
printf("%d ",C[i]);
}
printf("\n");
int min1=min(C,l3);
int max1=MAX(C,l3);  //by finding the range we can find how many times one element coming in the array



}



int main()
{
int m,n,i;  //no of elements for l1 is m and l2 is n
set *head;
printf("Enter m:\n");
scanf("%d",&m);
printf("Enter n:\n");
scanf("%d",&n);
int A[max],B[max];
printf("Enter list 1 elements:\n");
for (int i = 0; i < m; i++)
		scanf("%d", &A[i]);
	head = createlist(m, A);
 printlist(head);  

printf("Enter list 2 elements:\n");
for (int i = 0; i < n; i++)
		scanf("%d", &B[i]);
	head = createlist(n, B);
  printlist(head);  
 adding_list(A,B,m,n);

return 0;
}
