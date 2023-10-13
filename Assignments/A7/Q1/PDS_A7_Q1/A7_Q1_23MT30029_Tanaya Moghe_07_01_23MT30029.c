//Roll no:<23MT30029>
//Name:<Tanaya Moghe>

#include <stdio.h>
#include <stdlib.h>

int findMax(int A[][20], int x, int y)
{ 
	int a,b,i,j,sum=0,max=0,k,l;
	for(a=0; a<x-2; a++)
		{
			for(b=0; b<y-2; b++)
			{ 
				sum= (A[a][b]+A[a][b+1]+A[a][b+2]+A[a+1][b]+A[a+1][b+1]+A[a+1][b+2]+A[a+2][b]+A[a+2][b+1]+A[a+2][b+2]);
				if(sum>max) 
				{ 
					max=sum;
					i=a;
					j=b;
                                        //printf("i=%d\n", i);
				}
			}
		//printf("a=%d ", a);
		}
        //printf("i1=%d\n", i);
	printf("The maximum sum is %d\n", max);
	for(k=i; k<i+3; k++)
	{  //printf("i=%d\n", i);
		for(l=j; l<j+3; l++)
		{
			printf("data[%d][%d]=%d\n", k,l,A[k][l]);
		}
	}
	return 0;
}



int findMin(int A[][20], int x, int y)
{ 
	int a,b,i,j,k,l,sum=0,min=100;
	for(a=0; a<x-2; a++)
		{
			for(b=0; b<y-2; b++)
			{ 
				sum= (A[a][b]+A[a][b+1]+A[a][b+2]+A[a+1][b]+A[a+1][b+1]+A[a+1][b+2]+A[a+2][b]+A[a+2][b+1]+A[a+2][b+2]);
				if(sum<min) 
				{ 
					min=sum;
					i=a;
					j=b;
				}
			}
		}
	printf("The minimum sum is %d\n", min);
	for(k=i; k<i+3; k++)
	{
		for(l=j; l<j+3; l++)
		{
			printf("data[%d][%d]=%d\n", k,l,A[k][l]);
		}
	}
	return 0;

}

int findMinMax(int A[][20], int x, int y)
{ 
	int a,b,max=0,min=11, max1=0,min1=11;
	int B[x];
	int C[x];
	for(a=0; a<x; a++)
		{ max=0;min=11;
			for(b=0; b<y; b++)
			{ 
				if( A[a][b]>max)
				{
					max=A[a][b];
					B[a]=max;
				}
				if( A[a][b]<min)
				{
					min=A[a][b];
					C[a]=min;
				}
			}
		}
	for(a=0; a<x; a++)
	{
		if(B[a]>max1) {max1=B[a];}
		if(C[a]<min1) {min1=C[a];}
	}
	printf("Max of the rows is\n");
	for (a=0; a<x; a++)
	printf("B[%d]=%d\n", a,B[a]);
	printf("Max of this is %d\n", max1);
	printf("Min of the rows is\n");
	for (a=0; a<x; a++)
	printf("C[%d]=%d\n", a,C[a]);
	printf("Min of this is %d\n", min1);
	return 0;
}
	



int main()
{ 
	int m,n,i,j,k;
	int data[20][20];
	printf("Enter the number of rows and columns which should be less than 20 and greater than 2 respectively\n");
	scanf("%d %d", &m, &n);
	for(i=0; i<m; i++)
	{
		for(j=0; j<n; j++)
		{
			k=rand()%11;
			data[i][j]=k;
		}
	}
	for(i=0; i<m; i++)
	{
		for(j=0; j<n; j++)
		{
			printf("data[%d][%d]=%d\n", i,j,data[i][j]);
		}
	}
	findMax(data,m,n);
	findMin(data,m,n);
	findMinMax(data,m,n);
	
	return 0;
} 


