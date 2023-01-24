/*
section 14
roll no.: 22AE30007
name: Devanshi Dadoo
Assigment 9
desciption: TO FIND SALARY OF EMPLOYEES
*/

#include<stdio.h>

     //DEFING STRUCTURE

typedef struct employee
{
 char name[100];
 int wage;
 int day;
} employee;


     // MAIN FUNCTION



int main()
{
 int m;
 float BP=0, hra=0, ta=0, netsalary=0;
 printf("enter the number of employees: ");
 scanf("%d", &m);
 struct employee em[m], a, b;
 
 for (int i=0; i<m; i++)
 {
 printf(" enter name: \n");
 scanf("%s", &em[i].name);
 printf("enter wage per day: \n");
 scanf("%d", &em[i].wage);
 printf("enter number of days: \n");
 scanf("%d", &em[i].day);
}

for(int i=0; i<m; i++)
{
 BP = (em[i].wage * em[i].day);
 
if (BP<1000)
 hra = 0.12*BP;
else
 hra = 0.20*BP;
if (em[i].day>19)
 ta = 0.10*BP;
else
ta=0;

netsalary = BP+hra+ta;

printf("name: %s \n", em[i].name);
printf("netpay: %f \n", netsalary);
}
}










