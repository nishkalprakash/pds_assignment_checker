/*
name - sumedh deshkar
roll no. - 21MI33023
section -3
*/




#include<stdio.h>
#include<math.h>

int main()
{
float m,n,k;
float f;
int day;

printf("enter the number of machines:");
scanf("%f",&day);
printf("%d",&day);
switch(day)
{
case 1:n=m;break;
case 2:n=m+m/2+m/4;break;
case 3:
case6: printf("enter number of machines under inspection:");
scanf("%f",&k);
n=m-k+(m-k)/2+(m-k)/4;break;
case5:
case7:
case4:printf("enter the boosting fraction:");
      scanf("%f",&f);
      n=(1+f)*m;
      break;
      }


printf("number of manufactured cars = %d",(int)(n+0.5));












return 0;

}






