#include<stdio.h>

int main()
{	int day,month,year,input=0;
	scanf("%d %d %d",&day,&month,&year);
	// For the months having 30 days
	if (month%2 == 0 && month!=2 && month!=8)
	{
		if(day<=30 && day>0){input+=1;}
	}
	
	// For months having 31 days
	if(month%2 != 0 && month==8)
	{
		if(day<=31 && day>0){input+=1;}}
	// For valid month
	if (month<=12 && month>0){input +=1;}
	
	// For leap year 
	if(year%4==0 && month==2){
	if(day<=29 && day>0){ input +=1; }
	}
	// Final declaration
	if (input==2) {
	printf("VALID INPUT");
	}
	else {
	printf("INVALID INPUT \n");}
	return 0;
}
