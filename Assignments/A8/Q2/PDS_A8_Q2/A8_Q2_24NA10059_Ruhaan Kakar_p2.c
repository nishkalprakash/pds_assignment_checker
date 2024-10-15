#include <stdio.h>

int min( int x[], int a , int size)
{
	int c, loc;
	loc = a;
	for(c = a + 1; c<size; c++)
	if (x[c] < x[loc])
		loc = c;
	return loc;
}

void sort(int x[],int size)
{ 
int a, b, temp;
for(a = 0 ; a < size-1 ; a++){
	b = min( x,a,size);
	/*SWAPPING*/	
	temp = x[a];
	x[a] = x[b];
	x[b] = temp;
	}
}
	
int main()
{
int m,n,i;
printf("n = ");
scanf("%d",&n);
int A[101];
printf("A[n] = ");
for (i=0;i<n;i++)
	scanf("%d",&A[i]);
printf("m = ");
scanf("%d",&m);
A[n] = m;
sort(A,n+1);
printf("\nOutput Array = ");
for (i=0;i<n+1;i++)
	printf("%d ",A[i]);
return 0;
}
