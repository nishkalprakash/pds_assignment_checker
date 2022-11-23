/*

Section 14

Roll no : 22CE10065

Name : Saloni Shaw

Assignment 3

Description - Program to print numbers in words

*/

#include <stdio.h>

int main ()

{

int i,f,l;//declaring variables

printf("enter the number between 20 and 99 to be printed in words \n");

scanf("%d", &i);

if(i>=20 && i<=99)//to check whether entered values are within the range

{

f=i/10;//to extract the tens place digit

l=i%10;//to extract the ones place digit

switch(f)//to check the digit of tens place

{

case 2:

{

printf("Twenty ");

break;

}

case 3:

{

printf("Thirty ");

break;

}

case 4:

{

printf("Forty ");

break;

}

case 5:

{

printf("Fifty ");

break;

}

case 6:

{

printf("Sixty ");

break;

}

case 7:

{

printf("Seventy ");

break;

}

case 8:

{

printf("Eighty ");

break;

}

case 9:

{

printf("Ninety ");

break;

}

default:

printf("wrong input");

break;

}//end of first switch case 

switch (l)//checking the ones place digit

{

case 0:

{

printf(" ");

break;

}

case 1:

{

printf("one");

break;

}

case 2:

{

printf("two");

break;

}

case 3:

{

printf("three");

break;

}

case 4:

{

printf("four");

break;

}

case 5:

{

printf("five");

break;

}

case 6:

{

printf("six");

break;

}

case 7:

{

printf("seven");

break;

}

case 8:

{

printf("eight");

break;

}
case 9:
{
printf("nine");
break;
}

default:

printf(" ");

}//ending second switch case 

}

else

printf(" input not within the range");

return 0;
//end of program
}
