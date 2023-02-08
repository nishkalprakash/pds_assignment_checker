#include<stdio.h>
#include<stdlib.h>
struct node 
{
int data;
struct node *next;
};
int main()
{
int n,m;
printf("Enter N: ");
scanf("%d",&n);
int *A;
A=(int*)malloc(n*sizeof(int));
for(int i=0;i<n;i++)
{
scanf("%d",&A[i]);
}
printf("Enter N: ");
scanf("%d",&m);
int *B;
B=(int*)malloc(m*sizeof(int));
for(int i=0;i<m;i++)
{
scanf("%d",&B[i]);
}
int *C;
int k=0;
C=(int*)malloc((m*n)*sizeof(int));
for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
			{
				C[k]=A[i]+B[j];
				k++;
			}
	}
int *D;
int f=0;
D=(int*)malloc((m+n)*sizeof(int));
for(int i=0;i<k;i++)
	{
		D[f]=C[i];
		for(int j=i;j<k;j++)
			{
			if(D[f]==C[j])
			break;
			}
			f++;
	}
printf("L1 = ");
printf("{");
for(int i=0;i<n;i++)
{
printf("%d ",A[i]);
}
printf("}");
printf("\n");
printf("+");
printf("\n");
printf("L2 = ");
printf("{");
for(int i=0;i<m;i++)
{
printf("%d ",B[i]);
}
printf("}");
printf("\n");
printf("L = ");
printf("{");
for(int i=0;i<f;i++)
{
printf("%d ",D[i]);
}
printf("}");

return 0;
}
