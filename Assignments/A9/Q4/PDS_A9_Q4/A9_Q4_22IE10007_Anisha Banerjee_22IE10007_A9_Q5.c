/*
Section 14
Roll no - 22IE10007
Name - Anisha Banerjee
Assignment 9
Program to calculate basic pay of employee
*/
#include<stdio.h>
typedef struct
  {
    char empname[50];
    int wage;                     
    int pdays;
   }employee;
void netpay(employee x)
   {
     int bp;
     float hra,ta,tpay;
     printf("Name: %s\n",x.empname); //printing name
     bp=x.wage*x.pdays;           //calculating bp
     if(bp<1000)
       hra=0.12*bp;                //calculating hra
     else
       hra=0.2*bp;
     if(x.pdays>19)
       ta=0.1*bp;                //calculating ta
     else
       ta=0;
     tpay=bp+hra+ta;              //calculating net pay
     printf("Net pay: %f\n",tpay);
   }
int main()
   {
     employee e;
     int n,i;
     printf("Enter the number of employee\n");
     scanf("%d",&n);
     printf("Name wage days:\n");
     for(i=1;i<=n;i++)
       {
         scanf("%s %d %d",e.empname,&e.wage,&e.pdays);  //looping for number of employees
         netpay(e);
       }
    return 0;
  }
         
