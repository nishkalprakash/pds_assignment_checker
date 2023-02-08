#include<stdio.h>
#include<stdlib.h>
void recursion(int [],int,int,int);
int main()
{
	int A[100][100];
	int flag=0;
	recursion(A,0,0,flag);

}

void recursion(int A[][],int i,int j,int flag)
{
	int M,N;
int *p=A;
if(flag==0)
{
	printf("Enter the value of M and N:");
	scanf("%d %d",&M,&N);
	p=(int*)malloc(M*N*sizeof(int));

	printf("Enter the array elements");




for(i=0;i<M;i++)
	{ for(j=0;j<N;j++)
		{
			scanf("%d",&A[i][j]);
}

}
}
flag++;

for(i=0;i<M;i++)
{
	for(j=0;j<N;j++);
	{
		recursion(A,i,j,flag);
	}
}
 printf("%d",A[M-1-i][N-1-j]);
return;

}
