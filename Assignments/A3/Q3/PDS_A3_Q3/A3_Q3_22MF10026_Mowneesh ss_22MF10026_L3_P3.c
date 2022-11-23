#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
     float x, y, ans;
     char a ;
     printf("enter the binary operator:");
     scanf("%c", &a);
     printf("enter the two numbers:");
     scanf("%f %f", &x, &y);
     switch (a){
     case '+':
	ans = x+y;
	printf("the sum of the numbers is %f", ans);
	break;
     case '-':
	ans = x-y;
	printf("the difference of the numbers is %f", ans);
	break;
     case '*':
	ans = x*y;
	printf("the product of the numbers is %f", ans);
	break;
      case '/':
	ans = x/y;
	printf("the quotient of the numbers is %f", ans);
	break;
}
return 0;
}
