/*This program is to the line equation*/
/*Name : Susank Chigilipalli(21CE10072)
  Section : 3A
  Assignment class 6*/
#include<stdio.h>
void main()
{
   int x[10],y[10],i;
   float xb,yb,m,b,sumb,sum1=0,sum2=0;
   printf("Enter 10 X-Coordinates : ");
   for(i=0;i<10;i++)
   scanf("%d",&x[i]);
   printf("Enter 10 Y-Coordinates : ");
   for(i=0;i<10;i++)
   scanf("%d",&y[i]);
   for(i=0;i<10;i++)
   {
      sumb=sumb+x[i];
   }
   xb=sumb/10;
   sumb=0;
   for(i=0;i<10;i++)
   {
      sumb=sumb+y[i];
   }
   yb=sumb/10;
   for(i=0;i<10;i++)
   {
      sum1=sum1+(x[i]-xb)*(y[i]-yb);
   }
   for(i=0;i<10;i++)
   {
      sum2=sum2+(x[i]-xb)*(x[i]-xb);
   }
   m=sum1/sum2;
   b=yb-m*xb;
   printf(" slope is : %f\n",m);
   printf(" Y intercept is : %f\n",b);
   printf(" line equation is : y= %fx+%f",m,b);
}
