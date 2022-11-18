#include <stdio.h>
void rearrange(int *a,int *b,int *c)
{
	int x; // Used for rearranging the terms
	// Sorting in non-decreasing order
	if(*a>*b) { x=*a; *a=*b; *b=x; }
	if(*b>*c) { x=*c; *c=*b; *b=x; }
}
int main()
{
	int *a,*b,*c;
	int p,q,r;
	a=&p,b=&q,c=&r;
	printf("Enter three integers : ");
	scanf("%d%d%d",a,b,c);
	printf("\n\n---Before function call---\n");
	printf("Address of a = %d\n",a);
	printf("Address of b = %d\n",b);
	printf("Address of c = %d\n",c);
	printf("Values of a,b,c = %d, %d, %d\n\n",*a,*b,*c);
	rearrange(a,b,c);
	printf("---After function call---\n");
	printf("Address of a = %d\n",a);
	printf("Address of b = %d\n",b);
	printf("Address of c = %d\n",c);
	printf("Values of a,b,c = %d, %d, %d",*a,*b,*c);
	return 0;
}
