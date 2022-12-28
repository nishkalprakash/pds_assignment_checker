#include<stdio.h>	//this is an standerd input output header file
int main(){
	int findMax(int A[ ], int n)
{
	
int temp;
if (n==1)
{
return A[0];
}
temp = findMax(A, n-1);
if (A[n-1] > temp)
return A[n-1];
else return temp;
}
	
return 0;
}
