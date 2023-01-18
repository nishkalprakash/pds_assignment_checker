#include <stdio.h>
#include <string.h>
void netpay(char name[100],int wage,int days)
{
int bp = emp.wage*emp.days;
float hra,ta,net;
int i;
if(bp<1000)
hra = 0.12*bp;
else
hra = 0.2*bp;

if(days>19)
ta = 0.1*bp;
else
ta = 0;

net = bp+hra+ta;
for(i = 0;i<strlen(name);i++)
printf("%c",name[i]);
printf("the net pay for this employee is %f",net);
}
struct employee
{
char empname[100];
int wage;
int days;
};

int main()
{

int n,i;
printf("enter the total number of employees\n");
scanf("%d",&n);
struct employee emp[10];
for(i=1;i<=n;i++)
{
printf("enter the details of the %d th employee",i);
scanf("%s",emp[i].empname);
scanf("%d",&emp[i].wage);
scanf("%d",&emp[i].days);
printf("\n");
}
for(i=1;i<=n;i++)
{
netpay(emp[i].empname,emp[i].wage,emp[i].days);
}
return 0;
}



  
