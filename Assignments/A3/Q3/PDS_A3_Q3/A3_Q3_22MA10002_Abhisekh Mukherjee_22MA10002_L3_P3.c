/* 
SECTION 14
ROLL NO : 22MA10002
NAME :ABHISEKH MUKHERJEE
ASSIGNMENT NO: 3 
DESCRIPTION: calculator*/
#include<stdio.h>
#include<math.h>
int main()
{
float a,b;
char d;
printf("enter the two floating numbers and the operator :\n");
scanf("%f %f %c",&a,&b,&d);

switch (d){
case ('+') :printf("%f\n",a+b);
break;
case ('*') :printf("%f\n",a*b);
break;
case ('-') :printf("%f\n",a-b);
break;
case ('/') :printf("%f\n",a/b);
break;
default : printf("enter the correct operator\n");
}
return 0;
}



