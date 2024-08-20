//code to check validity of date
 //created by Ashutosh Singhal
// roll number - 24NA10020
#include <stdio.h>
int main()
{
	int a,b,c;
 	printf("enter the date in ddmmyyyy format");
 	scanf("%d %d %d",&a ,&b ,&c);
 	if(b==1||b==3||b==5||b==7||b==8||b==10||b==12 && a<=31){
 	printf("the date is valid \n");
 	}
 	else if (b==4||b==6||b==9||b==11 && a<=30){
 	printf("the date is valid \n");
 	}
 	else if (c %100==0 && c%400==0 && b==02 && a<=29){
 	printf("the date is valid \n");
 	}
 	else if (c %100==0 && c%400!=0 && b==02 && a==29){
 	printf("the date is invalid \n");
 	}
 	else if (c%4==0 && b==2 && a<=29){
 	printf("the date is valid \n");
 	}
 	else if (c%4 !=0 && b <=28){
 	printf("the date is valid \n");
 	}
 	else {
 	printf("the date is invalid \n");
 	}	
 	return 0;
 }	
