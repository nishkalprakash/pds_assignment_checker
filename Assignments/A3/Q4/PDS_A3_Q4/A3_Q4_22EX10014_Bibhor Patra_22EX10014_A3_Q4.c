/*
Section 14
Roll no: 22EX10014
Name: Bibhor Patra
Assignment no:3
Description: program to calculate electricity bill
*/

#include<stdio.h>
int main()
{
	int pwr; //declaration of variables
	printf("please enter power consumed in KWH");
	scanf(" %d",&pwr); //units input


	if(pwr<=100){
		printf("Total cost is Rs 60");
	}
	// calculation if power is less than or equal to 100
    else if(pwr<=200){
    	printf("The total cost is Rs %f",60+((pwr - 100)*0.9));
    }
    //calculation if power is less than or equal to 200
    else if(pwr<=300){
    	printf("The total cost is  Rs %f", 150+ ((pwr - 200)*1.44));
    }
    //calculation if power is less than or equal to 300
    else {
    	printf("The total cost is Rs %f",294+ ((pwr-300)*1.8));
    }
    //calculation if power is more than 300
    return 0;


}
