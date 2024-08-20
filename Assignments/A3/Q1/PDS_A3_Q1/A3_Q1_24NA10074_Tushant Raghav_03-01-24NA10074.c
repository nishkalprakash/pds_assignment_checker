#include<stdio.h>
int main()
{
int d, m, y;
printf("Enter the date (DD MM YYYY) format : ");
scanf("%d %d %d",&d,&m,&y);

if(y>0 && y%4==0){
	if(m==1||m==3||m==5||m==7||m==8||m==10||m==12){
		if(d>=1 && d<=31){printf("VAlid");}}
	if (m==4||m==6||m==9||m==11){
		if(d>=1 && d<=30){printf("VAlid");}}
	if(m==2){
		if(d>=1 && d<=29){printf("Valid");}}
		
	
	
	}
else if (y>0 && y%4!=0){
	
	if(m==1||m==3||m==5||m==7||m==8||m==10||m==12){
		if(d>=1 && d<=31){printf("Valid");}}
	if (m==4||m==6||m==9||m==11){
		if(d>=1 && d<=30){printf("valid");}}
	if(m==2){
		if(d>=1 && d<=28){printf("Valid");}}
	
	}

else{
printf("Invalid Date");}

		
 return 0;
} 



