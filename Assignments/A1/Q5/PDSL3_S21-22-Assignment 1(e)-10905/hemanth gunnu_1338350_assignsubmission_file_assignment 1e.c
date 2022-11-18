#include <stdio.h>

int main()
{
  char s , n , a;
  float weight, baseprice , Total , GST;


  printf("wood type you want(n for natural s for sythetic :");
  scanf(" %c", &a);

   if (a=='n') {
      printf("weight of wood you want (in kg):");
      scanf("%f" , &weight);
      baseprice =  1100*weight;



      printf("base price=%.2f" , baseprice);
      GST=(baseprice *20) /100;


      printf("GST=%.2f" , GST);
      Total = baseprice+GST;
      printf("Total price =%.2f" , Total);

      } else
      printf("weight of wood you want (in kg):");
      scanf("%f" , &weight);
      baseprice = 780*weight;


      printf("base price=%.2f" , baseprice);
      GST= baseprice *15 /100;

      printf("GST=%.2f" , GST);
      Total = baseprice+GST;
      printf("Total price = %.2f" , Total);

      return 0;



}
