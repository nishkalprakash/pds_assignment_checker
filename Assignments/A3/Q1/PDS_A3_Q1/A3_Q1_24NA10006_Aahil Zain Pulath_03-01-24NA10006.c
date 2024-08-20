#include <stdio.h>
int main()
{
int dd,mm,yy;
printf("ENTER DATE IN DD MM YY FORMAT:"),
scanf("%d,%d,%d",&dd,&mm,&yy);
if (mm==2){
	 if (dd>=1&&dd<=29){
		 if (yy%100==0){
			 if (yy%400==0)
			 printf("it is a valid year:");
			 else if (yy%4==0)
			 printf("it is a valid year:");}}
	 	else {
		printf("invalid year:");}}
else if (mm==1||mm==3||mm==5||mm==7||mm==8||mm==10||mm==12){
	 if (dd<=31&&dd>=1)
	 printf("Valid year:");
	 else{
	 printf("invalid year:");}}
else if (mm==4||mm==6||mm==9||mm==11){
 if (dd<=30&&dd>=1)
 printf("valid year:");}
		 
else{
	printf("invalid year:");}
 
}
  
   


 
