//LAB4 Looping
// Deepak Jangir
// 24NA10023

#include<stdio.h>

int main()

{
	int N, sum=0, i;
	printf("enter N : ");
	scanf("%d", &N);
	
	int a=1, b=-1, c;
	   
	   
	   printf("%d", a);
	   printf("%d", -b);
	   
	   for(i=2; i<=N; i++){
	   c=a+b;printf("%d", c);
	   a=b;
	   b=c;}
	   
	   return 0;
}
