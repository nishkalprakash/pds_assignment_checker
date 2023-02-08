#include<stdio.h>
#include<stdlib.h>


void print(int,int);


int main()
{
    int m,n;
	printf("enter M :");
	scanf("%d",&m);
	printf("enter N :");
	scanf("%d",&n);
    print(m,n);



}

void print(int i,int j)
{   
	printf("Enter the %d elements :",i*j);
	int A[i][j];
	for(int a=0;a<i;a++)
	{
		for(int b=0;b<j;b++)
		{
			scanf("%d",&A[a][b]);
		}
	}
   
	for(int a=i-1;a>=0;a--)
	{
		for(int b=j-1;b>=0;b--)
		{
			printf("%d ",A[a][b]);
		}
		printf("\n");
	}


}