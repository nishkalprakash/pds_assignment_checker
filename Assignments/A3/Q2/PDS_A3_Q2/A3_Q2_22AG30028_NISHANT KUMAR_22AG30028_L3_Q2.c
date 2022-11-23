/*section:-14
roll:-22AG30025
name:-NISHANT KUMAR
assignment:-3 , description:- a program which convert number to english formate */

#include <stdio.h>
int main () 
{

int number,a,b;

printf("enter your number::--");
scanf("%d",&number);

a=number/10;

b=number%10;



switch (a) {
case 1:printf("invalid input");
break;
case 2: printf("twenty"); break;
case 3: printf("thirty"); break;
case 4: printf("fourty"); break;
case 5: printf("fifty"); break;
case 6: printf("sixty"); break;
case 7: printf("seventy"); break;
case 8: printf("eighty"); break;
case 9: printf("ninty"); break;
default: printf ("invalid input");

}

switch (b) {
case 1: printf("one"); break;
case 2: printf("two"); break;
case 3: printf("three"); break;
case 4: printf("four"); break;
case 5: printf("five"); break;
case 6: printf("six"); break;
case 7: printf("seven"); break;
case 8: printf("eight"); break;
case 9: printf("nine"); break;
default: printf("invalid input");

}


return 0;
}





