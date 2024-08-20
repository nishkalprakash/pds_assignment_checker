#include<stdio.h>
int main()
{      
	int a, b, c, d;
	printf("Enter values of a, b, c and d");
	scanf("%d %d %d %d", &a, &b, &c, &d);
	if (a==b)
		if (a!=c && a!=d)
			printf("YES");
		else
			printf("NO");
	
	else if (b==c)
		if (b!=a && b!=d)
			printf("YES");
		else
			printf("NO");
	else if (c==d)
		if (c!=a && c!=b)
			printf("YES");
		else
			printf("NO");
	else if (a==d)
		if (a!=b && a!=c)
			printf("YES");
		else
			printf("NO");
	else if (a==c)
		if (a!=b && a!=d)
			printf("YES");
		else
			printf("NO");
	else if (b==d)
		if (b!=a && b!=c)
			printf("YES");
		else
			printf("NO");
	else
		printf("NO");
	return 0;
}
	
			
			
			
			
			
