
#include<stdio.h>
int main()
{


/*
Section: 14
Roll no: 22ME10007
Name: Anirudha Wasnik
Assignment No: 3
Description: electricity bill 
*/

float u;
float t;
printf("Please enter your power consumption:\n");         // asks for input
scanf("%f",&u);

 
if(u<=100){                             // first slab of 100 units
         t=50;
         printf("%f",t*1.2);}           //here 1.2 refers to final bill after tax(20%)

else if(u<=200){
         t=50+0.75*(u-100);             // here 50 stands for the first 100 units and rate of 0.75 for next 100 units
         printf("%f",t*1.2);}         

else if(u<=300){                       //50 and 75 for previous slabs and rate of 1.20 for next 100 units
         t=50+75+1.20*(u-200);
         printf("%f",t*1.2);}
 
else if(u>300){                        //50,75,120 for previous slabs and rate of 1.50 for units greater than 300
         t=50+75+120+1.50*(u-300);
         printf("%f",t*1.2);}

return 0;



}
