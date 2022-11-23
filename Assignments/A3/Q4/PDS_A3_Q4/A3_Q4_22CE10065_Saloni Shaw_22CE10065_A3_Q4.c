/*

Section 14

Roll no : 22CE10065

Name : Saloni Shaw

Assignment 3

Description - Program to calculate and print electric bill

*/

#include <stdio.h>

#include <math.h>
int main ()

{

float unit, b , total;//declaring variables

printf("enter your electric bill unit");

scanf("%f",&unit);//taking unit as input

if(unit >= 0&& unit <=100)//checking unit range

{

b=50;

}

else if(unit>100&& unit <=200)//checking unit range

{

b=0.75*unit;

}

else if(unit>200&& unit <=300)//checking unit range

{

b=1.20*unit;

}

else if(unit>300)//checking unit range

{

b=1.50*unit;

}

else
{
printf("wrong unit");//error message
}

total=((20/100.0)*b)+b;//calculating the total bill to be displayed

printf("Rs. %f",total);

return 0;

}
