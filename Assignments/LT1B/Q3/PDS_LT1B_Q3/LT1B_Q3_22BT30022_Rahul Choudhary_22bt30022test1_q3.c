/*
SECTION 14
roll No. 22BT30022
Name: Rahul choudhary
Assignment no.3
Description: to get max
*/
#include <stdio.h>
int main()
{
	double max = 0.0, next;
	printf ("Enter positive numbers\n");
	scanf("%lf", &next);
	while (next > 0)  
		{
		if (next > max)  max = next;
		scanf("%lf", &next);
		}
 		printf ("The maximum number is %lf\n", max) ;
	return 0;	
}
