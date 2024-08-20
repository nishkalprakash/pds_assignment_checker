#include<stdio.h>
int main()
{
	int day,month,year;
	printf("date:");
	scanf("%d%d%d",&day,&month,&year);
	if(month == 1||month ==3||month ==5||month ==7||month ==9||month ==11){
		if(day>=1 & day<=31)
	{printf("valid date");}
			else{printf("invalid date");}}
	else if(month == 4||month ==6||month ==8||month ==10||month ==12 ){
			if (day>=1 & day<=30){
				printf("valid date");}
				else {printf("invalid date");}}
		else if(month == 2 && day>=1 && day<=29 && year/4==0){
		printf("valid date");}
		else if(month == 2 && day>=1 && day<=28 && year/4!=0){
		printf("valid date");}
			else {printf("invalid date");}
	return 0;
}





