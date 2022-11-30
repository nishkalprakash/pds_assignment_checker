#include<stdio.h>
int main()
{
int numb;
int i,count;
printf("number");
scanf("%d", & numb);
while(numb>0)
{
count=numb%10;
switch(count){
case 0:
printf(" zero");
break;
case 1:
printf(" one");
break;
case 2:
printf(" two");
break;
case 3:
printf(" three");
break;
case 4:
printf(" four");
break;
case 5:
printf(" five");
break;
case 6:
printf(" six");
break;
case 7:
printf(" seven");
break;
case 8:
printf(" eight");
break;
case 9:
printf(" nine");
break;

}
numb=numb/10;
}
return 0;
}

