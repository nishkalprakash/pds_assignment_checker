/* 
Section 14
Roll No:22CE10045
Name : Aayush Ujwal Mohata
Assignment No:11
Discription :

*/
#include<stdio.h>
float sum=0;
float Harmonic_sum(int i,int n)
{
	if(i==n+1)
		return 0;
	else
		sum=1.0/i+Harmonic_sum(++i,n);
		return sum;
}
int main()
{
	int n,i=1;
	printf("Enter the value of N :");
	scanf("%d",&n);
	printf("%f",Harmonic_sum(i,n));
	return 0;

}

