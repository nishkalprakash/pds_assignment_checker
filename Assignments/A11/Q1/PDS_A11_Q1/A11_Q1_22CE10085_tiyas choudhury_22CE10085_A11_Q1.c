#include<stdio.h>
float harmonic(int);
int main()
{
	int n;
	printf("Enter the number of elements");//Input from user
	scanf("%d",&n);
	printf("%f",harmonic(n));//Calling Function
	return 0;
}
float harmonic(int n)
{
	float s=0.0;
	int i;
	if(n==1)
		return 1;
	

		return(1.0/n + harmonic(n-1));//Recursive Calling

}
