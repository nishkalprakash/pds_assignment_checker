/* Section 14
   roll no- 22EE30007
   name- Debarpita Saha
   Assignment no-3
   Description-  program to take input and print the electric bill
 */
#include<stdio.h>
int main()
{
 int x;//number of units
float cost, cost1, cost2, cost3, bill;
 scanf("%d", &x);
 if(x<= 100)
    printf(" Rs. 50/-");
 if(x>100&&x<200)
{
  cost1 = 50 + (x-100)*0.75;
 bill = cost1 + .2*cost1; 
printf(" Rs. %f", bill);
}
 if(x>200){
 cost2= cost1 + (x-200)*1.20;
 bill= cost2+ .2*cost2;
printf(" Rs. %f", bill);
}
 if(x>300){
 cost3= cost2 + (x-300)*1.50;
  bill= cost3+ .2*cost3;
 printf(" Rs. %f", bill);
}
return 0;
}
