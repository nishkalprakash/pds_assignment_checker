/*
Section 14
Roll no. 22IM10001
Name: Abhijit Kumar
Assignment no: 3
Description:Caluclating and printing the electricity bill.
*/

#include<stdio.h>
#include<math.h>
int main()
{
float a;
printf("Enter the number of units consumed:");
scanf("%f",&a);
float Bill1= 50*1.2;
float Bill2=(((a-100)*0.75)+50)*1.2;
float Bill3=(((a-200)*1.2)+125)*1.2;
float Bill4=(((a-300)*1.5)+245)*1.2;
if (a<101)
printf("Electricity Bill is=%f",Bill1);
else 
if (a<201)
printf("Electricity Bill is=%f",Bill2);
else 
if (a<301)
printf("Electricity Bill is=%f",Bill3);
else 
if (a>300)
printf("Electricity Bill is=%f",Bill4);
return 0;
}
