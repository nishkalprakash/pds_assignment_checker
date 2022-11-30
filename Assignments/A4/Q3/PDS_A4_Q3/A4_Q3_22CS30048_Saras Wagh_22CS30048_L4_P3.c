#include<stdio.h>
int main()
{
long a;
int c;
printf("Enter the no.:\n");
scanf("%ld",&a);

if(a==0)
printf("Zero");
else if(a!=0){
while(a>0)
{
c=a%10;
a=a/10;
switch(c)
{
case 0:
printf("Zero ");
break;
case 1:
printf("One ");
break;
case 2:
printf("Two ");
break;
case 3:
printf("Three ");
break;
case 4:
printf("Four ");
break;
case 5:
printf("Five ");
break;
}
}
}
return 0;
}
