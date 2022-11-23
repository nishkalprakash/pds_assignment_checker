/* 
Section 14
Roll No. 22CY10028
Name : Krishna
Assignment No : 3
Description : Program to check points 
*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
	int s , m, h;
printf("Enter the time in seconds , minutes and hours respectively: \n");
scanf("%d %d %d", &s, &m, &h );
	if ( s <=59 && m <= 59 && h <= 23 )
	printf("Valid time -- %d : %d : %d ", h, m, s ); 
	else printf("Invalid time");
return 0;
}
