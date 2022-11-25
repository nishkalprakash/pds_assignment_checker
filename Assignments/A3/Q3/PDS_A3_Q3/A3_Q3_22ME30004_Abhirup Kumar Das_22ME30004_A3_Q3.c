#include<stdio.h>

int main()
{
char s;
printf("Enter any operation:"); //Entering any operation
scanf("%c", &s);
switch(s){
case '+':{  //For summing numbers
double a, b;
printf("Enter numbers to add: ");
scanf("%lf %lf", &a,&b);
double sum;
sum = a + b;
printf("Sum is: %lf", sum);
break;
}
case '-':{ //For substracting numbers
double d, e;
printf("Enter 2 no: ");
scanf("%lf %lf", &d,&e);
double dif;
dif = d - e;
printf("The difference is: %lf", dif);
break;
}
case '*':{ //For multiplying numbers
double f, g;
printf("Enter 2 no: ");
scanf("%lf %lf", &f,&g);
double mul;
mul = f * g;
printf("The product is: %lf", mul);
break;
}
case '/':{ //For dividing numbers
double h, i;
printf("Enter 2 no: ");
scanf("%lf %lf", &h,&i);
double div;
div = h / i;
printf("The division is: %lf", div);
break;
}					
 default: printf("Thank You \nGoodbye! \n");
}	
return 0;
}
