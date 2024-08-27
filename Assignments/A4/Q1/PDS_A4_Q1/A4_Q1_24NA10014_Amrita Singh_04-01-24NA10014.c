//name-Amrita Singh
//Roll no.-24NA10014
// program for printing
#include<stdio.h>
int main()
{
	int n;
	printf("enter the number");
	scanf("%d",&n);
	int x=1,y=-1;
	if(n==1)
	printf("%d",x);
	if (n==2)
	printf("%d %d",x,y);
	
	
		
	int i=3;
	if(n>=3){
			printf("%d %d",x,y);
	
		
			int a=1,b=1;
			int c;
			while(i<=n){
				c=a+b;
				
				a=b;
				b=c;
				if((i)%2==0)
				printf("%d",-1*(c));
				else
				printf(" %d",c);
				i=i+1;}}
		
	else
	printf("INVALID VALUE OF N");
	
	return 0;}
		
		
	
