/*

Section 14

Roll no : 22CE10065

Name : Saloni Shaw

Assignment 9

Description - Program to store details and calculate net salary of an employee 
*/

#include <stdio.h>
typedef struct
{
char empname[50];
int wage;
int pdays;
}
employee;
void netpay(employee x)
{
int bp;
float hra,ta,tpay;
printf("Name:%s\n",x.empname);//entering name
bp=x.wage*x.pdays;
if(bp<1000)//checking coniditions
hra=0.12*bp;
else
hra=0.2*bp;
if(x.pdays>19)
ta=0.1*bp;
else
ta=0;
tpay=bp+hra+ta;//total pay calculation
printf("Netpay:%f\n",tpay);//printing
}
int main()//main function
{
employee e;
int n,i;
printf("enter the number of employee\n");//entering number of employees
scanf("%d",&n);
printf("Name wage days:\n");//entering name wage and days
for(i=1;i<=n;i++)
{
scanf("%s %d %d",e.empname,&e.wage,&e.pdays);
netpay(e);
}
return 0;
}
//end of function
