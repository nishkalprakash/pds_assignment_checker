/*name : vyshnavi_lagudu
dept : EE
roll number:21EE10044
assignment class :3
package : code blocks
*/
#include <stdio.h>
int main()
{
   char wood;
   printf("type of wood(n for natural wood,s for synthetic wood):");
   scanf("%c",&wood);
   float w,base_price,GST,total_price;
   if(wood=='n'){
                 printf("weight of wood he wants in kgs:");
                 scanf("%f",&w);
                 base_price=w*1100;
                 GST=0.2*base_price;
                 printf("base price=%f\n",base_price);
                 printf("GST=%f\n",GST);
                 total_price=base_price+GST;
                 printf("total price=%f\n",total_price);
                 }
    else if(wood=='s'){
                       printf("weight of wood he wants in kgs:");
                       scanf("%f",&w);
                       base_price=w*780;
                       GST=0.15*base_price;
                       printf("base price=%f\n",base_price);
                       printf("GST=%f\n",GST);
                       total_price=base_price+GST;
                       printf("total price=%f\n",total_price);
                      }
     else printf("invalid choice");
   return 0;
}
