#include<stdio.h>
#include<math.h>
int main()
{
float w,B,GST,T;
char type;
printf("which kind of wood would you like to purchase\npress N for natural wood and S for synthetic wood");
scanf("%c",&type);
printf("enter the weight of wood (in kg) you want");
scanf("%f",&w);
if (type=='N')
{
B=1100.00*w;
GST=0.20*B;
T=(B+GST)*1.00;
}
else if (type=='S')
{
B=780.00*w;
GST=0.15*B;
T=(B+GST)*1.00;
}
printf("BASE PRICE=%f\nGST=%f\nTOTAL PRICE=%f",B,GST,T);
    return 0;
}