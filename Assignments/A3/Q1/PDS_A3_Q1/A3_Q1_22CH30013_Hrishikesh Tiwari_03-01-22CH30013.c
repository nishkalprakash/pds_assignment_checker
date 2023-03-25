#include<stdio.h>
int main ()
{ int a,b,c,d,e,max;
printf("Enter five numbers\n");
scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
if(a%2 + b%2 + c%2 + d%2 + e%2 == 3)
    printf("There are exactly 3 odd numbers\n");


if(a%2 + b%2 + c%2 + d%2 + e%2 == 2)
printf("There are exactly 3 even numbers");
max= a*(a>=b)+b*(b>a);
max=max*(max>=c)+c*(max<c);
max= max*(max>=d)+d*(max<d);
max=max*(max>=e)+ e*(max<e);
printf("%d is the largest of them",max);
return 0;



}
