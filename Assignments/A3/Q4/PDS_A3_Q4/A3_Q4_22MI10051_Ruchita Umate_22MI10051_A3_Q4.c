/*
SECTION 14
ROLL NO:22MI10051
NAME RUCHITA UMATE
ASSIGNMENT NO 3
DISCRIPTION PROGRAM TO CHECK POINTS
*/


#include <stdio.h>
int main(){
float unit, amt ,x ,total;
 printf("Enter the units:");     //ask user to input the units
scanf("%f",&unit);
if (unit<=100){
  amt=50;                  //amount is fixed as Rs 50 for first 100
}
if (unit<=200 && unit>100){    
 x=unit-100;
 amt=50 +(0.75*x);         //for next unit Rs 0.75/unit 
 total=1.2*amt;            //an additional 20% surcharge is added to bill
}
if (unit<=300 && unit>200){
x=unit-200;
amt=50+75+(1.20*x);        //for next units Rs 1.2/unit is added to the bill
total=1.2*amt;               //an additional 20% surcharge is added to bill
}
if (unit>300){
x=unit-300;
amt=50+75+120+(x*1.50);      //for next units Rs 1.50/unit is added to the bill
total=1.2*amt;               //an additional 20% surcharge is added to bil
} 
printf("Total electric bill : %f",total);
return 0;
}
