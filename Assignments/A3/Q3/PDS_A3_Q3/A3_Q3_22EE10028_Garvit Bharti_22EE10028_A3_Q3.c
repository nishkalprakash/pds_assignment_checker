/*
sec : 14
roll no : 22EE10028
name : garvit
assignment no : 3
description : program to check whether it is valid time or not
*/
#include<stdio.h>

int main()
{
float a,b,c;
char d;
printf("enter the symbol and  two no");
scanf("%c %f %f",&d,&a,&b);
switch(d)
{
case '+' : {c = a+b;
	    printf("%f",c);
	    break;}
case '-' : { c = a-b;
	     printf("%f",c);
	     break;}
case '*' : { c = a*b;
	     printf("%f",c);
	     break;}
case '/' : { c = a/b;
	     printf("%f",c);
	     break;}
default : {printf("invalid");}
}
return 0;
}

