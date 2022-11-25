/* 
section 14
roll no 22IM30014
name : #harsh Gupta#
assignment No; 3 
Description - Question 3 
*/
#include <stdio.h>
 
int main() {
   	double a,b;
	char o;
	scanf("%c%lf%lf",&o,&a,&b);
	switch(o){
	case '+':
		printf("%lf\n",a+b);
		break;
	case '-':
		printf("%lf\n",a-b);
		break;
	case '*':
		printf("%lf\n",a*b);
		break;
	case '/':
		printf("%lf\n",a/b);
		break;
}   return 0;
}
