#include<stdio.h>
struct emp_details             //structure defined for the employee details
{
int n;
char e_name[100];
float wpd;
int nodp;
};
float NetPay(int x,float y)  //function to calculate the NetPay
{
float bp,hra,ta;
bp=x*y;
if (bp<1000.0)
hra=0.12*bp;
else
hra=0.20*bp;
if (x>19)
ta=0.10*bp;
else
ta=0.0;
return bp+hra+ta;
}
int main()         // main function
{
struct emp_details emp;
printf("Enter the total number of employees = ");
scanf("%d",&emp.n);
for(int i=0;i<emp.n;i++)
{
printf("Name = ");
scanf("%s",emp.e_name);
printf("Wages per day = ");
scanf("%f",&emp.wpd);
printf("No. of days present = ");
scanf("%d",&emp.nodp);
printf("Name : %s\n",emp.e_name);
printf("Netpay : %f\n",NetPay(emp.nodp,emp.wpd));
}
return 0;
}
 

