#include<stdio.h>
#include<math.h>
void main()
{
float a,b,c;
printf("enter the cofficients:");
scanf("%f%f%f,&a,&b,&c");
printf("The coefficients of the equation are:%0.1f,%0.1f\n",a,b,c);
float d;
d=b*b-4*a*c;
if(d<0){//complex solution
    printf("nothing else to be done");
    }else{
    flot r1,r2;
     r1=(-b+sqrt(d))/(2.0*a);
     r2=(-b-sqrt(d))/(2.0*a);
     printf("The roots of equation are:%0.1f\n",r1,r2);
       if(r1=r2){
       printf("The roots are equal\n"):\;
       }

    }
    }
