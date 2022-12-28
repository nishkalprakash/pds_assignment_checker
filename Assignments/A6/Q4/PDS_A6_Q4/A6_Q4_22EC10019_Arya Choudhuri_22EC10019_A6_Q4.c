/* 
	Section 14
	Roll no : 22EC10019
	Name : Arya Choudhuri
	Assignment No : 6
	Description : Program to perform set operations
*/

#include <stdio.h>
#include <stdlib.h>

int *BuildSet(int *A , int n)
{
	A = (int *)malloc(n*sizeof(int));
	int j ; 
	for ( j = 0 ; j < n ; ++j )
		scanf("%d", A+j);
	return A;
}

int SearchSet(int *A, int x ,int n)
{
	int j;
	for ( j = 0 ; j < n ; j++ )
	{
		if (A[j] == x)
			return 1;
	}
	return 0;
}

int *Union(int *A , int a , int *B ,int b , int *union_size)
{
	int size = a + b ; 
	int *ptr1 , *ptr2 ;
	ptr1 = A;
	ptr2 = B;
	for (int i = 0 ; i < s ; i++)
	


int main()
{
	int *A,*B , a, b;
	scanf("%d",&a);
	printf("A = ");
	A = BuildSet(A,a);
	scanf("%d",&b);
	printf("B = ");
	B = BuildSet(B,b);

	while (true)
	{
		int t;
		printf("Enter t--> 1: SearchA 2: SearchB 3: Union 4:Intersection 5: Diff")
		scanf("%d" , &t);
		if( (t!=1)&&(t!=2)&&(t!=3)&&(t!=4)&&(t!=5))
			break;
		if (t==1)
		{
			scanf("%d",&x);
			if (SearchSet(A,x,a) == 1) 
				printf("present");
			else
				printf("not present");
		






