//Roll no:<23MT30029>
//Name:<Tanaya Moghe>

#include <stdio.h>
int main()
{ 
	int a,b,i,k,j,l;
	printf("Enter total number of kilometers travelled\n");
	scanf("%d", &b);
	printf("Enter number of hours the taxi was retained\n");
	scanf("%d", &a);
		if(a<1)
			(j=0);
		else if(1<=a && a<=12)
			(j=200);
		else if (12<a && a<=24)
			(j=500);
		else if (a>24)
			{	i= a/24;
				j= 500 + 300*(i+1);
			}
		if(b<=8)
			(k=20);
		else if(8<b && b<=12)
			(k=10*b);
		else if(12<b && b<=16)
			(k=8*b);
		else if(16<b && b<=20)
			(k=6*b);
		else if(20<b)
			(k=5*b);
	l=j+k;
	printf("The taxi fare is %d rupees\n", l);
	return 0;
	}



