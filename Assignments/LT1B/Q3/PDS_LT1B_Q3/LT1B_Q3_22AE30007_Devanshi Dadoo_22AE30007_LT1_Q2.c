/*
section 14
roll no.: 22AE30007
name: Devanshi Dadoo
LAB TEST 1
desciption: TO FIND THE MAXIMUM AND MINIMUM OF GIVEN NUMBERS
*/

#include<stdio.h>
 
 
int main()
{
 int n, max1=0, max2=0;
 while(1)
 {
 printf("Enter number: ");
 scanf("%d", &n);
 if(n>max1)
 {
  max2=max1;
  max1=n;
 }
 if(n<0)
 {
  return(0);
 }
 printf("Largest number: %d \n", max1);
 printf("Second largest number: %d \n", max2);
 }
}
