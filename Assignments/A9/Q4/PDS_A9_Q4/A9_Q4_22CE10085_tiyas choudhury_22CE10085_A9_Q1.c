#include<stdio.h>
typedef struct 
{int n;
	char name[20];
	float wages;
	int  days;
	
}employee;
float netPay(float,int);
int main()
{
	employee a;
	printf("Enter the value of n");//Taking input from user
	scanf("%d",&a.n);
	printf("Enter the name of employee");
	scanf("%s",a.name);
	printf("Enter wages/day");
	scanf("%f",&a.wages);
	printf("Enter  days present/n");
	scanf("%d",&a.days);
	printf("Name :%s\n",a.name);
	printf("Netpay:%f",netPay(a.wages,a.days));//Calling function netPAY
	return 0;
}

float netPay( float wages,int days)//Passing values
{float netsalary,TA,HRA;
	float BP=wages*days;
	if(BP<1000)
	{
		 HRA=(12.0/100)*BP;
	} 
	else if(BP>=1000)
	{
		HRA=(20.0/100)*BP;

	}
	if(days>19)
	{
		 TA=(10.0/100)*BP;

	}
	else if(days<=19)
	{
		TA=0;
	}
	 netsalary=BP + HRA + TA;//Calculating nat salary
	return netsalary;
}
