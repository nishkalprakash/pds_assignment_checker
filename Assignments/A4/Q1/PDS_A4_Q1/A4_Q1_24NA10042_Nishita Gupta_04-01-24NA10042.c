// Program to Print first n terms of a series
// Code creator : Nishita Gupta
// Roll number : 24NA10042
#include<stdio.h>
int main()
{
	int n;
	printf("Enter a positive integer n:");
	scanf("%d", &n);

	if( n>0) {
			int a=1;// WE HAVE DEFINED INITIALS 1, -1
 			int b=(-1);
			printf("%d %d " , a,b);// PRINT THE INITIAL
 			for(int i=1;  i<=n; i++){ //RUNNING THE LOOP
 			int c= b-a; //INTRODUCE A NEW INTEGER C TO CONTINUE THE SERIES
 			c=c*(-1);
			a=b;
			b=c;
 			printf(" %d",c );}
		}
	else printf("N is Invalid");
	return 0;
}

