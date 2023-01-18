/*
Section 14
Roll No : 22AG10001
Name : Aarushi Mahajan
Assignment No : 9
Description : Program to compute net salary of employee.
*/

#include <stdio.h>

typedef struct details {
	char name[100];
	int wage;
	int days;
	float salary;
} details;

float netpay (int wage, int days)
{
   float bp, hra, ta, netsal;

   bp= wage*days;

   if (bp<1000)
   hra= 0.12*bp;
   else
   hra= 0.2*bp;

   if (days>19)
   ta= 0.1*bp;
   else
   ta=0;

   netsal= bp + hra + ta;

   return netsal;
}

int main()
{
   int no;
   float salary;

   printf("Enter the total number of employee(s).\n");
   scanf("%d",&no);
   details a[no];

   for (int i=1;i<=no;i++)
   {
	printf("Enter name of employee[%d].\n",i);
        scanf("%s",a[i].name);
	printf("Enter wages/day.\n");
	scanf("%d",&a[i].wage);
	printf("Number of days present for employee[%d]\n",i);
	scanf("%d",&a[i].days);

	a[i].salary= netpay(a[i].wage, a[i].days);
	/*printf("Name: %s\n",a[i].name);
	printf("Netpay: %f",salary);*/
  
  }
  
  for (int i=1;i<=no;i++)
  {
	printf("Name: %s\n",a[i].name);
	printf("Netpay: %f\n\n",a[i].salary);
  }

   return 0;
}















   
   
