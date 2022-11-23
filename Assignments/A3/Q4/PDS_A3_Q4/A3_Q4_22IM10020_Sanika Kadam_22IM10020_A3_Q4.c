#include<stdio.h>
int main()
{
  float xyz;
 
  scanf("%f",&xyz);
  
   if(xyz<=100)
     printf("Total Bill= Rs60");
 else if((xyz>100) && (xyz<=200))
     {
     int a;
     a=(xyz*0.75)+(20/100*(xyz*0.75));
     printf("Total Bill %d",a);
     }
 else if((xyz>200) && (xyz<=300))
     {
     int b;
     b=(xyz*1.20)+((20/100)*(xyz*1.20));
     printf("Total Bill %d",b);
     }
 else if((xyz>300))
     {
     int c;
     c=(xyz*1.50)+((20/100)*(xyz*1.50));
     printf("Total Bill %d",c);
     }
     return 0;
}
