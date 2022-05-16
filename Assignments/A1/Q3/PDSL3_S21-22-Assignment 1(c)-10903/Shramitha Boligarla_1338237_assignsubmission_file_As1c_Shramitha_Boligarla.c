/* NAME: Shramitha Boligarla
   ROLL NO. : 21ME10024      */

#include<stdio.h>
int main()

{   int m,n,D,k;
	float f;

	printf("Enter the no. of machines in the company: ");
	scanf("%d",&m);

	printf("Enter the week day number(1-7): ");
	scanf("%d",&D);
	switch(D)
	{
		case 1:
			n=m;
			printf("Number of manufactured cars = %d",n);
			break;

		case 2:
			n=round(m+m/2+m/4);
			printf("Number of manufactured cars = %d",n);
			break;

		case 3:
		case 6:
			printf("Enter no. of machines kept under inspection: ");
			scanf("%d",&k);
			n=round((m-k)+(m-k)/2.0+(m-k)/4.0);
			printf("Number of manufactured cars = %d",n);
			break;

		case 4:
		case 5:
		case 7:
			printf("Enter Boosting Factor: ");
			scanf("%f",&f);
			n=round(m+f*m);
			printf("Number of manufactured cars = %d",n);
			break;

		default:
			printf("Invalid Input");
	}
	return 0;
}
