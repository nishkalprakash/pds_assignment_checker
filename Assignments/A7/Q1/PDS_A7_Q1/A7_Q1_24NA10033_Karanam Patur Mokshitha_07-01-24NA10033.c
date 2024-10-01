#include<stdio.h>
int power(int x,int n);
int fact(int n);
int main ()
{
	int x,n;
	float sum=0.0;
	printf("Enter an integer value x:");
	scanf("%d",&x);
	printf("Enter the value n to compute %d^n where n>=10:",x);
	scanf("%d",&n);
        if(n>10){
	printf("\nValue of n should not be greater than 10");
	        }
          for(int i=0;i<n;i++){
             sum+=(float)power(x,i)/fact(i);
                           }
        printf("The sum of first %d terms of the series when x= %d is %.4f\n",n,x,sum);
        return 0;
}
int power(int a,int b)
{
	int c=1;
         for(int k=0;k<b;k++)
          {
          c*=a;
          }
          return c;
}
int fact(int n)
{
	if(n==0)
	return 1;
	int f=1;
	for(int j=1;j<=n;j++)
	{
	      f*=j;
	}
	return f;
}
	
	

                  
