/*
Section 14 
Roll No. : 22NA30030
Name : Siddhant Chasta 
Assignment No. : 9
Description :A program to compute the net salary of an employee.  
*/

#include<stdio.h>

    typedef struct details
  {
         int BP,wages,days;
         float HRA;
         float TA;
  } details;
   

    void netPay(details d)
  {
         d.BP = d.wages * d.days;
         if(d.BP < 1000)
         { 
             d.HRA = (0.12) * d.BP;
         }
         else d.HRA = (0.20) * d.BP;

         if(d.days > 19)
        { 
              d.TA = (0.10) * d.BP;
        }
         else d.TA = 0;

        printf("Net Pay : %f",d.BP + d.HRA + d.TA);

  }
  

int main()
{
  int n; // number of employees
  printf("Enter the number of employees : ");
  scanf("%d",&n);

  for(int i=0;i<n;i++)
 {
   details d;
   char name[100];
   printf("Name wages days : ");
   printf("\n");
   scanf("%s %d %d",name,&d.wages,&d.days);
   
   netPay(d);
   printf("\n");
 }

}















      
      

 
