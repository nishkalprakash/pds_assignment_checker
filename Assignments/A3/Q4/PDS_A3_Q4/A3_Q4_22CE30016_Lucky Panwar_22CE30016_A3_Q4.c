/*
 Section 14
 Roll No : 22CE30016
 Name : LUCKY PANWAR
 Assignment No : 3
 Description : Program to check correct time 
*/

#include <stdio.h>
 
int main()
{
 float input; // Declaring the total electricity unit consumed by user
 float bill;
 printf("Enter the total units consumed\n");
 scanf("%f", &input);
 if(input<=100){
 	bill=50;
    printf("Your amount is %f\n", bill);
   }
 else if(input<=200){
 	bill=(50 + (input-100)*0.75)*1.2;
    printf("Your amount is %f\n", bill);
   }
 else if(input<=300){
	bill=(50+75+(input-200)*1.2)*1.2;
    printf("Your amount is %f\n", bill);
   }
 else if(input>300){
	bill=(50+75+120+(input-300)*1.5)*1.2;
    printf("Your amount is %f\n", bill);
   }
return 0;
}
 
