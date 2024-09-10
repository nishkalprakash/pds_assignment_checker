#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
int main()
{
	int N=5,A=5,B=5;
	double y=0;
	srand(3);
	
	
	double Filter[N];
	int Bin_A[A];
	int Bin_B[B];
	
	//Q1
	//d.filling Filter
	for(int count=0;count<N;count++)
	{
	
	//generate random number x;
	//a.,b.
	
	
	int x=rand()%100+1;
	
	//c. calculate y
	
	for(int k=1;k<=x;k++)
	{
		y=y+(((k*k)/(2*k+1))-(pow(-1,k)*k)+sin(x/3));
	}
	
	Filter[count]=y;
	y=0;
	}
	
	//Q.2&3
	
	int count1=0,count2=0;
	
	while(count1<A&&count2<B)
	{
	
	//generate random number x;
	//a.
	
	
	int x=rand()%100+1;
	y=0;
	//b. calculate y
	
	for(int k=1;k<=x;k++)
	{
		y=y+(((k*k)/(2*k+1))-(pow(-1,k)*k)+sin(x/3));
	}

	
	int index=0;
	while(y==Filter[index])
	{
		index++;
	}
	//c.If y is smaller than any value In Filter,storing x into Bin_A.
	if(y<Filter[index])
	{
	Bin_A[count1]=x;
	count1++;
	}
	//c.If y is greater than any value In Filter,storing x into Bin_B.
	if(y>Filter[index])
	{
	Bin_B[count2]=x;
	count2++;
	}
		
	}
	
	//Q.4
	//display Filter
	printf("\n Filter:");
	for(int count=0;count<N;count++)
	{
		printf(" %le",Filter[count]);
	}	
	
	//display Bin_A
	printf("\n Bin_A:");
	for(int count=0;count<count1;count++)
	{
		printf(" %d",Bin_A[count]);
	}	
	
	//display Bin_B
	printf("\n Bin_B:");
	for(int count=0;count<count2;count++)
	{
		printf(" %d",Bin_B[count]);
	}	
	return 0;
}
