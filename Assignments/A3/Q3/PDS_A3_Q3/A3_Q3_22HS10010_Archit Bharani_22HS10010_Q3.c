/*
SECTION 14
ROLL NO. : 22HS10010
Name: Archit Bharani
Assignment No. : 3
Description:To calculate value of arithmetic operation between 2 floating values
*/
#include<stdio.h>
int main()
{
float x,y;
char c;
printf("Enter a operator(+,-,*,/) ");
scanf("%c",&c);
printf("Enter a floating value ");
scanf("%f",&x);
printf("Enter second floating value ");
scanf("%f",&y);
if (c== '+'){
printf(" %f",x+y);
}else if (c== '-'){
printf("%f",x-y);
} else if (c== '/'){
printf("%f", x/y);
} else if (c== '*'){
printf("%f",x*y);
} 

return 0;
}

