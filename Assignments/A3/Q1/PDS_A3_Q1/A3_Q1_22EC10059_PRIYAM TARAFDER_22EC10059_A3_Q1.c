/*
	section:14
	roll no.: 22EC10059
	name: PRIYAM TARAFDER
	Assignment no.: 3
	description: displays valid time of the day according to user input
*/

#include <stdio.h>
int main()
{
	int sec,min,hr;
	scanf("%d %d %d",&sec,&min,&hr);
	if(sec>-1 && sec<60 && min>-1 && min<60 && hr>-1 && hr<24)
		printf("Valid time - %d:%d:%d",sec,min,hr);
	else
		printf("Invaid time");
}
