/* 
  section 14
  Roll No : 22PH10013
  Name : Bonthu Matthews 
  Assignment No : 3
  Description: Read the two operands and operator and perform operation
*/
#include <stdio.h>
int main ( )
{
  int unit,exunit1,exunit2,exunit3;
float bill1,finalbill1,excharge1,bill2,finalbill2,excharge2,bill3,finalbill3,excharge3;
  printf("please enter the number of units");
  scanf("%d",&unit);
  
  if (unit<101)
{  
   printf("bill is 50rs");
}
  else if (unit>100 && unit<201)
{
   exunit1 = unit-100;
   bill1= 50+ exunit1*0.75;
   excharge1= 0.2*bill1;
   finalbill1=bill1+excharge1;
   printf("final bill is %f",finalbill1);
}
 else if (unit>200 && unit<301)
{
  exunit2= unit-200;
  bill2=50+exunit2*1.20+75;
  excharge2=0.2*bill2;
  finalbill2=bill2+excharge2;
  printf("final bill is %f",finalbill2);
}
else if ( unit>300)
{
  exunit3=unit-300;
  bill3= 50+75+120+exunit3*1.75;
  excharge3=0.2*bill3;
  finalbill3=bill3+excharge3;
  printf("final bill is %f",finalbill3);
}
else printf("invalid input");
return 0;
}

