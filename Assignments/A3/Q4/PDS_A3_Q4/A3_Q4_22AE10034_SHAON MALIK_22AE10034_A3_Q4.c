/* 
 Section 14
 Roll No: 22AE10034
 Name: Shaon Malik
 Assignment No :3
 Description :Program to compute electric bill
 */

#include <stdio.h>
 int main()
 {
   int units;
   float bill;//declaring variables
   printf("Enter the units consumed");
   scanf("%d", &units);
   if(units>0 && units<=100)//first 100 units
    bill=50.0;
   else if(units>100 && units<=200)//next 100
    bill=50.0 + (units-100)*0.75;
  else if(units>200 && units<=300)//next 100
    bill=50.0 + 75.0 + (units-200)*1.20; 
  else                            //greater than 300
     bill=50.0 + 75.0 + 120.0 + (units-300)*1.50; 

  bill+=bill*0.2 ; //20% surcharge
  printf("Rs. %.1f \n ", bill);
  return 0;
}
