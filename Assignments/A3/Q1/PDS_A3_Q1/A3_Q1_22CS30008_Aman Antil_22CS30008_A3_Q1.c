/*
Section 14
Roll no : 22CS30008
Name : Aman
Assignment no : 3
Description : Program to check points
*/

#include<stdio.h>
#include<math.h>
int main(){
	int h, m, s;// declaring variables
	printf("Enter seconds, minutes, hours : ");
	scanf("%d %d %d", &s, &m, &h);// taking input for seconds, minutes, hours
//specifying conditions for valid time
	if (s>0 && s<60 && m>0 && m<60 && h>0 && h<24){
	printf("Valid time - %d:%d:%d", h, m, s);
	}else{
	printf("Invalid time\n");
	}
return 0;
}
	
