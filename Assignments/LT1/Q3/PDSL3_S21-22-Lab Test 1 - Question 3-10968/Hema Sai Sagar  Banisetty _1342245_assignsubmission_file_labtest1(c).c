/*
Name            : Banisetty Hema Sai Sagar
Roll            : 21EC10011
Dept            : E&ECE
Package         : Code Blocks
Assignment Class: 6
*/
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main()
{
	 srand(time(0));
	 int i,n,a,b;
	 printf("entre n");
	 scanf("%d",&n);
	 for(i=0;i<n;i++)
	 {
	 	printf("entre a and b numbers");
	 	scanf("%d%d",&a,&b);
	 	int c1=0,c2=0;
	 	while(a!=0)
	 	{
	 		a=a/10;
	 		c1++;
		}
		while(b!=0)
		{
			b=b/10;
	 		c2++;
		}
	 	if(c1<c2)
	 	{

		}
	 }
}
