/*
Section 14
Roll No: 22CY10048
Name: Vaibhav Tulshidas Chakole
Assignment number: 9
Description : Calculating wage
*/
#include<stdio.h>
struct employee
{
char name[50];
int wage;
int day;
};
void netPay(struct employee a) //function defining
{
float bp,hra,ta,salary;
bp=a.wage*a.day;
if(bp<1000)
{
hra=0.12*bp;
}
else
{
hra=0.20*bp;
}
if(a.day>19)
{
ta=0.10*bp;
}
else
{
ta=0;
}
salary=bp+hra+ta; //calculating net salary
printf("Name: %s\n", a.name);
printf("Net salary: %f\n\n", salary);
}
int main()
{
int n;
printf("Enter the number of employees: ");
scanf("%d",&n);
struct employee a[n]; //structure declaration
printf("Name wage days\n");
for(int i=0;i<n;i++)
scanf("%s %d %d",a[i].name,&a[i].wage,&a[i].day);
for(int i=0;i<n;i++)
{
netPay(a[i]); //function calling
printf("\n");
}
return 0;
}
