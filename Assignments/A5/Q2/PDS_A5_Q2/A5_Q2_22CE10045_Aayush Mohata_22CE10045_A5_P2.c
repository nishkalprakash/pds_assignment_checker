/* 
Section 14
Roll No:22CE10045
Name : Aayush Ujwal Mohata
Assignment No:5
Discription :To find the co-prime pair in array

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
#include<stdio.h>
void pair(int b[])
{
	int col,row,c;
	for(col=0;col<5;col++)
	{
		for(row=col+1;row<5;row++)
		{
			if(gcd(b[col],b[row])==1)
			{
				printf("%d and %d are co prime\n",b[col],b[row]);
				c=1;
			}
			 
		}
			
	}
	if(c==0)
		{
			printf("no co-prime found");
		}
	
}
int gcd(int a,int b)
{

	int temp;
	if (a> b) {
	temp = a; a = b; b = temp;
	}
	while ((b % a) != 0) {
	temp = b % a;
	b= a;
	a = temp;
	}
	return a;
}
int main()
{
	
	int ar[5],i;
	printf("Enter the numbers");
	for(i=0;i<5;i++)
		scanf("%d",&ar[i]);
	pair(ar);
			
	return 0;

}

