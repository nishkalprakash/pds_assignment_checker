/*
Section 14
Roll No: 22MF10045
Name: Varun Huchchannavar
Assignment No:3
Description: Program that takes a two-digit integer between 20 to 99 as input and prints the input value in words.
*/
#include<stdio.h>
int main()
{
	int n;
	printf("Enter the two digit number");
	scanf("%d",&n);
	if(n>20&& n<=99);
	int t;
	int ones;
        t=n/10;
        ones=n%10;
        switch(t){
	case 2:
printf("Twenty");
        break;
  	case 3:
printf("Thirty");
        break;
	case 4:
printf("Forty");
        break;
	case 5:
printf("Fifty");
        break;
	case 6:
printf("Sixty");
	break;
	case 7:
printf("Seventy");
	break;
	case 8:
printf("Eighty");
	break;
	case 9:
printf("Ninety");
         }
	switch(ones){
	case 1:
printf("One");
	break;
	case 2:
printf("Two");
	break;
	case 3:
printf("Three");
	break;
	case 4:
printf("Four");
	break;
	case 5:
printf("Five");
	break;
	case 6:
printf("Six");
	break;
	case 7:
printf("Seven");
	break;
	case 8:
printf("Eight");
	break;
	case 9:
printf("Nine");
	break;
}
return 0;
}

	
        
	
