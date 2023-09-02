//Roll no.-23BT10015.c
//Name-Ishansh Yadav
#include<stdio.h>

int main()
{int a, b, c, d, e, f, x;
	scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f);
	printf("The polynomial is %dx^5+%dx^4+%dx^3+%dx^2+%dx+%d", a, b, c, d, e, f);
	int a1, b1, c1, d1, e1, f1;
	a1=5*a;
	b1=4*b;
	c1=3*c;
	d1=2*d; 
	printf("The derivative of the polynomial is %dx^4+%dx^3+%dx^2+%dx+%d", a1, b1, c1, d1, e);
return 0;
}