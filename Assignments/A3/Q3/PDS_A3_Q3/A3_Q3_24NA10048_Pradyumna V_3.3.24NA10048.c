#include <stdio.h>
int main()
{
	int a,b,c,d;
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	scanf("%d",&d);
	if (((a==b)&&(a!=c)&&(a!=d)&&(b!=c)&&(b!=d)&&(c!=d))||((a==c)&&(a!=b)&&(a!=d)&&(b!=c)&&(b!=d)&&(c!=d)))
	{printf("yes");}
	else	
	printf("no");
	return 0;			
}
