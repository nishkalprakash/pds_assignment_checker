/*Section      : 14
 Roll number  : 22CS10009
 Name         : Tejasree Sai
 Assignment no:3
 Description  :Computing the electrcity bill 
*/

#include<stdio.h>
int main ()
{
 double x,amt,addl_sur;
 printf("Enter the total number of electric units:\n");
 scanf("%lf",&x);
 amt=50.0;
 
 
  if (x<100)
   {amt=amt;}
   else if( 100<x && x<=200)
   {amt=amt+0.75*(x-100);}
    else if( 200<x && 300>x)
   {amt=amt+75+1.20*(x-200);}
   else (300>=x);
 {amt=amt+75+120+1.50*(x-300);}

 addl_sur=0.2*amt;
 amt=amt+ addl_sur;
 printf("Your total bill is Rupees %lf/-\n",amt);
 return 0;
}
                                                                                                                                              

