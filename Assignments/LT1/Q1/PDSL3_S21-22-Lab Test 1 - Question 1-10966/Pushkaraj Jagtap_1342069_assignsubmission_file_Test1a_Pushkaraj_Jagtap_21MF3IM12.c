/*Name - Pushkaraj Jagtap
  Roll no. - 21MF3IM12
  GROUP NO. - 5
  Package - Code Blocks*/

#include<stdio.h>
int main(){
 float s,h,l,m,t,p,y;    /*s=salary, h= house, l= life, m = medical,t=Total yearly income,y= Taxable income*/
   printf("Monthly salary:");
   scanf("%f",&s);

   printf("Home loan:");
   scanf("%f",&h);

   if (h>=250000){
     h=250000;
   }
   else{
    h=h;
   }

   printf("Life insurance:");
   scanf("%f",&l);
    if (l>=150000){
     h=150000;
   }
    else{
        l=l;
    }

   printf("Medical insurance:");
   scanf("%f",&m);
    if (m>=50000){
     h=50000;
   }
    else{
        m=m;
    }

       t=s*12;

       if(t>=1000000){
            y=t-h-l-m;    // yearly payable tax income
            }
        else{
           y=t;

        }


        if(0<y<=250000){
           printf("Total tax=0");
        }

        else if(250001<y<500000){
           p= (0.05*y);
            printf("Total Tax:%f",p);

        }
        else if(500001<y<750000){
          p=12500+(0.1*(y-500000));
           printf("Total Tax:%f",p);
        }
        else if(750001<y<1000000){
        p= 37500+(0.15*(y-750000));
         printf("Total Tax:%f",p);
        }

        else if(1000001<y<1250000){
        p= 75000+(0.2*(y-1000000));
         printf("Total Tax:%f",p);
        }

        else if(1250001<y<1500000){
        p=125000+(0.25*(y-1250000));
          printf("Total Tax:%f",p);
        }

        else{
         p=187500+(0.3*(y-1500000));
          printf("Total Tax:%f",p);
        }









       }











