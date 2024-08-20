#include <stdio.h>
/*A program that takes four integers as input
	prints "YES" if exactly two of them are equal
	"NO" otheriwse*/

int main()
{
	int a, b, c, d;
	scanf("%d %d %d %d", &a, &b, &c, &d);	//taking four input from user
	if(a==b && (a!=c && a!=d))              //EXACTLY two integers out of the four should be equal
		printf("YES");
	else if(a==c && (a!=b && a!=c))
		printf("YES");
	else if(a==d && (a!=b && a!=c))
		printf("YES");
	else if(b==c && (b!=d && b!=a))
		printf("YES");
	else if(b==d && (b!=c && b!=a))
		printf("YES");
	else if(c==d && (c!=a && c!=b))
		printf("YES");
	else
		printf("NO");                  
	return 0;
}

