/* SECTION: 14
   ROLL NO.: 22CH10064
   NAME : SHREYA BHARTI
   ASSIGNMENT NO. : 3
   DESCRIPTION: Program to check whether time entered is correct or not. */


#include <stdio.h>
int main(){
	int ss,mm,hh;
	printf("Enter time in format seconds, minutes, hours : ");
	scanf("%d %d %d",&ss,&mm,&hh);

	if(hh<24 && ss<60 && mm<60){
		printf("Valid Time- %d:%d:%d",hh,mm,ss);
	}
	else{
	printf("Invalid time");
	}
return 0;
}


