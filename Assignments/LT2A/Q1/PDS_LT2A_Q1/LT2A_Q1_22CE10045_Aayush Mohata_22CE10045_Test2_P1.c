/* 
Section 14
Roll No:22CE10045
Name : Aayush Ujwal Mohata
Test No:2
Que No:1
Discription :

*/
#include<stdio.h>
#include<stdlib.h>
void inputs(int *m,int *n)
{
	printf("Enter M :");
	scanf("%d",m);
	printf("Enter N :");
	scanf("%d",n);

}

void inputs_array(int* arr[],int m,int n)
{
	printf("Enter the %d elements",m*n);
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
}
void print(int* arr[],int m,int n)
{
	for(int i=m-1;0<=i;i--)
	{
		for(int j=n-1;0<=j;j--)
			{
			printf("%d  ",arr[i][j]);
			}
	printf("\n");
	}

}

int main()
{
	int m,n;
	inputs(&m,&n);
	int *arr[m];
	for(int i=0;i<m;i++)
	{
		arr[i]=(int*)malloc((n)*sizeof(int));
	}
	inputs_array(arr,m,n);
	print(arr,m,n);
}




