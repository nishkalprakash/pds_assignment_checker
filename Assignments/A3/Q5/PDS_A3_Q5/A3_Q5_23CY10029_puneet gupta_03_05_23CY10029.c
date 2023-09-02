#include <stdio.h>

int main ()
{
	int a, b,c,d,e,f ;  
	printf("this program compute first derivative of five degree  polynomial   \n");
	printf("enter cofficient of x^0:\n");
	scanf("%d",&a);
	printf("enter cofficient of x^1:\n");
	scanf("%d",&b);
	printf("enter cofficient of x^2:\n");
	scanf("%d",&c);
	printf("enter cofficient of x^3:\n");
	scanf("%d",&d);
	printf("enter cofficient of x^4:\n");
	scanf("%d",&e);
	printf("enter cofficient of x^5:\n");
	scanf("%d",&f); 
	printf("derivative:%d*x^5+%d*x^4+%d*x^3+%d*x^2+%d*x^1+%d*x^0 \n",f,e,d,c,b,a); 
	printf("derivative:%d*x^4+%d*x^3+%d*x^2+%d*x^1+%d*x^0",f*5,e*4,d*3,c*2,b*1);
	return 0;  
 	
}
