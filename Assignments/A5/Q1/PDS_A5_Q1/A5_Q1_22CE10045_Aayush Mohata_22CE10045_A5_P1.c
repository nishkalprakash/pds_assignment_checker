/* 
Section 14
Roll No:22CE10045
Name : Aayush Ujwal Mohata
Assignment No:5
Discription :To find the n term of expansion e^x

*/
#include<stdio.h>

float power(int y,int n)
{
	int i,power_n=1;
	for(i=1;i<=n;i++)
		(power_n)*=y;
	
	return power_n;
}
int fact(int n)
{
	int fact_n=1,i;
	for(i=1;i<=n;i++)
		fact_n*=i;
	return fact_n;
}
int main()
{
	int j,x,N;
	float sum=0;
	printf("Enter the values of x and N\n");
	scanf("%d %d",&x,&N);
	for(j=0;j<N;j++)
		sum=sum+(float)power(x,j)/fact(j);
	
	printf("%.4f",sum);
	return 0;


}

			
