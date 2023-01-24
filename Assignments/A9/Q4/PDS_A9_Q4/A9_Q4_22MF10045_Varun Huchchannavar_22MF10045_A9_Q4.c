#include <stdio.h>
#include <stdlib.h>
typedef struct employee{
	float wage;
	char name [100];
	float days;
	float Netpay;
	float basicpay;
	float HRA;
	float TA;
} Employee;
     float total (Employee A)
	{
		
	     A.basicpay=A.wage * A.days;
	if(A.basicpay<1000)
	{
		A.HRA=0.12*A.basicpay;
	}
	else if (A.basicpay>=1000)
	{
		A.HRA=0.20*A.basicpay;
	}
	if (A.days>19)
	{
		A.TA= 0.10*A.basicpay;
	}
	else if(A.days<=19 && A.days>0)
	{
		A.TA=0;
	}
	A.Netpay=A.basicpay+A.HRA+A.TA;
	return A.Netpay;
}
Employee Readvalue ()
{
	Employee dt;
	printf("Enter name \n");
	scanf("%s",dt.name);
	printf("Enter wage \n");
	scanf("%f",&dt.wage);
	printf("Enter days \n");
	scanf("%f",&dt.days);
	return dt;

}

int main()
{
	int num_1;
	printf("Enter the number of employees");
	scanf("%d",&num_1);
	int i;
	for(i=1;i<=num_1;i++)
	{
		Employee a;
		a= Readvalue ();
        printf("%s",a.name);
        printf("\n");
        float flag=total(a);
        printf("%f",flag);
	}
	return 0;
}

