/*
Name: Ankit Yadav
Roll No : 21EE30005
Section: 3
Department: Electrical Engineering
Operating System: Windows 11
Package: Codeblocks
Lab Test1 : Question 1
*/

#include<stdio.h>


int main(){

    float xc[10],yc[10],xm,xs,ys,ym,m,b,ms,ms1,m2,mf;
    int i;

    xs=0;
    ys=0;
    m=0;
    m2=0;

    printf("Enter the value of x coordinates");

    for(i=0;i<10;i++){
        scanf("%f",&xc[i]);
    }

    printf("Enter the value of y coordinates");

    for(i=0;i<10;i++){
        scanf("%f",&yc[i]);
    }

   for(i=0;i<10;i++){

      xs+=xc[i];

   }
    for(i=0;i<10;i++){

      ys+=yc[i];

   }
   xm=xs/10;
   ym=ys/10;

   for(i=0;i<10;i++){

    ms=((xc[i]-xm)*(yc[i]-ym));
    ms1=((xc[i]-xm)*(xc[i]-xm));
    m+=ms;
    m2+=ms1;
    mf=m/m2;

   }
b=ym-(mf*xm);


   printf("m= %f b= %f line equation is y = %fx + %f",mf,b,mf,b);

return 0;
}
