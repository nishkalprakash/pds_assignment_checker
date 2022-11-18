/*  Name        = Pushkaraj Jagtap
    Roll no.    = 21MF3IM12
    Package     = Codeblock
    Assign class= 5
    Assign no.  = 1(a)
*/

#include<stdio.h>
int main()
{
   char a,n,s;
   float w,b,g,t;
   printf("Enter the type of wood (n for natural wood, s for synthetic wood):");
   scanf("%c",&a);
   printf("Enter the weight of wood (in Kg.) you want:");
   scanf("%f",&w);

   if(a=='n'){
        b=w*1100;
        g=b*0.2;
        t=g+b;
        printf("Base price:%f\n",b);
        printf("GST:%f\n",g);
        printf("Total:%f\n",t);
   }


   else{
        b=w*780;
        g=b*0.15;
        t=g+b;
        printf("Base price:%f\n",b);
        printf("GST:%f\n",g);
        printf("Total:%f\n",t);
   }
   }
