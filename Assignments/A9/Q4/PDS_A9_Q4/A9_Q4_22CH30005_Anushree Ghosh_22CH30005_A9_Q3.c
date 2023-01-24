/*
section 14
ANUSHREE GHOSH
22CH30005
ASSIGNMENT 9
description:calculating the net salary of the employees
*/

#include<stdio.h>

// defining the structure

typedef struct employee
{
 char name[100];
 int wages;
 int day;
} employee;
 
int main()
{
 int i,n;
 float basicpay=0,hra=0,a=0,netpay=0,TA=0;
 printf("the number of employees:"); //reading the number of employees
 scanf("%d",&n);
 struct employee emp[n],p,q;


 for(i=0;i<n;i++)  //reading the names,wages per day and number of day's are pesent
 
{
  printf("Name:\n");
  scanf("%s",&emp[i].name);
  printf("wages per day:\n");
  scanf("%d",&emp[i].wages);
  printf("Number of day's are present:\n");
  scanf("%d",&emp[i].day);
}
 
 for(i=0;i<n;i++)
{
  basicpay=emp[i].wages*emp[i].day;
   
 //calculating the hra

  if(basicpay<1000)
 {
   hra=0.12*basicpay;
 }
  else
 {
   hra=0.2*basicpay;
 }
   // calculatng TA

  if(emp[i].day>19)
 {
   TA=0.1*basicpay;
 }
  else
 {
   TA=0;
 }
}
 netpay=basicpay+hra+TA;  //calculating the netpay of every employee
 printf("Netpay:%f",netpay);
 
 return 0;
}
