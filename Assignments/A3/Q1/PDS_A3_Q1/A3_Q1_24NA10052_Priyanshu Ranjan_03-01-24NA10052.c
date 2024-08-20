#include <stdio.h>
int main(){
	int date, month,year, x=0, y=0, z=0;
	printf("Enter the value of day:-");
	scanf("%d",&date);
	printf("\n Enter the value of month: ");
	scanf("%d",&month);
	
	printf("\n Enter the value of year : ");
	scanf("%d",&year);
	
	if (month>12){
		printf("Invalid Date");
		x=0;
		z =1;
		}
	if (month=2){
		if (year%4==0 && year%400!=0){
			y +=1;}
		else if (year%100==0){
			y+=1;}}
	switch (month){
		case 1:
			if (date<32){
				x = x+1;}
			
			break;
		case 2:
			if (y =1 && date <30){
				x=x+1;}
			else if(y=0 && date<29){
				x+=1;}
			
			break;
		case 3:
			if (date <32){
				x=x+1;}
			
			break;
		case 4:
			if (date <31){
				x=x+1;}
			
			break;
		case 5:
			if (date <32){
				x=x+1;}
			
			break;
		case 6:
			if (date <31){
				x=x+1;}
			
			break;
		case 7:
			if (date <32){
				x=x+1;}
			
			break;
		case 8:
			if (date <32){
				x=x+1;}
			
			break;
		case 9:
			if (date <31){
				x=x+1;}
			
			break;
		case 10:
			if (date <32){
				x=x+1;}
			
			break;
		case 11:
			if (date <31){
				x=x+1;}
			
			break;
		case 12:
			if (date <32){
				x=x+1;}
			
			break;
			
			
		default:
			printf("\n  Invalid Date ");
			
			}
	
	
	if (x>0 && z!=1){
		printf("\n Valid Date :");
		}
	else{
		printf("\n Invalid Date..");}
	return 0;
}
		
	
