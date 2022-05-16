/*
PRANJAL SINGH
Roll:21EC10051
Electronics and Electrical Communication engineering
codeblocks
Assignment class:6
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{  float m,e,h,l,mi,f,Tax;
   printf("Enter your monthly salary\n");
   scanf("%f",&m);
   e=12*m;
   printf("enter your house loan\n");
   scanf("%f",&h);
   printf("enter your life insurance premium\n");
   scanf("%f",&l);
   printf("enter your medical insurance\n");
   scanf("%f",&mi);
   if(h<=250000&&l<=150000&&mi<=50000)
   f=e-h-l-mi;
   if(h>=250000&&l>=150000&&mi>=50000)
   f=e-250000-150000-50000;
   if(h>=250000&&l<=150000&&mi<=50000)
   f=e-250000-l-mi;
   if(h<=250000&&l>=150000&&mi<=50000)
   f=e-h-150000-mi;
   if(h<=250000&&l<=150000&&mi>=50000)
   f=e-h-l-50000;
   if(h>=250000&&l>=150000&&mi<=50000)
   f=e-250000-150000-mi;
   if(h<=250000&&l>=150000&&mi>=50000)
   f=e-h-150000-50000;
   if(h>=250000&&l<=150000&&mi>=50000)
   f=e-250000-l-50000;
   if(e>=0&&e<=250000)
   Tax=0;
   if(f>=250001&&f<=500000)
   Tax=0.05*f;
   if(f>=500001&&f<=750000)
   Tax=12500+0.1*(f);
   if(f>=750001&&f<=1000000)
   Tax=37500+0.15*(f);
   if(f>=1000000&&f<=1250000)
   Tax=75000+0.2*(f);
   if(f>=1250000&&f<=1500000)
   Tax=125000+0.25*(f);
   if(f>1500000)
   Tax=187500+0.3*(f);
   printf("%f",Tax);
   return 0;
}
