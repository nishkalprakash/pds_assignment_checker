/*Name : Abhijit Kumar
SECTION 14
ROLL NO. 22IM10001
QUESTION 3
TOPIC:-Finding the salary of an employee.*/
#include<stdio.h>
struct employee
{
char employee_name[100];
float daily_wage;
int days;
};
float netpay(struct employee e)
{
float basic_pay,pay=0;
basic_pay=e.daily_wage*e.days;
if(basic_pay<1000)
pay=pay+basic_pay+12.00/100.00*basic_pay;
else
pay=pay + basic_pay+20.00/100.00*basic_pay;
if(e.days>19)
pay=pay+basic_pay*10.00/100.00;

return pay ;
}


int main()
{
int n;
printf("\n Enter the number of employees: ");
scanf("%d",&n);
struct employee e[n];
int i;
for(i=0;i<n;i++)
{
printf(" \n name ,wage ,days :");
scanf("%s %f %d",e[i].employee_name,&e[i].daily_wage,&e[i].days);
printf("\n Employee name: %s",e[i].employee_name);
printf("\n Netpay : %f",netpay(e[i]));
}
}