/*
sec : 14
roll no : 22EE10028
name : garvit
assignment no : 3
description : to print the no in words
*/
#include<stdio.h>

int main()
{
int n,i,a;
printf("enter the two digit no");
scanf("%d",&n);
if(n>=20&&n<=99)
{
i = n%10;
n = n/10;
a = n%10;
switch (a)
{
case 2 : {printf("twenty");
	  break;}
case 3 : {printf("thirty");
	  break;} 
case 4 : {printf("forty");
	  break;}
case 5 : {printf("fifty");
	  break;}
case 6 : {printf("sixty");
	  break;}
case 7 : {printf("seventy");
	  break;}
case 8 : {printf("eighty");
	  break;}
case 9 : {printf("ninety");
	  break;}
default : {printf("invalid");}
}
switch(i)
{
case 1 : {printf(" one");
	  break;}
case 2 : {printf(" two");
	  break;}
case 3 : {printf(" three");
	  break;}
case 4 : {printf(" four");
	  break;}
case 5 : {printf(" five");
	  break;}
case 6 : {printf(" six");
	  break;}
case 7 : {printf(" seven");
	  break;}
case 8 : {printf(" eight");
	  break;}
case 9 : {printf(" nine");
	  break;}
default : {printf("invalid");}
}
}
return 0;
}

