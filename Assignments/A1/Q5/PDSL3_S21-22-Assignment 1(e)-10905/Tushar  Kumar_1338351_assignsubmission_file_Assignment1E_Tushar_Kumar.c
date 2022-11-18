/*
Tushar Kumar
21CH30035
Chemical Engineering
Section 3
Code Blocks
Windows 10
*/
#include<stdio.h>
int main()
{
  char a,b;
  float x,y,GST,Total_price,Base_price;
  printf("Enter a type of wood(n for natural wood/s for synthetic wood):");
  scanf("%c",&a);
  if(a=='n')
  {
   printf("How much Kilograms of wood required");
   scanf("%f",&x);
   printf("----------\n");
   Base_price = 1100*x;
   GST = 0.2*Base_price;
   Total_price =GST+Base_price;
   printf(" Baseprice = %f\n GST = %f\n Total_price = %f\n",Base_price,GST,Total_price);
   printf("----------\n");
  }
   else if(a=='s')
    {
   printf("how much kg wood required :");
   scanf("%f",&y);
   printf("----------\n");
   Base_price = 1100*y;
   GST = 0.15*Base_price;
   Total_price =GST+Base_price;
   printf(" Baseprice = %f\n GST = %f\n Total_price = %f\n",Base_price,GST,Total_price);
   printf("----------\n");
    }


}







