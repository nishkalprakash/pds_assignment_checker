//Program to arrange integers using arrays
//created by : Nitesh Chahar
//roll no. : 24NA10044
#include<stdio.h>
#define N 100
int main()
{
	int number[100];
	int n, l,i =0;
	scanf("%d",&n);
	
	for(i = 0; i<n ; i++)
	scanf("%d",&number[i]);
	printf("Original Array:%ls\n", &number[i]);
		for(i = 0; i<n; i++)
		printf("%d",number[i]);
	
	return 0;
}
