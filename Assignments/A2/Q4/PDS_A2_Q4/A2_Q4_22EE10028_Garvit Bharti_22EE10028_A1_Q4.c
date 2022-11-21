#include<stdio.h>
#include<math.h>
 
int main()
{
	float c,a,b;
	printf("enter the value of myu,epsilon\n");
	scanf("%f%f",&a,&b);
	c = 1/(sqrt(a)*sqrt(b));
	printf("the speed of light : %f",c);
	return 0;
}
