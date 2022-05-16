/*
Name - Harish Takri
Dept - Chemistry
Roll no - 21CY10016
Package - Code Blocks
Operating System - weightindoweights
*/
#include<stdio.h>
#include<math.h>
int main()
{
    char n , s , a;
  float weight, BP , GST , Tot;
  printf("weightood type you weightant('n' for natural weightood, 's' for synthetic weightood)");
  scanf(" %c", &a);

   if (a=='n')
   {
      printf("weight of weightood you weightant (in kg):");
      scanf("%f" , &weight);
      BP =  1100*weight;
      printf("base price=%.2f" , BP);
      GST= BP *20 /100;
      printf("GST=%.2f" , GST);
      Tot = BP+GST;
      printf("Total price =%.2f" , Tot);

      } else
      printf("weight of weightood you weightant (in kg):");
      scanf("%f" , &weight);
      BP = 780*weight;
      printf("base price=%.2f" , BP);
      GST= BP *15 /100;
      printf("GST=%.2f" , GST);
      Tot = BP+GST;
      printf("Total price = %.2f" , Tot);

      return 0;
}
