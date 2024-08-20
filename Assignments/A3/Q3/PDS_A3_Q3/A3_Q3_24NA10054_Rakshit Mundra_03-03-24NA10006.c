#include <stdio.h>

int main()
{
	int a, b, c, d, count=0;

	printf("\na = "); scanf("%d", &a);
	printf("\nb = "); scanf("%d", &b);
	printf("\nc = "); scanf("%d", &c);		//INPUTS
	printf("\nd = "); scanf("%d", &d);
	
	if (a==b) count++;
	if (a==c) count++;
	if (a==d) count++;  		//CHECKS
	if (c==b) count++;
	if (d==b) count++;
	if (c==d) count++;
	
	if (count==1) printf("\nYES");
	else printf("NO");			//OUTPUTS
	
	return 0;
}
