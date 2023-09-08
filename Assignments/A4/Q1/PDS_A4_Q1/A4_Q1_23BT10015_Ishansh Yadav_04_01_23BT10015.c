//Name - Ishansh Yadav
//Roll No. - 23BT10015

#include<stdio.h>

int main()
{   int dist, time, rental, fuel_rate, add_day, fare;
	printf("Enter the kilometers travelled:");
	scanf("%d", &dist);
	printf("Enter the hours the taxi was retained:");
	scanf("%d", &time);
	add_day=time/24;
	if(time<1) rental=0;
	else if(1<=time&&time<12) rental=200;
	else if(12<=time&&time<=24) rental=500;
	else if(time>24) rental=500+300*add_day;

	if(dist<=8) fuel_rate=20;
	else if(8<dist&&dist<=12) fuel_rate=20+(10*(dist-8));
	else if(12<dist&&dist<=16) fuel_rate=60+(8*(dist-12));
	else if(16<dist&&dist<=20) fuel_rate=92+(6*(dist-16));
	else if(dist>20) fuel_rate=116+(5*(dist-20));
    
    printf("The total fare is:%d\n", rental+fuel_rate);
    return 0;
}