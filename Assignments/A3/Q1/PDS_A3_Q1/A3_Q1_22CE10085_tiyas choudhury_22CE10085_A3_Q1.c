/*
   Section 14 
   Roll No : 22CE10085
   Name : Tiyas Roy Choudhury
   Assignment No : 3
   Description : Program  to enter valid time of day 
*/

#include<stdio.h>
int main()

{
  int HH;
  int MM;
  int SS;

printf("Enter seconds");//Enter seconds
scanf("%d",&SS);
printf("Enter minutes");// Enter minutes
scanf("%d",&MM);
printf("Enter hours");//Enter hours
scanf("%d",&HH);

if(HH<=23 && MM<=59 && SS<=59)
  printf("Valid time-%d : %d : %d",HH,MM,SS);

 else

  printf("Invalid time");


return 0;

} 
