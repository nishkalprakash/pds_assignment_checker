#include <stdio.h>
int main()
{
	int a, b, c, d;
	printf("enter four integers a, b, c and d");
	scanf("%d%d%d%d", &a, &b, &c, &d );
	
	int count;
	if (a == b) count++ ;
	if (b== c) count++;
	if (c==d) count ++;
	if (d==a) count++;
	if (d==b) count++;
	if (a==c) count++;
	
	if (count == 1)
	{printf("yes");}
	else{printf("no");}
	
	return 0;
	
}
