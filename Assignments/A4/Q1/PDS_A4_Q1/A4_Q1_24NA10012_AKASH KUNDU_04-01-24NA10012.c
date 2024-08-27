//program to write fibonacci sequence wher alternating numbers are negative
//Akash Kundu
//24NA10012

#include<stdio.h>
int main()
{
	int a=0,b=1,c,n,count,extra;  //c is a buffer variable, extra is for sign of last number
	printf("Enter the length of sequence(N>0) : ");
	scanf("%d",&n);
	if (n<=0) {printf("N is invalid");
		   return 0; }
	
	printf("%d, ",b);
	for (count=1; count<(n-1); count++)
	{	c=a+b;
		a=b;
		b=c;
		if (count%2==0) {printf("%d, ",b);
				 extra=-1;}
		else {printf("%d, ",b*(-1));
		      extra=1;}
	}
	printf("%d",(a+b)*extra);
	return 0;
}	
