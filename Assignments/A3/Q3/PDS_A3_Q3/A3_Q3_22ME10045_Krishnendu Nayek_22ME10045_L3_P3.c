# include<stdio.h>

int main()
{
char sign;
float a,b;
scanf("%c",&sign); // available operators are +,-,*,/ //
scanf("%f %f",&a,&b);
printf("Chosen operator is %c and operands are %f and %f \n",sign,a,b);
switch(sign)
{
case '+':printf("The result is %f \n",a+b);
         break;
case '-':printf("The result is %f \n",a-b);
         break;
case '*':printf("The result is %f \n",a*b);
         break;
case '/':printf("The result is %f \n",a/b);
         break;
default:printf("wrong sign");
}
return 0;
}



