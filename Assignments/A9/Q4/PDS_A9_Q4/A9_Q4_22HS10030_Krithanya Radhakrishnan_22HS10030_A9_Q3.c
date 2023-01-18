#include <stdio.h>
struct em{
	char name[10];
	float wpd;
	int days;
};
float netpay(int b,int a)
{
float bp,hra,ta,netpay;
bp=b*a;
if (bp<1000)
	{
	hra=0.12*bp;
	}
else
	{
	hra=0.2*bp;
	}	
if (b>19)
	{
	ta=0.1*bp;
	}
else
	{
	ta=0;
	}
netpay=bp+ta+hra;
return(netpay);
}
int main()
{
int n,i;
printf("enter number of employees\n");
scanf("%d",&n);
struct em emp[n];
printf("enter records of %d employees \n",n);
for (i=0;i<n;i++)
{
	printf("Enter name\n");
	scanf("%s",&emp[i].name);
	printf("Enter wages per day\n");
	scanf("%f",&emp[i].wpd);
	printf("Enter working days\n");
	scanf("%d",&emp[i].days);
	printf("name:%s\n",emp[i].name);
	printf("netpay:%f\n",netpay(emp[i].days,emp[i].wpd));
}
return 0;
}	
	
	

