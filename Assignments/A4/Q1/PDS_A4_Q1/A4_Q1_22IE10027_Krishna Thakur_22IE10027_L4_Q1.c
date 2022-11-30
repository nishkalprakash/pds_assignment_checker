#include <stdio.h>

int main()
{
	int a;
	printf("Enter any integer between -999999, 999999\n");
	scanf("%d", &a);
	int n=1;
	int p;
	if(a<0)
		a=a*(-1);
	if(a==0)
			printf("0");
	while(n<=a){
		if ((a>999999)||(a<-999999)){
			printf("The number is out of range");
			break;
		}
		p=a%n;
		if (p==0)
			printf("%d\n", n);
		n=n+1;
	}
	return 0;
}

		