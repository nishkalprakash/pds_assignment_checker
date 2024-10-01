#include <stdio.h>
//computing x to power i 
int power (int x , int n)
{int t=1 ;
for(int i=1;i<=n; i++)
	{t = t*x;}
return t;
}

//computing factorial of ith term 
int fact(int n)
{int f = 1;
	for(int i=1; i<=n ; i++)
	{f = f *i;}
 return f;
}

int main()
{
	int x , n;
	float sum = 0;
	scanf("%d %d", &x , &n );
	for (int i =1 ; i< n ; i++)
	{
		sum = sum + (float)(power(x, i)/(float)fact(i));
	}
 printf("%f", 1+sum);
 
 return 0;
}
