/*
	section:14
	roll no.: 22EC10059
	name: PRIYAM TARAFDER
	Assignment no.: 3
	description: calculates electricity bill in slab format
*/

#include <stdio.h>
int main()
{
	int unit; float bill=0;
	scanf("%d",&unit);

	if(unit>-1 && unit<101) 
		bill=50;
	else if(unit<201) 
		bill=50+(unit-100)*0.75;
	else if(unit<301) 
		bill=50+100*0.75+(unit-200)*1.2;
	else 
		bill=50+100*0.75+100*1.2+(unit-300)*1.5;
	
	bill*=1.2;
	printf("%f",bill);
}
