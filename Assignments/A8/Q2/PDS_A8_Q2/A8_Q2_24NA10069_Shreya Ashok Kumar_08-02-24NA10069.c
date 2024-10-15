#include <stdio.h>
void sorting(int A[],int n)
{
	int i,t;
	for(i=0;i<n;i++)
		{
		int j;
		for(j=0;j<n-i-1;j++)
			{if(A[j]>A[j+1]){
			t=A[j];
			A[j]=A[j+1];
			A[j+1]=t;}}}}
int main()
{
	int n;
	printf("\n enter the number of elements in array:");
	scanf("%d",&n);
	int A[1000];
	int i;
	for(i=0;i<n;i++)
		scanf("%d",&A[i]);
	sorting(A,n);
	int m;
	printf("\n enter the integer m:");
	scanf("%d",&m);
	
	int g,p;
	for(g=0;g<n;g++)
		{if (m<=A[g]) break;}
	
	for(p=g+1;p<n;p++)
	{A[p]=A[p-1];}
	
		
	int h;
	A[g]=m;	
	for(h=0;h<n;h++)
	printf("%d",A[h]);
	
	
	printf("Output Array:");
	A[n+1]=A[n];
	
	for(h=0;h<=n;h++)
	printf("%d",A[h]);
	return 0;
}
	
