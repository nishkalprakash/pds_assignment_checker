/* 
Section 14
Roll No. 22CY10028
Name : Krishna
Assignment No : 3
Description : Program to check points 
*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
	float a, b, ans;
	char x;
	printf("Enter the binary operator :");
	scanf("%c",&x);
	printf("Enter the two numbers:");
	scanf("%f %f", &a , &b);
	switch (x){
	case '+':
	ans = a + b;
	printf("The sum of the numbers is %f", ans);
	break;
	
	case '-':
	ans = a - b;
	printf("The difference of the numbers is %f", ans);
	break;
	case '*':
	ans = a*b;
	printf("The product of the numbers is %f", ans);
	break;
	case '/':
	ans = a/b;
	printf("The quotient of the numbers is %f", ans);
	break;
}
return 0;
}
