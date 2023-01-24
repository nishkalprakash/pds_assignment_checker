/*

SECTION 14

Roll No:22EE10048

Name: Brij

Assignment NO: 9

Description-Calculating Net salary
*/
#include<stdio.h>//Including packages
struct employee//Defining structure
{
char name[20];
int wage;
int day;
};
void netPay(struct employee e)//method to calculate salary
{
float bp,hra,ta,salary;

bp=e.wage*e.day;

if(bp<1000)
hra=0.12*bp;
else
hra=0.20*bp;

if(e.day>19)
ta=0.10*bp;
else
ta=0;

salary=bp+hra+ta;//calculating final salary
printf("Name: %s\n",e.name);
printf("Net Salary: %f\n\n",salary);
}
int main()//Main method
{
int n;
printf("Enter number of employees: ");
scanf("%d",&n);
struct employee a[n];//Creating array of datatype employee
printf("Name Wage Days\n");
for(int i=0;i<n;i++)
scanf("%s %d %d",a[i].name,&a[i].wage,&a[i].day);//getting employees' details from user

for(int i=0;i<n;i++)
netPay(a[i]);

return 0;
}
