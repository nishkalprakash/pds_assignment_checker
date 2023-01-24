#include <stdio.h>

struct employee{
		char name[100];
		int wages;
		int days;
	} ;
int main()
{
	
	int n;

	printf("Enter the number of employees :");
	scanf("%d", &n);

struct employee emp[10];

	for (int i = 0; i < n; i++)
	{
		printf("Name  Wages Days :\n");
		scanf("%s %d %d", emp[i].name, &emp[i].wages, &emp[i].days );
	}
	int netPay(struct employee e){
			float bp,hra,ta, np;
			bp = e.wages*e.days;
			if (bp < 1000)
			{
				hra = 0.12*bp ; 
			} else hra = 0.2*bp;

			if (e.days > 19 )
			{
				ta = 0.1*bp;
			}else ta = 0;
			np = bp + hra + ta; 
	return np;
	}
	for (int i = 0; i < n; i++)
	{
		int j = netPay(emp[i]);
		printf("Name : %s\n", emp[i].name );
		printf("Netpay : %d\n", j );
	}
	return 0;
}