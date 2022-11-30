#include <stdio.h>
int main()
{
long int n;
int d;
printf("enter the number: ");
scanf("%ld",&n);

while(n!=0){
d = n%10;
switch (d){
case 0:
printf("zero");
printf(" ");
break;
case 1:
printf("one");
printf(" ");
break;
case 2:
printf("two");
printf(" ");
break;
case 3:
printf("three");
printf(" ");
break;
case 4:
printf("four");
printf(" ");
break;
case 5:
printf("five");
printf(" ");
break;
case 6:
printf("six");
printf(" ");
break;
case 7:
printf("seven");
printf(" ");
break;
case 8:
printf("eight");
printf(" ");
break;
case 9:
printf("nine");
printf(" ");
break;
}
n=n/10;
}
return 0;
}

