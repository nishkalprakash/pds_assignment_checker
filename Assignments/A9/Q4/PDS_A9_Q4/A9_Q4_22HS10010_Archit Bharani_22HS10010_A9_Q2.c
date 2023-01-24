#include<stdio.h>
typedef struct details
{
char name[100];
int wpd;
int no_days_present;
}details;

void netPay(details b){
int bp;
bp= b.wpd * b.no_days_present;

float hra;

if(bp<1000)
hra=0.12*bp;
else
hra=0.2*bp;

float ta;
if(b.no_days_present>19)
ta=0.1*bp;
else ta=0;

float net_salary;

net_salary= bp+hra+ta;
printf("Name: %s\n",b.name);
printf("Net salary: %0.3f\n",net_salary);
}

int main()
{
int n;
printf("Total no. of employees");
scanf("%d",&n);

details a[n];
for(int i=1;i<=n;i++){
printf("Enter the name of employee[%d]",i);
scanf("%s",&a[i].name);
printf("Enter wages per day");
scanf("%d",&a[i].wpd);
printf("Enter number of days present for employee[%d]\n",i);
scanf("%d",&a[i].no_days_present);
} 
for(int i=1;i<=n;i++){
netPay(a[i]);
printf("\n");
}
return 0;
}
