// Program to compute the sum of the series
// Code Creater=Aditya Samir Bhide
// Roll No:24NA10011
#include<stdio.h>
void main()
{
	int a,ones,tens,hundreds,s1,s2,s3; //declaring all the variables 
	printf("\n Enter an integer \n"); 
	scanf("%d",&a); // accepting the integer from the user
	s1=(a*(a+1))/2; // calculating the sum of the series 1+2+...+a using formula
	s2=(a*(a+1)*(2*a+1))/6; // calculating the sum of the series 1^2+2^2+...+a^2 using formula
	ones=a%10; // calculating one's digit
	tens=(a/10)%10; // calculating ten's digit
	hundreds=a/100; // calculating hundreds's digit
	s3=ones+tens+hundreds;
	printf("s1=%d \n",s1);
	printf("s2=%d \n",s2);
	printf("s3=%d \n",s3);
}

