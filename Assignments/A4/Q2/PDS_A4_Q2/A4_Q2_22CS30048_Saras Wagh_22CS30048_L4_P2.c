#include<stdio.h>
int main()
{
long a;
int c,d=0;
printf("Enter the no.:\n");
scanf("%ld",&a);

while(a!=0)
{
c=a%10;
a=a/10;
d+=c;
}
printf("The sum of the digits is:\n%d",d);
return 0;
}




