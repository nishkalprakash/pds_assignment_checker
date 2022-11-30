#include<stdio.h>


int main()
{

long n,i;
printf("enter the no");
scanf("%ld",&n);
while(n!=0)
{
i = n%10;
switch (i)
{
case 0 : {printf("zero ");
		break;}
case 1 : {printf("one ");
		break;}
case 2 : {printf("two ");
		break;}
case 3 : {printf("three ");
		break;}
case 4 : {printf("four ");
		break;}
case 5 : {printf("five ");
		break;}
case 6 : {printf("six ");
		break;}
case 7 : {printf("seven ");
		break;}
case 8 : {printf("eight ");
		break;}
case 9 : {printf("nine ");
		break;}
default : {printf("invalid");}
}
n = n/10;
}
return 0;
}

