/*Section 14
  Roll No :22GG10024
  Name : KRISHNA GUPTA
  Assignment No : 3
  Description : PROGRAM TO PERFORM ARITHMETIC OPERATIONS*/
#include <stdio.h>// main function
int main()
{
   float eunits =0.0,slab1=0.0,slab2=0.0,slab3=0.0,slab4=0.0,bill=0.0,surcharge=0.0,total_bill=0.0 ; // declaration
   printf("Enter the total electric units :"); // taking input for the electric units
  scanf("%f",&eunits);    
if(eunits<100)
{
   printf("No charge\n");}
if (eunits>=100)     // for first 100 kwh units
{
 slab1 = 50 ;
}
  if ((eunits -100) >=0 && (eunits -100) <=100 ) // for next 100 units
 {
     slab2 = (eunits-100)*0.75;

if((eunits-100)>100){
   slab2= 100*0.75;
}
}
    if ((eunits -200) >0)// for next 100 units
 {
     slab3 = (eunits-100) *1.20;
   if((eunits -100) >100  )
{

   slab3= 100*1.20;
}
}
  if (eunits -300 >=0)// for units 300 onwards
 {
     slab4 = (eunits - 300)*1.50;
}
   bill = slab1+slab2+slab3+slab4; // bill without surcharge of 20%
   surcharge = bill*0.20;  // surcharge on the bill
   total_bill = bill + surcharge;// total bill including the surcharge
printf("The total electric bill is: %f", total_bill);
return 0;
}

