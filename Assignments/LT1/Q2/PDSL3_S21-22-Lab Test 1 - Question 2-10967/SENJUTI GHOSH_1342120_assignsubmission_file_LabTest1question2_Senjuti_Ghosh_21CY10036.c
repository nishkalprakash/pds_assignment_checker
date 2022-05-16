/*
name:SENJUTI GHOSH
ROLL:21CY10036
DEPT:Chemistry
Package:CODEBLOCKS
*/
#include<stdio.h>
#include<math.h>
int main(){
double x1,x0,e,temp,i;
int count,maxiteration;
count=1;
printf("x0");
scanf("%lf",&x0);
printf("e");
scanf("%lf",&e);
printf("Maxiteration");
scanf("%d",&maxiteration);
while (count<=maxiteration){
      printf("Iteration %d   ",count);
      temp=x0;
      printf("x0=%lf   ",temp);
      x1=(x0-((x0*x0*x0-25)/(3*x0*x0)));
      printf("x1=%lf   ",x1);
      i=fabs(temp-x1);
      printf("e=%lf\n",i);
      x0=x1;
      if (i<e){
        break;
      }
      count++;}
printf("square root is %lf",x1);
return 0;
}
