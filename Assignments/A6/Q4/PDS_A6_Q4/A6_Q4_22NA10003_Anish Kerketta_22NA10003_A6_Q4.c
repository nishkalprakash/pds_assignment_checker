/*
Section 14
Roll No : 22NA10003
Name : Anish Kerketta
Assignment No : 6-4
Description : To perform a set of task as per user's command
*/
#include<stdio.h>
int BuildSet(int n)
{
	
}
int SearchSet1(int *A, int x, int size1)					//Search set for A
{
	int i,c=0;
	for(i=0;i<size1;i++)
	{
	if(A[i]==x)	
	c=1;
	}
	if(c==1)	
	printf("%d is present in A[]\n",x);
	else
	printf("%d is not present in A[]\n",x);
}
int SearchSet2(int *B, int x,int size2)						//Searchset for b
{
	int i,c=0;
	for(i=0;i<size2;i++)
	{
	if(B[i]==x)	
	c=1;
	}
	if(c==1)	
	printf("%d is present in B[]\n",x);
	else
	printf("%d is not present in B[]\n",x);
}
int Union(int *A,int *B,int a,int b)						//incomplete
{
	int i,j=0;
	int size3=a+b;
	int C[size3];
	for(i=0;i<a;i++)
	{
	printf("a%d ",A[i]);
	}
	for(i=0;i<b;i++)
	{
	printf("b%d ",B[i]);
	}
	for(i=0;i<a;i++);
		{
		C[i]=A[i];
		}
	for(i=0;i<a;i++)
	{
	printf("\n%d ",C[i]);
	}
	for(i=a;i<size3;i++);
		{
		C[i]=B[j];
		j++;
		}
	for(i=0;i<a+b;i++)
	{
	printf("%d ",C[i]);
	}
	return 0;
}
int Intersection(int *A,int *B)
{
	printf("In 4");
	return 0;
}
int Difference(int *A,int *B)
{
	printf("In 5");
	return 0;
}
int main()					
{	int i,n,x,size1,size2;					//initialsing
	printf("\nSize of array A:");				//write
	scanf("%d",&size1);
	int A[size1];
	for(i=0;i<size1;i++)
	{
	scanf("%d",&A[i]);
	}
	printf("\nSize of array B:");				/write
	scanf("%d",&size2);
	int B[size2];
	for(i=0;i<size2;i++)
	{
	scanf("%d",&B[i]);
	}
	printf("\n Press '1' to perform search in Set A\n Press '2' to perform search in Set B\n Press '3' to perform Union of Set A and Set B\n Press '4' to perform Intersection of Set A and Set B\n Press '5' to perform Difference of Set A and Set B\n Press any other key to quit\n");//write
	scanf("%d",&n);
	switch(n)						//switch
	{
	case 1:	scanf("%d",&x);
		SearchSet1(A,x,size1);
		break;
	case 2:scanf("%d",&x);
		SearchSet2(B,x,size2);
		break;
	case 3:Union(A,B,size1,size2);
		break;
	case 4:Intersection(A,B);
		break;
	case 5:Difference(A,B);
		break;
	default:
		break;
	}
}

