/*

Section 14

Roll no : 22CE10065

Name : Saloni Shaw

Assignment 3

Description - Program to carry out required arithmetic operatics 

*/

#include <stdio.h>

#include <math.h>
int main ()

{

char c;

float f1,f2,result;//declaring variables 

printf("enter required arithmetic operator along with two floating operands \n");

scanf("%c %f %f", &c,&f1,&f2);//taking inputs 

if (c=='+')//checking arithmatic operators

{

result=f1+f2;//performing the operation
printf("%f",result);

}

else if(c=='-')

{

result=f1-f2;
printf("%f",result);

}

else if(c=='*')

{

result=f1*f2;
printf("%f",result);

}

else if(c=='/')

{

result=f1/f2;
printf("%f",result);//printing results

}

else
{

printf("entered invalid binary arithmetic operator");//printing error
}


return 0;

}
 
