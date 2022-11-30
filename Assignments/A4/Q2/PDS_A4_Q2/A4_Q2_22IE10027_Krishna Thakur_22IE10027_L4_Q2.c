#include <stdio.h>
int main(){
	int a, b, c=0, d;
	printf("Enter any number between -999999 and 999999\n");
	scanf("%d", &a);
	for(;a;){
		b=(a/100000);
		a=(a-(100000*b));
		c=c+b;
		b=(a/10000);
		a=(a-(10000*b));
		c=c+b;
		b=(a/1000);
		a=(a-(1000*b));
		c=c+b;
		b=(a/100);
		a=(a-(100*b));
		c=c+b;
		b=(a/10);
		a=(a-(10*b));
		c=c+b;
		c=c+a;
		printf("%d\n", c);
		a=a-a;
	}
	return 0;
	
	
}