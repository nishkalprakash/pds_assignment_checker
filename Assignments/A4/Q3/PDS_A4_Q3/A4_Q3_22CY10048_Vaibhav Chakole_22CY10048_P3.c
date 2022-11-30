/*
Section 14
Roll No: 22CY10048
Name: Vaibhav Tulshidas Chakole
Assignment number: 4
Description : printing a entered number in reverse order in words
*/
#include<stdio.h>
int main()
{
 long int num,rem,revnum;		
 printf("enter any number:-"); 		// getting any integer entered
 scanf("%ld",&num);
if(num==0)
{ 
 printf("zero\n");
}
 while(num!=0)
 {
  rem=num%10;		//getting remainder
  switch(rem)		//printing digits in words using switch
 { 
	case 0:
	printf(" zero ");
	break;
case 1:
	printf(" one ");
	break;
case 2:
	printf(" two ");
	break;
case 3:
	printf(" three ");
	break;
case 4:
	printf(" four ");
	break;
case 5:
	printf(" five ");
	break;
case 6:
	printf(" six ");
	break;
case 7:
	printf(" seven ");
	break;
case 8:
	printf(" eight ");
	break;
case 9:
	printf("nine ");
	break;

	
 }
num=num/10;
 } 
return 0;
}
