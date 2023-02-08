/*
 Section 14
 Roll No : 22MT10023
 Name : HARSH GUPTA
 Assignment : LAB TEST - 2
 Description : program that prints out the given two dimensional set in reverse order using a recursive function
*/

#include <stdio.h>
#include <stdlib.h>

int m,n,c=0,*p,prod;
int count = 0;
int i=-1;
void MatrixDisplay()
{
	if(c++==0)
	{
		printf("Enter M: ");
		scanf("%d",&m);
		printf("Enter N: ");
		scanf("%d",&n);
		printf("Enter %d elements: ",m*n);
		p = (int*)malloc((m*n)*sizeof(int));
		prod = m*n;
	}
	if(i<prod-1)
	{
		scanf("%d",&p[(i++)+1]);
		MatrixDisplay();
	}
	if(count%n==0)
		printf("\n");
	if(i!=-1)
	{
		if(i==m*n-1)
			printf("OUTPUT:\n");
		printf("%d ",p[i--]);
		count++;
	}
	return;
}

int main()
{
	MatrixDisplay();
	return 0;
}
