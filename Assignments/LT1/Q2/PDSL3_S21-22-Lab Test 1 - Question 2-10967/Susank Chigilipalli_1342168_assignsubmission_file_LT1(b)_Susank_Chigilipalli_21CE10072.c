/*This program is to calculate the root of the equation*/
/*Name : Susank Chigilipalli(21CE10072)
  Section : 3A
  Assignment class 6*/
#include<stdio.h>
void main()
{
  float x0,e,maxIteration,x1,er;
  int i;
  printf("Please enter where we know that the root is near the point : ");
  scanf("%f",&x0);
  printf("Please enter error : ");
  scanf("%f",&e);
  printf("Please enter max iterations :");
  scanf("%f",&maxIteration);
  printf("Iteration     x0              x1            Error\n");
  for(i=1;i<=maxIteration;i++)
  {
     x1=x0-(x0*x0*x0-25)/(3*x0*x0);
     er=x0-x1;
     printf("    %d      %f        %f        %f\n",i,x0,x1,er);
     if(er>=0)
     {
        if(er<=e) break;
     }
     else
     {
        if((-1)*er<=e) break;
     }
     x0=x1;
  }
}
